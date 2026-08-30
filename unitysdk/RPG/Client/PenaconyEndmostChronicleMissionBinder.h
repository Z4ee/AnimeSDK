#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEMISSIONBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0x18647BC0)

namespace RPG::Client
{
	inline static constexpr unsigned int PenaconyEndmostChronicleMissionBinder_TypeDefinitionIndex = 66153;

	class PenaconyEndmostChronicleMissionBinder : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 EndmostChronicleMissionID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEMISSIONBINDER__CTOR_OFFSET))(this);
		}
	};
}
