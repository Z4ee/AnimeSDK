#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYELATIONMODIFIEDAVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16EA9CB0)
#define RPG_GAMECORE_ACTIVITYELATIONMODIFIEDAVATARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16EAA3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityElationModifiedAvatarRow_TypeDefinitionIndex = 10572;

	class ActivityElationModifiedAvatarRow : public ::System::Object
	{
	public:
		::System::String* GiftIcon; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList_EnergyCollection; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList_ModifiedSkill; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList_BESkill; // 0x28
		::RPG::Client::TextID Tag; // 0x30
		::RPG::Client::TextID EnergyCollection; // 0x40
		::RPG::Client::TextID GiftName; // 0x50
		::RPG::Client::TextID BESkill; // 0x60
		::System::UInt32 ID; // 0x70
		::System::UInt32 SpecialAvatarID; // 0x74
		::RPG::Client::TextID EnergyCollection_Simple; // 0x78
		::RPG::Client::TextID ModifiedSkill; // 0x88
		::RPG::Client::TextID BESkill_Simple; // 0x98
		::RPG::Client::TextID ModifiedSkill_Simple; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYELATIONMODIFIEDAVATARROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityElationModifiedAvatarRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityElationModifiedAvatarRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYELATIONMODIFIEDAVATARROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
