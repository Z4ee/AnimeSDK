#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define HOUDINIENGINEUNITY_HAPI_VIEWPORT_INIT_OFFSET UNITYSDK_OFFSET(0x2D4B9C0)
#define HOUDINIENGINEUNITY_HAPI_VIEWPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x2D4B960)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_Viewport_TypeDefinitionIndex = 37557;

	struct alignas(8) HAPI_Viewport
	{
		::Il2CppArray<::System::Single>* position; // 0x10
		::Il2CppArray<::System::Single>* rotationQuaternion; // 0x18
		::System::Single offset; // 0x20

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_VIEWPORT__CTOR_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_VIEWPORT_INIT_OFFSET))(this);
		}
	};
}
