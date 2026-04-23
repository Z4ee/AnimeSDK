#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYQUESTTABGROUPUIROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1862B8C0)
#define RPG_GAMECORE_ACTIVITYQUESTTABGROUPUIROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1862BA40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityQuestTabGroupUIRow_TypeDefinitionIndex = 11640;

	class ActivityQuestTabGroupUIRow : public ::System::Object
	{
	public:
		::System::String* TabItemPrefabPath; // 0x10
		::System::String* BgPrefabPath; // 0x18
		::System::UInt32 QuestTabGroupID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTTABGROUPUIROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityQuestTabGroupUIRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityQuestTabGroupUIRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTTABGROUPUIROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
