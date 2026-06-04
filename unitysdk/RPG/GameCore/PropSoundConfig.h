#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropSoundAttenuation; }
namespace System { class String; }

#define RPG_GAMECORE_PROPSOUNDCONFIG_METHOD_2_9444E3FB98087576_OFFSET UNITYSDK_OFFSET(0x19A9ABE0)
#define RPG_GAMECORE_PROPSOUNDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19A9AF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSoundConfig_TypeDefinitionIndex = 16683;

	class PropSoundConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* OnEnterTriggerEvent; // 0x10
		::System::String* OnExitTriggerEvent; // 0x18
		::System::Single EnterTriggerWaitTime; // 0x20
		::System::Boolean IsLoop; // 0x24
		::RPG::GameCore::PropSoundAttenuation* SoundAttenuationConfig; // 0x28
		::System::Boolean IsOcclusion; // 0x30
		::System::Single DefaultTriggerRange; // 0x34
		::System::Boolean InRoomEmitter; // 0x38
		::System::String* AudioSwichGroupName; // 0x40
		::System::String* AudioSwichName; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSOUNDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9444E3FB98087576(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSoundConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSoundConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSOUNDCONFIG_METHOD_2_9444E3FB98087576_OFFSET))(a1, a2);
		}
	};
}
