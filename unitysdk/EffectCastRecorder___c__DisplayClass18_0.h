#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

#define EFFECTCASTRECORDER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19093530)
#define EFFECTCASTRECORDER___C__DISPLAYCLASS18_0__WRITEFILEIFNEED_B__3_OFFSET UNITYSDK_OFFSET(0x19093540)

inline static constexpr unsigned int EffectCastRecorder___c__DisplayClass18_0_TypeDefinitionIndex = 76355;

class EffectCastRecorder___c__DisplayClass18_0 : public ::System::Object
{
public:
	::Foundation::AssetPath effectPath; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTCASTRECORDER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _WriteFileIfNeed_b__3(::Foundation::AssetPath p)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + EFFECTCASTRECORDER___C__DISPLAYCLASS18_0__WRITEFILEIFNEED_B__3_OFFSET))(this, p);
	}
};
