#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigChessboardPieceProxyModel_PieceProxyModelActionType.h"
#include "unitysdk/MoleMole/Config/ConfigSetSection_Order.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDPIECEPROXYMODEL_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1703AD20)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDPIECEPROXYMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1703ADE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardPieceProxyModel_TypeDefinitionIndex = 69044;

	class ConfigChessboardPieceProxyModel : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* PivotCellKey; // 0x18
		::System::Boolean UseSpecific; // 0x20
		::MoleMole::Config::ConfigChessboardPieceProxyModel_PieceProxyModelActionType Type; // 0x24
		::MoleMole::Config::ConfigSetSection_Order ConfigOrder; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDPIECEPROXYMODEL__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDPIECEPROXYMODEL_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
