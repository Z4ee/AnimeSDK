#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/UI/UIText.h"
#include "unitysdk/UnityEngine/UICharInfo.h"
#include "unitysdk/UnityEngine/UILineInfo.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UITextLink_Class_1_82AA3D510AE3F83B; }
namespace MoleMole { class UITextLink_HrefClickEvent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace System::Text::RegularExpressions { class Regex; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class VertexHelper; }

#define MOLEMOLE_UITEXTLINK_AWAKE_OFFSET UNITYSDK_OFFSET(0x16DEB4C0)
#define MOLEMOLE_UITEXTLINK_GET_GETHYPERLINKINFO_OFFSET UNITYSDK_OFFSET(0x16DEB4B0)
#define MOLEMOLE_UITEXTLINK_GET_ONHREFCLICK_OFFSET UNITYSDK_OFFSET(0x16DEB490)
#define MOLEMOLE_UITEXTLINK_METHOD_11_609AED97738F44F5_OFFSET UNITYSDK_OFFSET(0x16DEBF50)
#define MOLEMOLE_UITEXTLINK_METHOD_11_8417EA39EEED3F86_OFFSET UNITYSDK_OFFSET(0x16DEC4B0)
#define MOLEMOLE_UITEXTLINK_METHOD_11_CA20A96113B135EC_OFFSET UNITYSDK_OFFSET(0x16DEDDE0)
#define MOLEMOLE_UITEXTLINK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16DEB600)
#define MOLEMOLE_UITEXTLINK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16DEB510)
#define MOLEMOLE_UITEXTLINK_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x16DED720)
#define MOLEMOLE_UITEXTLINK_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x16DEB7A0)
#define MOLEMOLE_UITEXTLINK_SETVERTICESDIRTY_OFFSET UNITYSDK_OFFSET(0x16DEB6D0)
#define MOLEMOLE_UITEXTLINK_SET_ONHREFCLICK_OFFSET UNITYSDK_OFFSET(0x16DEB4A0)
#define MOLEMOLE_UITEXTLINK_UNITYENGINE_EVENTSYSTEMS_IPOINTERDOWNHANDLER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x16DEDA60)
#define MOLEMOLE_UITEXTLINK_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x16DEB740)
#define MOLEMOLE_UITEXTLINK__CCTOR_OFFSET UNITYSDK_OFFSET(0x16DEDC40)
#define MOLEMOLE_UITEXTLINK__CTOR_OFFSET UNITYSDK_OFFSET(0x16DEDAB0)
#define MOLEMOLE_UITEXTLINK___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x16DEDD80)
#define MOLEMOLE_UITEXTLINK___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16DEDD90)
#define MOLEMOLE_UITEXTLINK___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16DEDDA0)
#define MOLEMOLE_UITEXTLINK___BASE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x16DEDDB0)
#define MOLEMOLE_UITEXTLINK___BASE_SETVERTICESDIRTY_OFFSET UNITYSDK_OFFSET(0x16DEDDC0)
#define MOLEMOLE_UITEXTLINK___BASE_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x16DEDDD0)

namespace MoleMole
{
	inline static constexpr unsigned int UITextLink_TypeDefinitionIndex = 42374;

	class UITextLink : public ::UnityEngine::UI::UIText
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_s_HrefRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(UITextLink_TypeDefinitionIndex)->GetStaticField(0x4C120);
		}
		static ::System::Text::StringBuilder** StaticGet_s_TextBuilder()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(UITextLink_TypeDefinitionIndex)->GetStaticField(0x4C128);
		}
		static ::System::String** StaticGet_temp()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UITextLink_TypeDefinitionIndex)->GetStaticField(0x4C130);
		}
		::System::String* m_OutputText; // 0x3C8
		::System::Collections::Generic::List_1<::MoleMole::UITextLink_Class_1_82AA3D510AE3F83B*>* m_HrefInfos; // 0x3D0
		::MoleMole::UITextLink_HrefClickEvent* m_OnHrefClick; // 0x3D8
		::System::Boolean UseTextLinkPopTip; // 0x3E0
		::System::Boolean ChangeHrefColor; // 0x3E1
		::UnityEngine::Color HrefColor; // 0x3E4
		::System::Boolean UseUnderLine; // 0x3F4
		::UnityEngine::Color underLineColor; // 0x3F8
		::System::Single _lineHeight; // 0x408
		::System::Single _lineOffset; // 0x40C
		::Il2CppArray<::UnityEngine::UICharInfo>* characters; // 0x410
		::Il2CppArray<::UnityEngine::UILineInfo>* lines; // 0x418
		::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* _TUT; // 0x420
		::Il2CppArray<::UnityEngine::UIVertex>* m_TempVerts; // 0x428

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK__CCTOR_OFFSET))();
		}

		::MoleMole::UITextLink_HrefClickEvent* get_onHrefClick()
		{
			return ((::MoleMole::UITextLink_HrefClickEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_GET_ONHREFCLICK_OFFSET))(this);
		}

		::System::Void set_onHrefClick(::MoleMole::UITextLink_HrefClickEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITextLink_HrefClickEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_SET_ONHREFCLICK_OFFSET))(this, a1);
		}

		::System::String* get_GetHyperlinkInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_GET_GETHYPERLINKINFO_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_ONDISABLE_OFFSET))(this);
		}

		::System::Void SetVerticesDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_SETVERTICESDIRTY_OFFSET))(this);
		}

		::System::Void UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_UPDATEGEOMETRY_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_ONPOPULATEMESH_OFFSET))(this, a1);
		}

		::System::String* Method_11_8417EA39EEED3F86(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_METHOD_11_8417EA39EEED3F86_OFFSET))(this, a1);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_UNITYENGINE_EVENTSYSTEMS_IPOINTERDOWNHANDLER_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK___BASE_AWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnPopulateMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK___BASE_ONPOPULATEMESH_OFFSET))(this, a1);
		}

		::System::Void __base_SetVerticesDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK___BASE_SETVERTICESDIRTY_OFFSET))(this);
		}

		::System::Void __base_UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK___BASE_UPDATEGEOMETRY_OFFSET))(this);
		}

		::System::Void Method_11_CA20A96113B135EC(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_METHOD_11_CA20A96113B135EC_OFFSET))(this, a1);
		}

		::System::Void Method_11_609AED97738F44F5(::UnityEngine::UI::VertexHelper* a1, ::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_METHOD_11_609AED97738F44F5_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
