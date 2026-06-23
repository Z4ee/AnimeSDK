#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AKAMBIENTLARGEMODEPOSITIONER_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x1D90C9F0)
#define AKAMBIENTLARGEMODEPOSITIONER_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1D90C990)
#define AKAMBIENTLARGEMODEPOSITIONER_GET_UP_OFFSET UNITYSDK_OFFSET(0x1D90CB60)
#define AKAMBIENTLARGEMODEPOSITIONER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D90CCD0)

inline static constexpr unsigned int AkAmbientLargeModePositioner_TypeDefinitionIndex = 33132;

class AkAmbientLargeModePositioner : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAMBIENTLARGEMODEPOSITIONER__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_Position()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAMBIENTLARGEMODEPOSITIONER_GET_POSITION_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_Forward()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAMBIENTLARGEMODEPOSITIONER_GET_FORWARD_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_Up()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAMBIENTLARGEMODEPOSITIONER_GET_UP_OFFSET))(this);
	}
};
