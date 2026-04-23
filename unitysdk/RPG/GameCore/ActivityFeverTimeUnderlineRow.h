#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18618F70)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18619530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFeverTimeUnderlineRow_TypeDefinitionIndex = 11040;

	class ActivityFeverTimeUnderlineRow : public ::System::Object
	{
	public:
		::System::UInt32 AvailableBuffID; // 0x10
		::System::UInt32 ExtraEffectID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityFeverTimeUnderlineRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityFeverTimeUnderlineRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
