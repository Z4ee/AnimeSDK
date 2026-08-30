#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_GAMECORE_CUMULATIVESCOREBOARDCONFIGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE597670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CumulativeScoreBoardConfigData_TypeDefinitionIndex = 52376;

	class CumulativeScoreBoardConfigData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt64>* ChangeValues; // 0x10
		::System::String* IconPath; // 0x18
		::System::UInt64 ProgressBarStartValue; // 0x20
		::System::UInt64 TotalChangeValue; // 0x28
		::System::UInt32 ConfigID; // 0x30
		::System::UInt64 EndValue; // 0x38
		::System::Int32 MaxDigit; // 0x40
		::System::Single ExtraDurationTime; // 0x44
		::System::UInt64 TargetValue; // 0x48
		::System::Int32 TotalChangeTimes; // 0x50
		::System::Boolean IsShowProgressBar; // 0x54
		::System::Boolean IsDecrease; // 0x55
		::System::UInt64 StartValue; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUMULATIVESCOREBOARDCONFIGDATA__CTOR_OFFSET))(this);
		}
	};
}
