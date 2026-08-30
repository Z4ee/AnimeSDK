#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SwordTrainingTurnType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWORDTRAININGPROGRESSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5957F0)
#define RPG_GAMECORE_SWORDTRAININGPROGRESSROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D595C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingProgressRow_TypeDefinitionIndex = 12340;

	class SwordTrainingProgressRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ActionIDList; // 0x10
		::RPG::Client::TextID SectionHint; // 0x18
		::System::UInt32 RecommendPower; // 0x28
		::System::UInt32 ExamID; // 0x2C
		::RPG::GameCore::SwordTrainingTurnType TurnType; // 0x30
		::System::UInt32 PartnerAbilityGroupID; // 0x34
		::System::UInt32 PartnerAbilitySelectNum; // 0x38
		::System::UInt32 TurnID; // 0x3C
		::RPG::Client::TextID TurnName; // 0x40
		::RPG::Client::TextID PartnerAbilitySelectHint; // 0x50

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
