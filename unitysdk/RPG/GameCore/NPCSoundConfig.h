#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class NPCTriggerSound; }
namespace RPG::GameCore { class PropSoundAttenuation; }
namespace System { class String; }

#define RPG_GAMECORE_NPCSOUNDCONFIG_METHOD_2_82A2F31922F23748_OFFSET UNITYSDK_OFFSET(0x18B7A570)
#define RPG_GAMECORE_NPCSOUNDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18B7A750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCSoundConfig_TypeDefinitionIndex = 16580;

	class NPCSoundConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::NPCTriggerSound*>* NPCTriggerEnterSound; // 0x10
		::System::Single defaultTriggerRange; // 0x18
		::RPG::GameCore::PropSoundAttenuation* SoundAttenuationConfig; // 0x20
		::System::String* NPCAudioSwichGroupName; // 0x28
		::System::String* NPCAudioSwichName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCSOUNDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_82A2F31922F23748(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NPCSoundConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NPCSoundConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCSOUNDCONFIG_METHOD_2_82A2F31922F23748_OFFSET))(a1, a2);
		}
	};
}
