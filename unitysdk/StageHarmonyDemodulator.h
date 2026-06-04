#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DemodulatorOutPutType.h"
#include "unitysdk/System/Object.h"

class StageHarmonyDemodulatorUsrInfo;
namespace System { class String; }

#define STAGEHARMONYDEMODULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xD096670)

inline static constexpr unsigned int StageHarmonyDemodulator_TypeDefinitionIndex = 44814;

class StageHarmonyDemodulator : public ::System::Object
{
public:
	::System::String* PropertyName; // 0x10
	::StageHarmonyDemodulatorUsrInfo* usrInfo; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYDEMODULATOR__CTOR_OFFSET))(this);
	}
};
