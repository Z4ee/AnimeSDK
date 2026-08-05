#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigPlayFullScreenVideoNode_FullScreenVideoPlayItem.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGPLAYFULLSCREENVIDEONODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1BD607E0)
#define MOLEMOLE_CONFIG_CONFIGPLAYFULLSCREENVIDEONODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD60850)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayFullScreenVideoNode_TypeDefinitionIndex = 53792;

	class ConfigPlayFullScreenVideoNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* SkipPlayKey; // 0x18
		::Il2CppArray<::MoleMole::Config::ConfigPlayFullScreenVideoNode_FullScreenVideoPlayItem>* PlayItems; // 0x20
		::System::Boolean IsTryStopPrev; // 0x28
		::System::Single CloseDelay; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYFULLSCREENVIDEONODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYFULLSCREENVIDEONODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
