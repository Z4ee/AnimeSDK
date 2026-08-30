#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define SCENENLIGHTMANAGER_LIGHTCONTROLDATAPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0xE90E340)

namespace ScenenLightManager
{
	inline static constexpr unsigned int LightControlDataPair_TypeDefinitionIndex = 49583;

	class LightControlDataPair : public ::System::Object
	{
	public:
		::System::Int32 lightId; // 0x10
		::System::Int32 lightControlId; // 0x14
		::UnityEngine::Vector3 position; // 0x18

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTCONTROLDATAPAIR__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
