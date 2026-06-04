#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGPARTNERABILITYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19CE3FA0)
#define RPG_GAMECORE_SWORDTRAININGPARTNERABILITYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19CE42E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingPartnerAbilityRow_TypeDefinitionIndex = 11862;

	class SwordTrainingPartnerAbilityRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EffectIDList; // 0x10
		::Il2CppArray<::System::Single>* DescParamList; // 0x18
		::System::String* AbilityIcon; // 0x20
		::RPG::Client::TextID AbilityDesc; // 0x28
		::RPG::Client::TextID AbilityName; // 0x38
		::System::UInt32 PartnerAbilityID; // 0x48
		::System::UInt32 Rare; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNERABILITYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingPartnerAbilityRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingPartnerAbilityRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNERABILITYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
