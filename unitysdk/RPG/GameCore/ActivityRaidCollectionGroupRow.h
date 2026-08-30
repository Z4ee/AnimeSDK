#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CA174E0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA181B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRaidCollectionGroupRow_TypeDefinitionIndex = 12241;

	class ActivityRaidCollectionGroupRow : public ::System::Object
	{
	public:
		::System::String* GroupEntrancePrefabPath; // 0x10
		::Il2CppArray<::System::UInt32>* RaidCollectionList; // 0x18
		::System::UInt32 UnlockGroupID; // 0x20
		::System::UInt32 RaidCollectionGroupID; // 0x24
		::System::Boolean RaidCollectionGroupNextEnable; // 0x28
		::RPG::Client::TextID RaidCollectionGroupName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityRaidCollectionGroupRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityRaidCollectionGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
