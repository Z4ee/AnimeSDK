#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOGENERALLEVELUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11BEF7F0)

inline static constexpr unsigned int MonoGeneralLevelUpConfig_TypeDefinitionIndex = 57296;

class MonoGeneralLevelUpConfig : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single ExpProgressDuration; // 0x18
	::System::Single WaitBeforeClose; // 0x1C
	::System::Int32 LevelNumberUpFrame; // 0x20
	::System::Single EffectTimeOffset; // 0x24
	::System::Single AnimTimeOffset; // 0x28
	::System::Single EffectStayTime; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOGENERALLEVELUPCONFIG__CTOR_OFFSET))(this);
	}
};
