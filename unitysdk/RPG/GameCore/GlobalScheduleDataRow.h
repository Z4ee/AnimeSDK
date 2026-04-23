#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GLOBALSCHEDULEDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18998360)
#define RPG_GAMECORE_GLOBALSCHEDULEDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18998540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GlobalScheduleDataRow_TypeDefinitionIndex = 14300;

	class GlobalScheduleDataRow : public ::System::Object
	{
	public:
		::System::String* BeginTime; // 0x10
		::System::String* GlobalEndTime; // 0x18
		::System::String* EndTime; // 0x20
		::System::String* GlobalBeginTime; // 0x28
		::System::UInt32 ID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALSCHEDULEDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GlobalScheduleDataRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GlobalScheduleDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALSCHEDULEDATAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
