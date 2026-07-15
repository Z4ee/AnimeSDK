#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define HOUDINIENGINEUNITY_TRANSFORMDATA_COPYTOLOCAL_OFFSET UNITYSDK_OFFSET(0x3AF7D50)
#define HOUDINIENGINEUNITY_TRANSFORMDATA_COPYTO_OFFSET UNITYSDK_OFFSET(0x3AF7CC0)
#define HOUDINIENGINEUNITY_TRANSFORMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x3AF7B80)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int TransformData_TypeDefinitionIndex = 38470;

	struct alignas(8) TransformData
	{
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Quaternion rotation; // 0x1C
		::UnityEngine::Vector3 localPosition; // 0x2C
		::UnityEngine::Vector3 localScale; // 0x38
		::UnityEngine::Quaternion localRotation; // 0x44
		::UnityEngine::Transform* parent; // 0x58

		::System::Void _ctor(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TRANSFORMDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::UnityEngine::Transform* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TRANSFORMDATA_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Void CopyToLocal(::UnityEngine::Transform* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TRANSFORMDATA_COPYTOLOCAL_OFFSET))(this, a1, a2);
		}
	};
}
