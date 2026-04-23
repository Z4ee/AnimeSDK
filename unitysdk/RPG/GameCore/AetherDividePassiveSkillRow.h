#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AetherPassiveSkillType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18686C10)
#define RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186874E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDividePassiveSkillRow_TypeDefinitionIndex = 10465;

	class AetherDividePassiveSkillRow : public ::System::Object
	{
	public:
		::System::String* ItemDescription; // 0x10
		::System::String* PassiveSkillDescription; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* SimpleParamList; // 0x28
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x30
		::Il2CppArray<::System::UInt32>* SimpleExtraEffectIDList; // 0x38
		::System::String* PassiveSkillName; // 0x40
		::System::String* AbilityName; // 0x48
		::System::UInt32 ItemID; // 0x50
		::RPG::GameCore::AetherPassiveSkillType PassiveSkillType; // 0x54
		::System::UInt32 Rarity; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AetherDividePassiveSkillRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherDividePassiveSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
