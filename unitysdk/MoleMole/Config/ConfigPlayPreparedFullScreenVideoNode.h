#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGPLAYPREPAREDFULLSCREENVIDEONODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xF980310)
#define MOLEMOLE_CONFIG_CONFIGPLAYPREPAREDFULLSCREENVIDEONODE__CTOR_OFFSET UNITYSDK_OFFSET(0xF980380)
#define MOLEMOLE_CONFIG_CONFIGPLAYPREPAREDFULLSCREENVIDEONODE__ONCHANGED_OFFSET UNITYSDK_OFFSET(0xF9802B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayPreparedFullScreenVideoNode_TypeDefinitionIndex = 43864;

	class ConfigPlayPreparedFullScreenVideoNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* VideoTag; // 0x18
		::System::Boolean IsCloseWhenFinish; // 0x20
		::System::Boolean IsSkipOnFastMode; // 0x21
		::System::Boolean DontCloseWhenDestroy; // 0x22
		::System::Boolean IsLoopVideo; // 0x23

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYPREPAREDFULLSCREENVIDEONODE__CTOR_OFFSET))(this);
		}

		::System::Void _OnChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYPREPAREDFULLSCREENVIDEONODE__ONCHANGED_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYPREPAREDFULLSCREENVIDEONODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
