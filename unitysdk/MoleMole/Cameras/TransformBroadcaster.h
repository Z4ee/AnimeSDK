#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_CAMERAS_TRANSFORMBROADCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A04AF10)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int TransformBroadcaster_TypeDefinitionIndex = 40087;

	class TransformBroadcaster : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_TRANSFORMBROADCASTER__CTOR_OFFSET))(this);
		}
	};
}
