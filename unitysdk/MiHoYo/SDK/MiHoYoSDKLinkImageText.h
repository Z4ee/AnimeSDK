#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoUI/HoYoText.h"
#include "unitysdk/UnityEngine/UIVertex.h"

namespace MiHoYo::SDK { class HrefClickEvent; }
namespace MiHoYo::SDK { class MiHoYoSDKLinkImageText_HrefInfo; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace System::Text::RegularExpressions { class Regex; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class VertexHelper; }

#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_GETOUTPUTTEXT_OFFSET UNITYSDK_OFFSET(0x8D4DD40)
#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_GET_ONHREFCLICK_OFFSET UNITYSDK_OFFSET(0x8D4C210)
#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x8D4E880)
#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x8D4CDE0)
#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_REPLACERICHTEXT_OFFSET UNITYSDK_OFFSET(0x8D4E610)
#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_SETVERTICESDIRTY_OFFSET UNITYSDK_OFFSET(0x8D4C230)
#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_SET_ONHREFCLICK_OFFSET UNITYSDK_OFFSET(0x8D4C220)
#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_UPDATEQUADIMAGE_OFFSET UNITYSDK_OFFSET(0x8D4C280)
#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x8D4ED00)
#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x8D4EBE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKLinkImageText_TypeDefinitionIndex = 43065;

	class MiHoYoSDKLinkImageText : public ::MiHoYo::SDK::HoYoUI::HoYoText
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_s_HrefRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKLinkImageText_TypeDefinitionIndex)->GetStaticField(0x4CAF0);
		}
		static ::System::Text::StringBuilder** StaticGet_s_TextBuilder()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKLinkImageText_TypeDefinitionIndex)->GetStaticField(0x4CAF8);
		}
		static ::System::Func_2<::System::String*, ::UnityEngine::Sprite*>** StaticGet_funLoadSprite()
		{
			return (::System::Func_2<::System::String*, ::UnityEngine::Sprite*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKLinkImageText_TypeDefinitionIndex)->GetStaticField(0x4CB00);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_s_ImageRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKLinkImageText_TypeDefinitionIndex)->GetStaticField(0x4CB08);
		}
		::System::String* m_OutputText; // 0x1F0
		::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* m_ImagesPool; // 0x1F8
		::System::Collections::Generic::List_1<::System::Int32>* m_ImagesVertexIndex; // 0x200
		::System::Collections::Generic::List_1<::MiHoYo::SDK::MiHoYoSDKLinkImageText_HrefInfo*>* m_HrefInfos; // 0x208
		::MiHoYo::SDK::HrefClickEvent* m_OnHrefClick; // 0x210
		::Il2CppArray<::UnityEngine::UIVertex>* m_TempVerts; // 0x218
		::UnityEngine::UIVertex vert; // 0x220

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT__CCTOR_OFFSET))();
		}

		::MiHoYo::SDK::HrefClickEvent* get_onHrefClick()
		{
			return ((::MiHoYo::SDK::HrefClickEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_GET_ONHREFCLICK_OFFSET))(this);
		}

		::System::Void set_onHrefClick(::MiHoYo::SDK::HrefClickEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HrefClickEvent*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_SET_ONHREFCLICK_OFFSET))(this, value);
		}

		::System::Void SetVerticesDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_SETVERTICESDIRTY_OFFSET))(this);
		}

		::System::Void UpdateQuadImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_UPDATEQUADIMAGE_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_ONPOPULATEMESH_OFFSET))(this, toFill);
		}

		::System::String* GetOutputText(::System::String* outputText)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_GETOUTPUTTEXT_OFFSET))(this, outputText);
		}

		::System::String* ReplaceRichText(::System::String* str)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_REPLACERICHTEXT_OFFSET))(this, str);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_ONPOINTERCLICK_OFFSET))(this, eventData);
		}
	};
}
