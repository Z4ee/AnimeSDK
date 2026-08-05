#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWRESULTCAMERAANIMNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x148660E0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWRESULTCAMERAANIMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x14866150)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowResultCameraAnimNode_TypeDefinitionIndex = 63677;

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
