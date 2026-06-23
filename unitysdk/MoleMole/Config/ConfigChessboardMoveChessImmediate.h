#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSetSection_Order.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDMOVECHESSIMMEDIATE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1270F530)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDMOVECHESSIMMEDIATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1270F5F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardMoveChessImmediate_TypeDefinitionIndex = 42293;

	class ConfigChessboardMoveChessImmediate : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* TargetPositionKey; // 0x18
		::System::String* PivotCellKey; // 0x20
		::MoleMole::Config::ConfigSetSection_Order ConfigOrder; // 0x28
		::UnityEngine::Vector3 Offset; // 0x2C
		::System::Boolean UseSpecific; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDMOVECHESSIMMEDIATE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDMOVECHESSIMMEDIATE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
