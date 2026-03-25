#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATARRANKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FAA260)
#define RPG_GAMECORE_AVATARRANKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16FAAB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarRankConfigRow_TypeDefinitionIndex = 11642;

	class AvatarRankConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* RankAbility; // 0x10
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x18
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* UnlockCost; // 0x20
		::System::String* IconPath; // 0x28
		::System::String* Name; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* SkillAddLevelList; // 0x38
		::Il2CppArray<::RPG::GameCore::FixPoint>* Param; // 0x40
		::System::String* Desc; // 0x48
		::System::UInt32 RankID; // 0x50
		::System::UInt32 Rank; // 0x54
		::RPG::GameCore::StringHash Trigger; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARRANKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarRankConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarRankConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARRANKCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
