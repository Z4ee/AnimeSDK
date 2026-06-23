#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectValue_1.h"

#define MOLEMOLE_CONFIG_SCREENEFFECTBOOL_GETVALUE_OFFSET UNITYSDK_OFFSET(0x192AE5D0)
#define MOLEMOLE_CONFIG_SCREENEFFECTBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x192AE690)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScreenEffectBool_TypeDefinitionIndex = 67078;

	class ScreenEffectBool : public ::MoleMole::Config::ScreenEffectValue_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCREENEFFECTBOOL__CTOR_OFFSET))(this);
		}

		::System::Boolean GetValue(::System::Single curTime, ::System::Single totalTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCREENEFFECTBOOL_GETVALUE_OFFSET))(this, curTime, totalTime);
		}
	};
}
