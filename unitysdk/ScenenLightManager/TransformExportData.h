#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define SCENENLIGHTMANAGER_TRANSFORMEXPORTDATA_METHOD_1_7900DB25C44BBC9B_OFFSET UNITYSDK_OFFSET(0xB939120)
#define SCENENLIGHTMANAGER_TRANSFORMEXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB939060)

namespace ScenenLightManager
{
	inline static constexpr unsigned int TransformExportData_TypeDefinitionIndex = 45743;

	class TransformExportData : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 pos; // 0x10
		::UnityEngine::Quaternion rotation; // 0x1C
		::UnityEngine::Vector3 scale; // 0x2C

		::System::Void _ctor(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_TRANSFORMEXPORTDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void Method_1_7900DB25C44BBC9B(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_TRANSFORMEXPORTDATA_METHOD_1_7900DB25C44BBC9B_OFFSET))(this, a1);
		}
	};
}
