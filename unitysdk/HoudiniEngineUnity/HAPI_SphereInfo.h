#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define HOUDINIENGINEUNITY_HAPI_SPHEREINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x26AC0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_SphereInfo_TypeDefinitionIndex = 37732;

	struct alignas(8) HAPI_SphereInfo
	{
		::Il2CppArray<::System::Single>* center; // 0x10
		::System::Single radius; // 0x18

		::System::Void _ctor(::System::Boolean initialize_fields)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_SPHEREINFO__CTOR_OFFSET))(this, initialize_fields);
		}
	};
}
