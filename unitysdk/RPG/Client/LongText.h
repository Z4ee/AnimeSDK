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

#define RPG_CLIENT_LONGTEXT_APPLYTEXTGENERATOR_OFFSET UNITYSDK_OFFSET(0xBE67C90)
#define RPG_CLIENT_LONGTEXT_CULL_OFFSET UNITYSDK_OFFSET(0xBE67180)
#define RPG_CLIENT_LONGTEXT_FILLVERTICES_OFFSET UNITYSDK_OFFSET(0xBE6A5F0)
#define RPG_CLIENT_LONGTEXT_FINDVERTICESRANGE_OFFSET UNITYSDK_OFFSET(0xBE6A1F0)
#define RPG_CLIENT_LONGTEXT_FINDVISIBLERANGE_OFFSET UNITYSDK_OFFSET(0xBE69BC0)
#define RPG_CLIENT_LONGTEXT_GET_CLIPRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xBE67090)
#define RPG_CLIENT_LONGTEXT_GET_TEXT_OFFSET UNITYSDK_OFFSET(0xBE670B0)
#define RPG_CLIENT_LONGTEXT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xBE67980)
#define RPG_CLIENT_LONGTEXT_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0xBE682D0)
#define RPG_CLIENT_LONGTEXT_ONTEXTCHANGED_OFFSET UNITYSDK_OFFSET(0xBE69B70)
#define RPG_CLIENT_LONGTEXT_SETCLIPRECT_OFFSET UNITYSDK_OFFSET(0xBE67650)
#define RPG_CLIENT_LONGTEXT_SETCLIPSOFTNESS_OFFSET UNITYSDK_OFFSET(0xBE677F0)
#define RPG_CLIENT_LONGTEXT_SETNTHMESH_OFFSET UNITYSDK_OFFSET(0xBE6AAA0)
#define RPG_CLIENT_LONGTEXT_SET_CLIPRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xBE670A0)
#define RPG_CLIENT_LONGTEXT_SET_TEXT_OFFSET UNITYSDK_OFFSET(0xBE670C0)
#define RPG_CLIENT_LONGTEXT_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0xBE67F50)
#define RPG_CLIENT_LONGTEXT_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0xBE67A80)
#define RPG_CLIENT_LONGTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0xBE6B030)
#define RPG_CLIENT_LONGTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xBE6AED0)
#define RPG_CLIENT_LONGTEXT___IFIXBASEPROXY_CULL_OFFSET UNITYSDK_OFFSET(0xBE6B090)
#define RPG_CLIENT_LONGTEXT___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xBE6B180)
#define RPG_CLIENT_LONGTEXT___IFIXBASEPROXY_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0xBE6B270)
#define RPG_CLIENT_LONGTEXT___IFIXBASEPROXY_ONTEXTCHANGED_OFFSET UNITYSDK_OFFSET(0xBE6B260)
#define RPG_CLIENT_LONGTEXT___IFIXBASEPROXY_SETCLIPRECT_OFFSET UNITYSDK_OFFSET(0xBE6B0B0)
#define RPG_CLIENT_LONGTEXT___IFIXBASEPROXY_SETCLIPSOFTNESS_OFFSET UNITYSDK_OFFSET(0xBE6B0D0)
#define RPG_CLIENT_LONGTEXT___IFIXBASEPROXY_SET_TEXT_OFFSET UNITYSDK_OFFSET(0xBE6B080)
#define RPG_CLIENT_LONGTEXT___IFIXBASEPROXY_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0xBE6B210)
#define RPG_CLIENT_LONGTEXT___IFIXBASEPROXY_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0xBE6B1D0)

namespace RPG::Client
{
	inline static constexpr unsigned int LongText_TypeDefinitionIndex = 67802;

	class LongText : public ::RPG::Client::LocalizedText
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_worldCorners()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(LongText_TypeDefinitionIndex)->GetStaticField(0x4FE10);
		}
		static ::UnityEngine::UI::VertexHelper** StaticGet_s_VertexHelper()
		{
			return (::UnityEngine::UI::VertexHelper**)Il2CppClass::FromTypeDefinitionIndex(LongText_TypeDefinitionIndex)->GetStaticField(0x4FE18);
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

		::System::Void set_clipRectTransform(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT_SET_CLIPRECTTRANSFORM_OFFSET))(this, a1);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_text(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT_SET_TEXT_OFFSET))(this, a1);
		}

		::System::Void Cull(::UnityEngine::Rect a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT_CULL_OFFSET))(this, a1, a2);
		}

		::System::Void SetClipRect(::UnityEngine::Rect a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT_SETCLIPRECT_OFFSET))(this, a1, a2);
		}

		::System::Void SetClipSoftness(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT_SETCLIPSOFTNESS_OFFSET))(this, a1);
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

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT_ONPOPULATEMESH_OFFSET))(this, a1);
		}

		::System::Void FillVertices(::UnityEngine::UI::VertexHelper* a1, ::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>* a2, ::System::Int32& a3, ::System::Int32 a4, ::System::Int32 a5, ::UnityEngine::Vector2 a6, ::System::Single a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>*, ::System::Int32&, ::System::Int32, ::System::Int32, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT_FILLVERTICES_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void FindVisibleRange(::UnityEngine::RectTransform* a1, ::System::Single& a2, ::System::Single& a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT_FINDVISIBLERANGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FindVerticesRange(::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>* a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Int32& a6, ::System::Int32& a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>*, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT_FINDVERTICESRANGE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void SetNthMesh(::UnityEngine::Mesh* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT_SETNTHMESH_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_set_text(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT___IFIXBASEPROXY_SET_TEXT_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Cull(::UnityEngine::Rect a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT___IFIXBASEPROXY_CULL_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_SetClipRect(::UnityEngine::Rect a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT___IFIXBASEPROXY_SETCLIPRECT_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_SetClipSoftness(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT___IFIXBASEPROXY_SETCLIPSOFTNESS_OFFSET))(this, a1);
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

		::System::Void __iFixBaseProxy_OnPopulateMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT___IFIXBASEPROXY_ONPOPULATEMESH_OFFSET))(this, a1);
		}
	};
}
