#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class VertexHelper; }

#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD_CALCRECT_OFFSET UNITYSDK_OFFSET(0x1E3B30B0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x1E3B2DC0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD_LOADTRIS_OFFSET UNITYSDK_OFFSET(0x1E3B3130)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD_LOAD_OFFSET UNITYSDK_OFFSET(0x1E3B2DF0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD_ROTATE_OFFSET UNITYSDK_OFFSET(0x1E3B3810)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD_SAVE_1_OFFSET UNITYSDK_OFFSET(0x1E3B36D0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD_SAVE_OFFSET UNITYSDK_OFFSET(0x1E3B33F0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD_TRANSPOSE_OFFSET UNITYSDK_OFFSET(0x1E3B3700)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3B3D50)

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int UITextSplineController_GlyphQuad_TypeDefinitionIndex = 38930;

	class UITextSplineController_GlyphQuad : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::UIVertex>* V; // 0x10
		::UnityEngine::Rect Rect; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Center()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD_GET_CENTER_OFFSET))(this);
		}

		::System::Void Load(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD_LOAD_OFFSET))(this, verts, index);
		}

		::System::Void LoadTris(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD_LOADTRIS_OFFSET))(this, verts, index);
		}

		::System::Void calcRect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD_CALCRECT_OFFSET))(this);
		}

		::System::Void Save(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD_SAVE_OFFSET))(this, verts, index);
		}

		::System::Void Save_1(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD_SAVE_1_OFFSET))(this, vh);
		}

		::System::Void Transpose(::UnityEngine::Vector3 v)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD_TRANSPOSE_OFFSET))(this, v);
		}

		::System::Void Rotate(::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_UITEXTSPLINECONTROLLER_GLYPHQUAD_ROTATE_OFFSET))(this, rotation);
		}
	};
}
