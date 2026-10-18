#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcWithCursor.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOROBJECT_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x1C4BB120)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOROBJECT_GET_OBJECTTOMANIPULATE_OFFSET UNITYSDK_OFFSET(0x1C4CC2D0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOROBJECT_SET_OBJECTTOMANIPULATE_OFFSET UNITYSDK_OFFSET(0x1C4CC2E0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOROBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4BCBF0)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcWithCursorObject_TypeDefinitionIndex = 36062;

	class BGCcWithCursorObject : public ::BansheeGz::BGSpline::Components::BGCcWithCursor
	{
	public:
		// static const ::System::String* ErrorObjectNotSet; // 0x0
		::UnityEngine::Transform* objectToManipulate; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOROBJECT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_ObjectToManipulate()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOROBJECT_GET_OBJECTTOMANIPULATE_OFFSET))(this);
		}

		::System::Void set_ObjectToManipulate(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOROBJECT_SET_OBJECTTOMANIPULATE_OFFSET))(this, a1);
		}

		::System::String* get_Error()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOROBJECT_GET_ERROR_OFFSET))(this);
		}
	};
}
