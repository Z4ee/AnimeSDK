#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivityLocalLegendRewardType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYLOCALLEGENDREWARDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18620C90)
#define RPG_GAMECORE_ACTIVITYLOCALLEGENDREWARDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18620E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityLocalLegendRewardConfigRow_TypeDefinitionIndex = 11286;

	class ActivityLocalLegendRewardConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Int32 Sort; // 0x14
		::RPG::GameCore::ActivityLocalLegendRewardType TaskType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYLOCALLEGENDREWARDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityLocalLegendRewardConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityLocalLegendRewardConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYLOCALLEGENDREWARDCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
