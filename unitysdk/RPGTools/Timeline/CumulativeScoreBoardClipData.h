#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_CUMULATIVESCOREBOARDCLIPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D14BE20)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CumulativeScoreBoardClipData_TypeDefinitionIndex = 48738;

	class CumulativeScoreBoardClipData : public ::System::Object
	{
	public:
		::System::UInt32 ConfigID; // 0x10
		::System::Boolean UseStartValue; // 0x14
		::System::UInt32 MCVSubmissionID; // 0x18
		::System::String* MCVMissionName; // 0x20
		::System::UInt32 StartValue; // 0x28
		::Il2CppArray<::System::UInt32>* ChangeValues; // 0x30
		::System::Single ExtraDurationTime; // 0x38
		::System::Boolean IsShowProgressBar; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUMULATIVESCOREBOARDCLIPDATA__CTOR_OFFSET))(this);
		}
	};
}
