#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyPerformanceCharacter.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYPERFORMANCEDEFINECHARACTER_METHOD_3_A2B16FA177305A19_OFFSET UNITYSDK_OFFSET(0x1C163080)
#define RPG_GAMECORE_TRAINPARTYPERFORMANCEDEFINECHARACTER_METHOD_3_BA3E354EC6844DBF_OFFSET UNITYSDK_OFFSET(0x1C163640)
#define RPG_GAMECORE_TRAINPARTYPERFORMANCEDEFINECHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C163070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyPerformanceDefineCharacter_TypeDefinitionIndex = 15617;

	class TrainPartyPerformanceDefineCharacter : public ::RPG::GameCore::TrainPartyPerformanceCharacter
	{
	public:
		::System::String* CharacterID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCEDEFINECHARACTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BA3E354EC6844DBF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyPerformanceDefineCharacter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyPerformanceDefineCharacter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCEDEFINECHARACTER_METHOD_3_BA3E354EC6844DBF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A2B16FA177305A19(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyPerformanceDefineCharacter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyPerformanceDefineCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCEDEFINECHARACTER_METHOD_3_A2B16FA177305A19_OFFSET))(a1, a2);
		}
	};
}
