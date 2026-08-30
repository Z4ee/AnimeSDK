#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DemodulatorOutPutType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define STAGEHARMONYDEMODULATORUSRINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xE937EA0)

inline static constexpr unsigned int StageHarmonyDemodulatorUsrInfo_TypeDefinitionIndex = 47981;

class StageHarmonyDemodulatorUsrInfo : public ::System::Object
{
public:
	::System::Int32 usrInfo; // 0x10
	::System::String* hostType; // 0x18
	::DemodulatorOutPutType valType; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYDEMODULATORUSRINFO__CTOR_OFFSET))(this);
	}
};
