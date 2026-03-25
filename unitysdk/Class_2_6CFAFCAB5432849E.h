#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define CLASS_2_6CFAFCAB5432849E_GET_ENABLEAUTOBLINK_OFFSET UNITYSDK_OFFSET(0x114DE530)
#define CLASS_2_6CFAFCAB5432849E_SET_ENABLEAUTOBLINK_OFFSET UNITYSDK_OFFSET(0x114DE540)
#define CLASS_2_6CFAFCAB5432849E__CTOR_OFFSET UNITYSDK_OFFSET(0x114DE550)

inline static constexpr unsigned int Class_2_6CFAFCAB5432849E_TypeDefinitionIndex = 38723;

class Class_2_6CFAFCAB5432849E : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Boolean _EnableAutoBlink_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CFAFCAB5432849E__CTOR_OFFSET))(this);
	}

	::System::Boolean get_EnableAutoBlink()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CFAFCAB5432849E_GET_ENABLEAUTOBLINK_OFFSET))(this);
	}

	::System::Void set_EnableAutoBlink(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6CFAFCAB5432849E_SET_ENABLEAUTOBLINK_OFFSET))(this, value);
	}
};
