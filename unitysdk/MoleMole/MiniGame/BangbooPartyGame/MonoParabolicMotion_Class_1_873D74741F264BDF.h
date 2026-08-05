#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_CLASS_1_873D74741F264BDF_METHOD_1_91C638630F1EEE79_OFFSET UNITYSDK_OFFSET(0x19263950)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_CLASS_1_873D74741F264BDF_METHOD_1_D2038C9A874038B4_OFFSET UNITYSDK_OFFSET(0x192639F0)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_CLASS_1_873D74741F264BDF__CTOR_OFFSET UNITYSDK_OFFSET(0x192637D0)

namespace MoleMole::MiniGame::BangbooPartyGame
{
	inline static constexpr unsigned int MonoParabolicMotion_Class_1_873D74741F264BDF_TypeDefinitionIndex = 65304;

	class MonoParabolicMotion_Class_1_873D74741F264BDF : public ::System::Object
	{
	public:
		::System::Single Field_1_7; // 0x10
		::System::Single Field_1_5; // 0x14
		::System::Single Field_1_6; // 0x18
		::System::Single Field_1_10; // 0x1C
		::System::Single Field_1_0; // 0x20
		::System::Single Field_1_4; // 0x24
		::System::Single Field_1_11; // 0x28

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_CLASS_1_873D74741F264BDF__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single Method_1_D2038C9A874038B4(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_CLASS_1_873D74741F264BDF_METHOD_1_D2038C9A874038B4_OFFSET))(this, a1);
		}

		static ::System::Single Method_1_91C638630F1EEE79(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_CLASS_1_873D74741F264BDF_METHOD_1_91C638630F1EEE79_OFFSET))(a1, a2, a3);
		}
	};
}
