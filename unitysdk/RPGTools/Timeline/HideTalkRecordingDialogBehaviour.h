#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/BaseHideDialogBehaviour.h"

#define RPGTOOLS_TIMELINE_HIDETALKRECORDINGDIALOGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB6E270)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int HideTalkRecordingDialogBehaviour_TypeDefinitionIndex = 39119;

	class HideTalkRecordingDialogBehaviour : public ::RPGTools::Timeline::BaseHideDialogBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDETALKRECORDINGDIALOGBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
