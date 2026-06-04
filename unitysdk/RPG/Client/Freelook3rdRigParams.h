#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_FREELOOK3RDRIGPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xBA69ED0)

namespace RPG::Client
{
	inline static constexpr unsigned int Freelook3rdRigParams_TypeDefinitionIndex = 65141;

	class Freelook3rdRigParams : public ::System::Object
	{
	public:
		::System::Single height; // 0x10
		::System::Single radius; // 0x14
		::UnityEngine::Vector3 trackedObjectOffset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREELOOK3RDRIGPARAMS__CTOR_OFFSET))(this);
		}
	};
}
