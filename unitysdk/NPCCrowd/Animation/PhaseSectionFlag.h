#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/FootLockStatus.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_PHASESECTIONFLAG_GET_FOOTSTATUS_OFFSET UNITYSDK_OFFSET(0x6532A0)
#define NPCCROWD_ANIMATION_PHASESECTIONFLAG_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x653260)
#define NPCCROWD_ANIMATION_PHASESECTIONFLAG_SET_FOOTSTATUS_OFFSET UNITYSDK_OFFSET(0x6532B0)
#define NPCCROWD_ANIMATION_PHASESECTIONFLAG_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x653270)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int PhaseSectionFlag_TypeDefinitionIndex = 50285;

	struct alignas(1) PhaseSectionFlag
	{
		// static const ::System::Int32 LockOffset = 0x0; // 0x0
		// static const ::System::Int32 LockBitNum = 0x3; // 0x0
		// static const ::System::Int32 LockMask = 0x7; // 0x0
		::System::Byte _data; // 0x10

		::System::Single get_Value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_PHASESECTIONFLAG_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_PHASESECTIONFLAG_SET_VALUE_OFFSET))(this, value);
		}

		::NPCCrowd::Animation::FootLockStatus get_FootStatus()
		{
			return ((::NPCCrowd::Animation::FootLockStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_PHASESECTIONFLAG_GET_FOOTSTATUS_OFFSET))(this);
		}

		::System::Void set_FootStatus(::NPCCrowd::Animation::FootLockStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::FootLockStatus))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_PHASESECTIONFLAG_SET_FOOTSTATUS_OFFSET))(this, value);
		}
	};
}
