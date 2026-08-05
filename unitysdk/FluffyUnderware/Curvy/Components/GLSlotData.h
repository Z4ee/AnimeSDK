#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define FLUFFYUNDERWARE_CURVY_COMPONENTS_GLSLOTDATA_GETVERTEXDATA_OFFSET UNITYSDK_OFFSET(0x1EFA61E0)
#define FLUFFYUNDERWARE_CURVY_COMPONENTS_GLSLOTDATA_RENDER_OFFSET UNITYSDK_OFFSET(0x1EFA6450)
#define FLUFFYUNDERWARE_CURVY_COMPONENTS_GLSLOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFA6670)

namespace FluffyUnderware::Curvy::Components
{
	inline static constexpr unsigned int GLSlotData_TypeDefinitionIndex = 39564;

	class GLSlotData : public ::System::Object
	{
	public:
		::FluffyUnderware::Curvy::CurvySpline* Spline; // 0x10
		::UnityEngine::Color LineColor; // 0x18
		::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Vector3>*>* VertexData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_COMPONENTS_GLSLOTDATA__CTOR_OFFSET))(this);
		}

		::System::Void GetVertexData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_COMPONENTS_GLSLOTDATA_GETVERTEXDATA_OFFSET))(this);
		}

		::System::Void Render(::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_COMPONENTS_GLSLOTDATA_RENDER_OFFSET))(this, mat);
		}
	};
}
