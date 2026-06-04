#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYLOGINCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x193F1800)
#define RPG_GAMECORE_ACTIVITYLOGINCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x193F1DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityLoginConfigRow_TypeDefinitionIndex = 10778;

	class ActivityLoginConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RewardList; // 0x10
		::System::UInt32 ActivityModuleID; // 0x18
		::System::UInt32 ID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYLOGINCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityLoginConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityLoginConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYLOGINCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
