#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_RSTOrder.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_XYZOrder.h"
#include "unitysdk/System/ValueType.h"

#define HOUDINIENGINEUNITY_HAPI_TRANSFORMEULER__CTOR_OFFSET UNITYSDK_OFFSET(0x27010)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_TransformEuler_TypeDefinitionIndex = 43585;

	struct alignas(8) HAPI_TransformEuler
	{
		::Il2CppArray<::System::Single>* position; // 0x10
		::Il2CppArray<::System::Single>* rotationEuler; // 0x18
		::Il2CppArray<::System::Single>* scale; // 0x20
		::Il2CppArray<::System::Single>* shear; // 0x28
		::HoudiniEngineUnity::HAPI_XYZOrder rotationOrder; // 0x30
		::HoudiniEngineUnity::HAPI_RSTOrder rstOrder; // 0x34

		::System::Void _ctor(::System::Boolean initialize_fields)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_TRANSFORMEULER__CTOR_OFFSET))(this, initialize_fields);
		}
	};
}
