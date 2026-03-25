#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LocalizedText.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class LongText_SubText; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class VertexHelper; }

#define RPG_CLIENT_LONGTEXT_APPLYTEXTGENERATOR_OFFSET UNITYSDK_OFFSET(0x9A5A130)
#define RPG_CLIENT_LONGTEXT_CULL_OFFSET UNITYSDK_OFFSET(0x9A59780)
#define RPG_CLIENT_LONGTEXT_FILLVERTICES_OFFSET UNITYSDK_OFFSET(0x9A5C910)
#define RPG_CLIENT_LONGTEXT_FINDVERTICESRANGE_OFFSET UNITYSDK_OFFSET(0x9A5C520)
#define RPG_CLIENT_LONGTEXT_FINDVISIBLERANGE_OFFSET UNITYSDK_OFFSET(0x9A5BED0)
#define RPG_CLIENT_LONGTEXT_GET_CLIPRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9A596A0)
#define RPG_CLIENT_LONGTEXT_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x9A596C0)
#define RPG_CLIENT_LONGTEXT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9A59EA0)
#define RPG_CLIENT_LONGTEXT_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x9A5A6F0)
#define RPG_CLIENT_LONGTEXT_ONTEXTCHANGED_OFFSET UNITYSDK_OFFSET(0x9A5BE80)
#define RPG_CLIENT_LONGTEXT_SETCLIPRECT_OFFSET UNITYSDK_OFFSET(0x9A59BC0)
#define RPG_CLIENT_LONGTEXT_SETCLIPSOFTNESS_OFFSET UNITYSDK_OFFSET(0x9A59D30)
#define RPG_CLIENT_LONGTEXT_SETNTHMESH_OFFSET UNITYSDK_OFFSET(0x9A5CE00)
#define RPG_CLIENT_LONGTEXT_SET_CLIPRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9A596B0)
#define RPG_CLIENT_LONGTEXT_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x9A596D0)
#define RPG_CLIENT_LONGTEXT_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x9A5A360)
#define RPG_CLIENT_LONGTEXT_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x9A59F70)
#define RPG_CLIENT_LONGTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x9A5D330)
#define RPG_CLIENT_LONGTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x9A5D1D0)
#define RPG_CLIENT_LONGTEXT___IFIXBASEPROXY_CULL_OFFSET UNITYSDK_OFFSET(0x9A5D390)
#define RPG_CLIENT_LONGTEXT___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9A5D480)
#define RPG_CLIENT_LONGTEXT___IFIXBASEPROXY_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x9A5D570)
#define RPG_CLIENT_LONGTEXT___IFIXBASEPROXY_ONTEXTCHANGED_OFFSET UNITYSDK_OFFSET(0x9A5D560)
#define RPG_CLIENT_LONGTEXT___IFIXBASEPROXY_SETCLIPRECT_OFFSET UNITYSDK_OFFSET(0x9A5D3B0)
#define RPG_CLIENT_LONGTEXT___IFIXBASEPROXY_SETCLIPSOFTNESS_OFFSET UNITYSDK_OFFSET(0x9A5D3D0)
#define RPG_CLIENT_LONGTEXT___IFIXBASEPROXY_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x9A5D380)
#define RPG_CLIENT_LONGTEXT___IFIXBASEPROXY_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x9A5D510)
#define RPG_CLIENT_LONGTEXT___IFIXBASEPROXY_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x9A5D4D0)

namespace RPG::Client
{
	inline static constexpr unsigned int LongText_TypeDefinitionIndex = 59467;

	class LongText : public ::RPG::Client::LocalizedText
	{
	public:
		static ::UnityEngine::UI::VertexHelper** StaticGet_s_VertexHelper()
		{
			return (::UnityEngine::UI::VertexHelper**)Il2CppClass::FromTypeDefinitionIndex(LongText_TypeDefinitionIndex)->GetStaticField(0x26C40);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_worldCorners()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(LongText_TypeDefinitionIndex)->GetStaticField(0x26C48);
		}
		::UnityEngine::RectTransform* _clipRectTransform_k__BackingField; // 0x1F8
		::UnityEngine::Rect m_ClipRect; // 0x200
		::Il2CppArray<::UnityEngine::UIVertex>* m_TempVerts; // 0x210
		::System::Collections::Generic::List_1<::RPG::Client::LongText_SubText*>* m_SubTexts; // 0x218
		::System::Int32 m_SubTextCount; // 0x220

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT__CCTOR_OFFSET))();
		}

		::UnityEngine::RectTransform* get_clipRectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT_GET_CLIPRECTTRANSFORM_OFFSET))(this);
		}

		::System::Void set_clipRectTransform(::UnityEngine::RectTransform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT_SET_CLIPRECTTRANSFORM_OFFSET))(this, value);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_text(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT_SET_TEXT_OFFSET))(this, value);
		}

		::System::Void Cull(::UnityEngine::Rect clipRect, ::System::Boolean validRect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT_CULL_OFFSET))(this, clipRect, validRect);
		}

		::System::Void SetClipRect(::UnityEngine::Rect clipRect, ::System::Boolean validRect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT_SETCLIPRECT_OFFSET))(this, clipRect, validRect);
		}

		::System::Void SetClipSoftness(::UnityEngine::Vector4 clipSoftness)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT_SETCLIPSOFTNESS_OFFSET))(this, clipSoftness);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT_ONDISABLE_OFFSET))(this);
		}

		::System::Void UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT_UPDATEMATERIAL_OFFSET))(this);
		}

		::System::Void ApplyTextGenerator()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT_APPLYTEXTGENERATOR_OFFSET))(this);
		}

		::System::Void UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT_UPDATEGEOMETRY_OFFSET))(this);
		}

		::System::Void OnTextChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT_ONTEXTCHANGED_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT_ONPOPULATEMESH_OFFSET))(this, toFill);
		}

		::System::Void FillVertices(::UnityEngine::UI::VertexHelper* toFill, ::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>* verts, ::System::Int32& k, ::System::Int32 maxVertex, ::System::Int32 endIndex, ::UnityEngine::Vector2 roundingOffset, ::System::Single unitsPerPixel)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>*, ::System::Int32&, ::System::Int32, ::System::Int32, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT_FILLVERTICES_OFFSET))(this, toFill, verts, k, maxVertex, endIndex, roundingOffset, unitsPerPixel);
		}

		::System::Void FindVisibleRange(::UnityEngine::RectTransform* clipRectTransform, ::System::Single& topY, ::System::Single& bottomY)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT_FINDVISIBLERANGE_OFFSET))(this, clipRectTransform, topY, bottomY);
		}

		::System::Void FindVerticesRange(::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>* verts, ::System::Int32 vertexCount, ::System::Single topY, ::System::Single bottomY, ::System::Single unitsPerPixel, ::System::Int32& begin, ::System::Int32& end)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>*, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT_FINDVERTICESRANGE_OFFSET))(this, verts, vertexCount, topY, bottomY, unitsPerPixel, begin, end);
		}

		::System::Void SetNthMesh(::UnityEngine::Mesh* mesh, ::System::Int32 n)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT_SETNTHMESH_OFFSET))(this, mesh, n);
		}

		::System::Void __iFixBaseProxy_set_text(::System::String* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT___IFIXBASEPROXY_SET_TEXT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Cull(::UnityEngine::Rect P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT___IFIXBASEPROXY_CULL_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_SetClipRect(::UnityEngine::Rect P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT___IFIXBASEPROXY_SETCLIPRECT_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_SetClipSoftness(::UnityEngine::Vector4 P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT___IFIXBASEPROXY_SETCLIPSOFTNESS_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT___IFIXBASEPROXY_UPDATEMATERIAL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT___IFIXBASEPROXY_UPDATEGEOMETRY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnTextChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT___IFIXBASEPROXY_ONTEXTCHANGED_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnPopulateMesh(::UnityEngine::UI::VertexHelper* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT___IFIXBASEPROXY_ONPOPULATEMESH_OFFSET))(this, P0);
		}
	};
}
