#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWORDTRAININGCHECKIFGAMESTARTED_METHOD_3_1130DD05AC7E493E_OFFSET UNITYSDK_OFFSET(0x19CE1F30)
#define RPG_GAMECORE_SWORDTRAININGCHECKIFGAMESTARTED_METHOD_3_4B16ADCB006C5592_OFFSET UNITYSDK_OFFSET(0x19CE1FB0)
#define RPG_GAMECORE_SWORDTRAININGCHECKIFGAMESTARTED__CTOR_OFFSET UNITYSDK_OFFSET(0x19CE1F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingCheckIfGameStarted_TypeDefinitionIndex = 19845;

	class SwordTrainingCheckIfGameStarted : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnGameStarted; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnGameNotStart; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGCHECKIFGAMESTARTED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1130DD05AC7E493E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingCheckIfGameStarted*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingCheckIfGameStarted*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGCHECKIFGAMESTARTED_METHOD_3_1130DD05AC7E493E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4B16ADCB006C5592(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingCheckIfGameStarted* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingCheckIfGameStarted*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGCHECKIFGAMESTARTED_METHOD_3_4B16ADCB006C5592_OFFSET))(a1, a2);
		}
	};
}
