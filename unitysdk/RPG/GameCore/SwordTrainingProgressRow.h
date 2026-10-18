#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SwordTrainingTurnType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWORDTRAININGPROGRESSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB4C460)
#define RPG_GAMECORE_SWORDTRAININGPROGRESSROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB4C8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingProgressRow_TypeDefinitionIndex = 12426;

	class SwordTrainingProgressRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ActionIDList; // 0x10
		::RPG::Client::TextID TurnName; // 0x18
		::RPG::Client::TextID SectionHint; // 0x28
		::System::UInt32 PartnerAbilitySelectNum; // 0x38
		::RPG::GameCore::SwordTrainingTurnType TurnType; // 0x3C
		::System::UInt32 TurnID; // 0x40
		::System::UInt32 ExamID; // 0x44
		::RPG::Client::TextID PartnerAbilitySelectHint; // 0x48
		::System::UInt32 PartnerAbilityGroupID; // 0x58
		::System::UInt32 RecommendPower; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPROGRESSROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingProgressRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingProgressRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPROGRESSROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
