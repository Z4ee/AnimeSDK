#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define CINEMACHINE_CINEMACHINEPATHBASE_APPEARANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x12B95CB0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachinePathBase_Appearance_TypeDefinitionIndex = 36582;

	class CinemachinePathBase_Appearance : public ::System::Object
	{
	public:
		::UnityEngine::Color pathColor; // 0x10
		::UnityEngine::Color inactivePathColor; // 0x20
		::System::Single width; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_APPEARANCE__CTOR_OFFSET))(this);
		}
	};
}
