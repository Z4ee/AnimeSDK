#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_GAMECORE_CUMULATIVESCOREBOARDCONFIGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE624D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CumulativeScoreBoardConfigData_TypeDefinitionIndex = 52089;

	class CumulativeScoreBoardConfigData : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt64>* ChangeValues; // 0x18
		::System::UInt64 TotalChangeValue; // 0x20
		::System::UInt64 TargetValue; // 0x28
		::System::UInt64 ProgressBarStartValue; // 0x30
		::System::UInt32 ConfigID; // 0x38
		::System::Boolean IsShowProgressBar; // 0x3C
		::System::Boolean IsDecrease; // 0x3D
		::System::Single ExtraDurationTime; // 0x40
		::System::Int32 MaxDigit; // 0x44
		::System::Int32 TotalChangeTimes; // 0x48
		::System::UInt64 EndValue; // 0x50
		::System::UInt64 StartValue; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUMULATIVESCOREBOARDCONFIGDATA__CTOR_OFFSET))(this);
		}
	};
}
