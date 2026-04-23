#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/BaseHideDialogBehaviour.h"

#define RPGTOOLS_TIMELINE_HIDETALKRECORDINGDIALOGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB8E2090)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int HideTalkRecordingDialogBehaviour_TypeDefinitionIndex = 45022;

	class HideTalkRecordingDialogBehaviour : public ::RPGTools::Timeline::BaseHideDialogBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDETALKRECORDINGDIALOGBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
