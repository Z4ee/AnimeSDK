#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCc.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Components { class BGCcCursor; }
namespace System { class String; }

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOR_GETFROMTOINDEXES_OFFSET UNITYSDK_OFFSET(0x189482E0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOR_GETT_OFFSET UNITYSDK_OFFSET(0x18939C30)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOR_GET_CURSOR_OFFSET UNITYSDK_OFFSET(0x18935C50)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOR_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x18948240)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOR_LERPQUATERNION_OFFSET UNITYSDK_OFFSET(0x18939890)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOR_LERPVECTOR_OFFSET UNITYSDK_OFFSET(0x1893A610)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOR_SET_CURSOR_OFFSET UNITYSDK_OFFSET(0x18948220)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18938150)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcWithCursor_TypeDefinitionIndex = 34142;

	class BGCcWithCursor : public ::BansheeGz::BGSpline::Curve::BGCc
	{
	public:
		::BansheeGz::BGSpline::Components::BGCcCursor* cursor; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOR__CTOR_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Components::BGCcCursor* get_Cursor()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcCursor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOR_GET_CURSOR_OFFSET))(this);
		}

		::System::Void set_Cursor(::BansheeGz::BGSpline::Components::BGCcCursor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcCursor*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOR_SET_CURSOR_OFFSET))(this, a1);
		}

		::System::String* get_Error()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOR_GET_ERROR_OFFSET))(this);
		}

		::UnityEngine::Quaternion LerpQuaternion(::System::String* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOR_LERPQUATERNION_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 LerpVector(::System::String* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOR_LERPVECTOR_OFFSET))(this, a1, a2);
		}

		::System::Single GetT(::System::Int32& a1, ::System::Int32& a2, ::System::Int32 a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOR_GETT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GetFromToIndexes(::System::Int32& a1, ::System::Int32& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOR_GETFROMTOINDEXES_OFFSET))(this, a1, a2, a3);
		}
	};
}
