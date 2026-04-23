#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define HOUDINIENGINEUNITY_TRANSFORMDATA_COPYTOLOCAL_OFFSET UNITYSDK_OFFSET(0x27750)
#define HOUDINIENGINEUNITY_TRANSFORMDATA_COPYTO_OFFSET UNITYSDK_OFFSET(0x276C0)
#define HOUDINIENGINEUNITY_TRANSFORMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x27580)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int TransformData_TypeDefinitionIndex = 43682;

	struct alignas(8) TransformData
	{
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Quaternion rotation; // 0x1C
		::UnityEngine::Vector3 localPosition; // 0x2C
		::UnityEngine::Vector3 localScale; // 0x38
		::UnityEngine::Quaternion localRotation; // 0x44
		::UnityEngine::Transform* parent; // 0x58

		::System::Void _ctor(::UnityEngine::Transform* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TRANSFORMDATA__CTOR_OFFSET))(this, other);
		}

		::System::Void CopyTo(::UnityEngine::Transform* other, ::System::Boolean copyParent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TRANSFORMDATA_COPYTO_OFFSET))(this, other, copyParent);
		}

		::System::Void CopyToLocal(::UnityEngine::Transform* other, ::System::Boolean copyParent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TRANSFORMDATA_COPYTOLOCAL_OFFSET))(this, other, copyParent);
		}
	};
}
