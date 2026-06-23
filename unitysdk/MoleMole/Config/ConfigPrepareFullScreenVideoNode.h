#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigPrepareFullScreenVideoNode_FullScreenVideoPlayItem.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGPREPAREFULLSCREENVIDEONODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1A354220)
#define MOLEMOLE_CONFIG_CONFIGPREPAREFULLSCREENVIDEONODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A354290)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPrepareFullScreenVideoNode_TypeDefinitionIndex = 41402;

	class ConfigPrepareFullScreenVideoNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::Il2CppArray<::MoleMole::Config::ConfigPrepareFullScreenVideoNode_FullScreenVideoPlayItem>* PlayItems; // 0x18
		::System::String* VideoTag; // 0x20
		::System::Boolean WaitForPrepareFinish; // 0x28
		::System::Boolean IsSkipOnFastMode; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPREPAREFULLSCREENVIDEONODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPREPAREFULLSCREENVIDEONODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
