#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYAVATARDEMOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x193D4850)
#define RPG_GAMECORE_ACTIVITYAVATARDEMOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x193D4960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityAvatarDemoRow_TypeDefinitionIndex = 10786;

	class ActivityAvatarDemoRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TypeParam; // 0x10
		::System::UInt32 ActivityID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYAVATARDEMOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityAvatarDemoRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityAvatarDemoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYAVATARDEMOROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
