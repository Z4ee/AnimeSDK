#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SCHEDULEDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1769BC60)
#define RPG_GAMECORE_SCHEDULEDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1769BDB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ScheduleDataRow_TypeDefinitionIndex = 13826;

	class ScheduleDataRow : public ::System::Object
	{
	public:
		::System::String* BeginTime; // 0x10
		::System::String* EndTime; // 0x18
		::System::UInt32 ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCHEDULEDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ScheduleDataRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ScheduleDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCHEDULEDATAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
