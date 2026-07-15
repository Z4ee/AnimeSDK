#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYMODIFIERGETCARDONINITIALCONFIG_METHOD_3_9660FE7E09C4F813_OFFSET UNITYSDK_OFFSET(0x1C161A20)
#define RPG_GAMECORE_TRAINPARTYMODIFIERGETCARDONINITIALCONFIG_METHOD_3_D9E288E0D371B057_OFFSET UNITYSDK_OFFSET(0x1C161850)
#define RPG_GAMECORE_TRAINPARTYMODIFIERGETCARDONINITIALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C161840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierGetCardOnInitialConfig_TypeDefinitionIndex = 17374;

	class TrainPartyModifierGetCardOnInitialConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERGETCARDONINITIALCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9660FE7E09C4F813(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierGetCardOnInitialConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierGetCardOnInitialConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERGETCARDONINITIALCONFIG_METHOD_3_9660FE7E09C4F813_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D9E288E0D371B057(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierGetCardOnInitialConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierGetCardOnInitialConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERGETCARDONINITIALCONFIG_METHOD_3_D9E288E0D371B057_OFFSET))(a1, a2);
		}
	};
}
