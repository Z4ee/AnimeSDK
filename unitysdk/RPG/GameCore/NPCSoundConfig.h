#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class NPCTriggerSound; }
namespace RPG::GameCore { class PropSoundAttenuation; }
namespace System { class String; }

#define RPG_GAMECORE_NPCSOUNDCONFIG_METHOD_2_FA1046908782B2AB_OFFSET UNITYSDK_OFFSET(0x1D2EFD60)
#define RPG_GAMECORE_NPCSOUNDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2EFF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCSoundConfig_TypeDefinitionIndex = 17274;

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

		static ::System::Void Method_2_FA1046908782B2AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NPCSoundConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NPCSoundConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCSOUNDCONFIG_METHOD_2_FA1046908782B2AB_OFFSET))(a1, a2);
		}
	};
}
