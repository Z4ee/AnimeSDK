#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_RSTOrder.h"
#include "unitysdk/System/ValueType.h"

#define HOUDINIENGINEUNITY_HAPI_TRANSFORM_INIT_OFFSET UNITYSDK_OFFSET(0x26DD0)
#define HOUDINIENGINEUNITY_HAPI_TRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x26D40)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_Transform_TypeDefinitionIndex = 37707;

	struct alignas(8) HAPI_Transform
	{
		::Il2CppArray<::System::Single>* position; // 0x10
		::Il2CppArray<::System::Single>* rotationQuaternion; // 0x18
		::Il2CppArray<::System::Single>* scale; // 0x20
		::Il2CppArray<::System::Single>* shear; // 0x28
		::HoudiniEngineUnity::HAPI_RSTOrder rstOrder; // 0x30

		::System::Void _ctor(::System::Boolean initializeFields)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_TRANSFORM__CTOR_OFFSET))(this, initializeFields);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_TRANSFORM_INIT_OFFSET))(this);
		}
	};
}
