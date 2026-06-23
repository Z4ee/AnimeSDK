#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectValue_1.h"

#define MOLEMOLE_CONFIG_SCREENEFFECTFLOAT_GETVALUE_OFFSET UNITYSDK_OFFSET(0x158C2280)
#define MOLEMOLE_CONFIG_SCREENEFFECTFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x158C2350)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScreenEffectFloat_TypeDefinitionIndex = 73446;

	class ScreenEffectFloat : public ::MoleMole::Config::ScreenEffectValue_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCREENEFFECTFLOAT__CTOR_OFFSET))(this);
		}

		::System::Single GetValue(::System::Single curTime, ::System::Single totalTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCREENEFFECTFLOAT_GETVALUE_OFFSET))(this, curTime, totalTime);
		}
	};
}
