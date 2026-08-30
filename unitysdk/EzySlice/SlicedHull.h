#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define EZYSLICE_SLICEDHULL_CREATEEMPTYOBJECT_OFFSET UNITYSDK_OFFSET(0xB179E90)
#define EZYSLICE_SLICEDHULL_CREATELOWERHULL_1_OFFSET UNITYSDK_OFFSET(0xB1798A0)
#define EZYSLICE_SLICEDHULL_CREATELOWERHULL_2_OFFSET UNITYSDK_OFFSET(0xB179DE0)
#define EZYSLICE_SLICEDHULL_CREATELOWERHULL_OFFSET UNITYSDK_OFFSET(0xB179890)
#define EZYSLICE_SLICEDHULL_CREATEUPPERHULL_1_OFFSET UNITYSDK_OFFSET(0xB1792A0)
#define EZYSLICE_SLICEDHULL_CREATEUPPERHULL_2_OFFSET UNITYSDK_OFFSET(0xB1797E0)
#define EZYSLICE_SLICEDHULL_CREATEUPPERHULL_OFFSET UNITYSDK_OFFSET(0xB179290)
#define EZYSLICE_SLICEDHULL_GET_LOWERHULL_OFFSET UNITYSDK_OFFSET(0xB179F30)
#define EZYSLICE_SLICEDHULL_GET_UPPERHULL_OFFSET UNITYSDK_OFFSET(0xB179F20)
#define EZYSLICE_SLICEDHULL__CTOR_OFFSET UNITYSDK_OFFSET(0xB179280)

namespace EzySlice
{
	inline static constexpr unsigned int SlicedHull_TypeDefinitionIndex = 47465;

	class SlicedHull : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* lower_hull; // 0x10
		::UnityEngine::Mesh* upper_hull; // 0x18

		::System::Void _ctor(::UnityEngine::Mesh* a1, ::UnityEngine::Mesh* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEDHULL__CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* CreateUpperHull(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEDHULL_CREATEUPPERHULL_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* CreateUpperHull_1(::UnityEngine::GameObject* a1, ::UnityEngine::Material* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEDHULL_CREATEUPPERHULL_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* CreateLowerHull(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEDHULL_CREATELOWERHULL_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* CreateLowerHull_1(::UnityEngine::GameObject* a1, ::UnityEngine::Material* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEDHULL_CREATELOWERHULL_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* CreateUpperHull_2()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEDHULL_CREATEUPPERHULL_2_OFFSET))(this);
		}

		::UnityEngine::GameObject* CreateLowerHull_2()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEDHULL_CREATELOWERHULL_2_OFFSET))(this);
		}

		::UnityEngine::Mesh* get_upperHull()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEDHULL_GET_UPPERHULL_OFFSET))(this);
		}

		::UnityEngine::Mesh* get_lowerHull()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEDHULL_GET_LOWERHULL_OFFSET))(this);
		}

		static ::UnityEngine::GameObject* CreateEmptyObject(::System::String* a1, ::UnityEngine::Mesh* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEDHULL_CREATEEMPTYOBJECT_OFFSET))(a1, a2);
		}
	};
}
