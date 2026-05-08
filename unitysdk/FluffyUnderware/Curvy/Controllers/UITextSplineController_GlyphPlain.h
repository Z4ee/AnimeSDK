#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHPLAIN_CALCRECT_OFFSET UNITYSDK_OFFSET(0x1BB1CF70)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHPLAIN_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x1BB1CCE0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHPLAIN_LOAD_OFFSET UNITYSDK_OFFSET(0x1BB1CD10)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHPLAIN_ROTATE_OFFSET UNITYSDK_OFFSET(0x1BB1D2B0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHPLAIN_SAVE_OFFSET UNITYSDK_OFFSET(0x1BB1CFE0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHPLAIN_TRANSPOSE_OFFSET UNITYSDK_OFFSET(0x1BB1D1C0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHPLAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB1D7E0)

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int UITextSplineController_GlyphPlain_TypeDefinitionIndex = 37286;

	class UITextSplineController_GlyphPlain : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Vector3>* V; // 0x10
		::UnityEngine::Rect Rect; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHPLAIN__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Center()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHPLAIN_GET_CENTER_OFFSET))(this);
		}

		::System::Void Load(::Il2CppArray<::UnityEngine::Vector3>*& verts, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*&, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHPLAIN_LOAD_OFFSET))(this, verts, index);
		}

		::System::Void calcRect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHPLAIN_CALCRECT_OFFSET))(this);
		}

		::System::Void Save(::Il2CppArray<::UnityEngine::Vector3>*& verts, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*&, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHPLAIN_SAVE_OFFSET))(this, verts, index);
		}

		::System::Void Transpose(::UnityEngine::Vector3 v)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHPLAIN_TRANSPOSE_OFFSET))(this, v);
		}

		::System::Void Rotate(::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHPLAIN_ROTATE_OFFSET))(this, rotation);
		}
	};
}
