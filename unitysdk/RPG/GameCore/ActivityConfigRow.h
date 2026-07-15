#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AADE560)
#define RPG_GAMECORE_ACTIVITYCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AADE750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityConfigRow_TypeDefinitionIndex = 10810;

	class ActivityConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ActivityModuleIDList; // 0x10
		::Il2CppArray<::System::UInt32>* ResidentModuleList; // 0x18
		::System::UInt32 EarlyAccessContentID; // 0x20
		::System::UInt32 ActivityID; // 0x24
		::System::UInt32 ActivityPanelID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
