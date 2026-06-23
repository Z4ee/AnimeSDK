#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWRESULTCAMERAANIMNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1929E070)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWRESULTCAMERAANIMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1929E0E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowResultCameraAnimNode_TypeDefinitionIndex = 79119;

	class ConfigHollowResultCameraAnimNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* CameraKey; // 0x18
		::System::Single DelayTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWRESULTCAMERAANIMNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWRESULTCAMERAANIMNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
