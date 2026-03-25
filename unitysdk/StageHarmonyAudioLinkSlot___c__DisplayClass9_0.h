#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/System/Object.h"

class AkCallbackInfo;
class StageHarmonyAudioLinkSlot;

#define STAGEHARMONYAUDIOLINKSLOT___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xABDB2D0)
#define STAGEHARMONYAUDIOLINKSLOT___C__DISPLAYCLASS9_0__PLAYAUDIOEVENT_B__0_OFFSET UNITYSDK_OFFSET(0xABDB470)

inline static constexpr unsigned int StageHarmonyAudioLinkSlot___c__DisplayClass9_0_TypeDefinitionIndex = 38398;

class StageHarmonyAudioLinkSlot___c__DisplayClass9_0 : public ::System::Object
{
public:
	::StageHarmonyAudioLinkSlot* __4__this; // 0x10
	::System::Int32 demodulatorIndex; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIOLINKSLOT___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Void _PlayAudioEvent_b__0(::System::UInt32 id, ::AkCallbackType type, ::AkCallbackInfo* info)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIOLINKSLOT___C__DISPLAYCLASS9_0__PLAYAUDIOEVENT_B__0_OFFSET))(this, id, type, info);
	}
};
