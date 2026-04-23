#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLECOLLEGETYPEGROUPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186F1800)
#define RPG_GAMECORE_BATTLECOLLEGETYPEGROUPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186F1AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleCollegeTypeGroupConfigRow_TypeDefinitionIndex = 12134;

	class BattleCollegeTypeGroupConfigRow : public ::System::Object
	{
	public:
		::System::String* BackGroundImagePath; // 0x10
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* UnlockConditions; // 0x18
		::System::String* TabIconPath; // 0x20
		::System::UInt32 BattleCollegeTypeGroupID; // 0x28
		::System::Boolean IsAdvanced; // 0x2C
		::System::UInt32 RewardID; // 0x30
		::RPG::Client::TextID BattleCollegeTypeGroupIDTitle; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECOLLEGETYPEGROUPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::BattleCollegeTypeGroupConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleCollegeTypeGroupConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECOLLEGETYPEGROUPCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
