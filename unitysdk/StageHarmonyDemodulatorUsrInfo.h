#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DemodulatorOutPutType.h"
#include "unitysdk/System/Object.h"

class StageHarmonyLightModLinkSlot;
namespace System { class String; }

#define STAGEHARMONYDEMODULATORUSRINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB9512B0)

inline static constexpr unsigned int StageHarmonyDemodulatorUsrInfo_TypeDefinitionIndex = 44266;

class StageHarmonyDemodulatorUsrInfo : public ::System::Object
{
public:
	::System::Int32 usrInfo; // 0x10
	::System::String* hostType; // 0x18
	::DemodulatorOutPutType valType; // 0x20
	::StageHarmonyLightModLinkSlot* inst; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYDEMODULATORUSRINFO__CTOR_OFFSET))(this);
	}
};
