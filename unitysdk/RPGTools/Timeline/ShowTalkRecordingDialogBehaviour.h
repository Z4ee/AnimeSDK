#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/BaseShowDialogBehaviour.h"

#define RPGTOOLS_TIMELINE_SHOWTALKRECORDINGDIALOGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xABA02C0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ShowTalkRecordingDialogBehaviour_TypeDefinitionIndex = 39134;

	class ShowTalkRecordingDialogBehaviour : public ::RPGTools::Timeline::BaseShowDialogBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWTALKRECORDINGDIALOGBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
