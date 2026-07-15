#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DAILYACTIVETYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BC43930)
#define RPG_GAMECORE_DAILYACTIVETYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC43A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DailyActiveTypeRow_TypeDefinitionIndex = 12620;

	class DailyActiveTypeRow : public ::System::Object
	{
	public:
		::System::UInt32 Type; // 0x10
		::System::UInt32 PoolSort; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYACTIVETYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DailyActiveTypeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DailyActiveTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYACTIVETYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
