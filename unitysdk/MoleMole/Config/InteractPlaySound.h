#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HollowInteractEffectImpBase.h"

class Class_1_32D1736C0D56C181;

#define MOLEMOLE_CONFIG_INTERACTPLAYSOUND_ONINTERACTINTERNAL_OFFSET UNITYSDK_OFFSET(0x16269EA0)
#define MOLEMOLE_CONFIG_INTERACTPLAYSOUND_ONSTOP_OFFSET UNITYSDK_OFFSET(0x16269E50)
#define MOLEMOLE_CONFIG_INTERACTPLAYSOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x1626A010)

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractPlaySound_TypeDefinitionIndex = 41396;

	class InteractPlaySound : public ::MoleMole::Config::HollowInteractEffectImpBase
	{
	public:
		::System::Int32 SoundID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTPLAYSOUND__CTOR_OFFSET))(this);
		}

		::System::Void OnStop(::Class_1_32D1736C0D56C181* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_32D1736C0D56C181*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTPLAYSOUND_ONSTOP_OFFSET))(this, context);
		}

		::System::Void OnInteractInternal(::Class_1_32D1736C0D56C181* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_32D1736C0D56C181*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTPLAYSOUND_ONINTERACTINTERNAL_OFFSET))(this, context);
		}
	};
}
