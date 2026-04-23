#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RaidCollectionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1862EBA0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1862F220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRaidCollectionInfoRow_TypeDefinitionIndex = 11649;

	class ActivityRaidCollectionInfoRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TabIDList; // 0x10
		::System::String* IconPath; // 0x18
		::System::UInt32 RewardID; // 0x20
		::System::UInt32 ActivityID; // 0x24
		::RPG::GameCore::RaidCollectionType RaidCollectionType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONINFOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityRaidCollectionInfoRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityRaidCollectionInfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONINFOROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
