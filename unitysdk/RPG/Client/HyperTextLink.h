#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/UI/Text.h"

namespace RPG::Client { class HyperTextLink_HrefInfo; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace System::Text::RegularExpressions { class Regex; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class VertexHelper; }

#define RPG_CLIENT_HYPERTEXTLINK_AWAKE_OFFSET UNITYSDK_OFFSET(0x198245E0)
#define RPG_CLIENT_HYPERTEXTLINK_GETOUTPUTTEXT_OFFSET UNITYSDK_OFFSET(0x19825F10)
#define RPG_CLIENT_HYPERTEXTLINK_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x19826B30)
#define RPG_CLIENT_HYPERTEXTLINK_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x19825690)
#define RPG_CLIENT_HYPERTEXTLINK_SETTEXT_OFFSET UNITYSDK_OFFSET(0x19826F40)
#define RPG_CLIENT_HYPERTEXTLINK_SETVERTICESDIRTY_OFFSET UNITYSDK_OFFSET(0x19824710)
#define RPG_CLIENT_HYPERTEXTLINK_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x19824520)
#define RPG_CLIENT_HYPERTEXTLINK_UPDATEQUADIMAGE_OFFSET UNITYSDK_OFFSET(0x198247A0)
#define RPG_CLIENT_HYPERTEXTLINK__CCTOR_OFFSET UNITYSDK_OFFSET(0x19827110)
#define RPG_CLIENT_HYPERTEXTLINK__CTOR_OFFSET UNITYSDK_OFFSET(0x19827010)

namespace RPG::Client
{
	inline static constexpr unsigned int HyperTextLink_TypeDefinitionIndex = 72467;

	class HyperTextLink : public ::UnityEngine::UI::Text
	{
	public:
		static ::System::Func_2<::System::String*, ::UnityEngine::Sprite*>** StaticGet_funLoadSprite()
		{
			return (::System::Func_2<::System::String*, ::UnityEngine::Sprite*>**)Il2CppClass::FromTypeDefinitionIndex(HyperTextLink_TypeDefinitionIndex)->GetStaticField(0x59920);
		}
		static ::System::Text::StringBuilder** StaticGet_s_TextBuilder()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(HyperTextLink_TypeDefinitionIndex)->GetStaticField(0x59928);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_s_ImageRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(HyperTextLink_TypeDefinitionIndex)->GetStaticField(0x59930);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_s_HrefRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(HyperTextLink_TypeDefinitionIndex)->GetStaticField(0x59938);
		}
		::System::String* m_OutputText; // 0x190
		::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* m_ImagesPool; // 0x198
		::System::Collections::Generic::List_1<::System::Int32>* m_ImagesVertexIndex; // 0x1A0
		::System::Collections::Generic::List_1<::RPG::Client::HyperTextLink_HrefInfo*>* m_HrefInfos; // 0x1A8
		::System::Action_2<::System::String*, ::System::String*>* onClick; // 0x1B0
		::UnityEngine::Color linkColor; // 0x1B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HYPERTEXTLINK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HYPERTEXTLINK__CCTOR_OFFSET))();
		}

		::System::Void set_text(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HYPERTEXTLINK_SET_TEXT_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HYPERTEXTLINK_AWAKE_OFFSET))(this);
		}

		::System::Void SetVerticesDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HYPERTEXTLINK_SETVERTICESDIRTY_OFFSET))(this);
		}

		::System::Void UpdateQuadImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HYPERTEXTLINK_UPDATEQUADIMAGE_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HYPERTEXTLINK_ONPOPULATEMESH_OFFSET))(this, a1);
		}

		::System::String* GetOutputText(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HYPERTEXTLINK_GETOUTPUTTEXT_OFFSET))(this, a1);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HYPERTEXTLINK_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void SetText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HYPERTEXTLINK_SETTEXT_OFFSET))(this, a1);
		}
	};
}
