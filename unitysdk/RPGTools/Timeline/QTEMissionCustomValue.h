#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MissionCustomValue; }

#define RPGTOOLS_TIMELINE_QTEMISSIONCUSTOMVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0xE8DA860)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int QTEMissionCustomValue_TypeDefinitionIndex = 48722;

	class QTEMissionCustomValue : public ::System::Object
	{
	public:
		::System::UInt32 SubmissionID; // 0x10
		::RPG::GameCore::MissionCustomValue* MissionCustomValue; // 0x18
		::System::UInt32 SuccCustomValue; // 0x20
		::System::UInt32 FailCustomValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMISSIONCUSTOMVALUE__CTOR_OFFSET))(this);
		}
	};
}
