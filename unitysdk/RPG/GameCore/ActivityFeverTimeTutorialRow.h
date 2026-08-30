#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CA027C0)
#define RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA02E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFeverTimeTutorialRow_TypeDefinitionIndex = 11575;

	class ActivityFeverTimeTutorialRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RecommendAvatarList; // 0x10
		::System::UInt32 TutorialID; // 0x18
		::System::UInt32 P2AvailableBuffID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityFeverTimeTutorialRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityFeverTimeTutorialRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
