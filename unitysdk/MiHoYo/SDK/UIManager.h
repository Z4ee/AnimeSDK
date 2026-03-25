#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MiHoYo::SDK { class UIElement; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class PropertyInfo; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class Transform; }

#define MIHOYO_SDK_UIMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x16022980)
#define MIHOYO_SDK_UIMANAGER_DESTORYCONTAINER_OFFSET UNITYSDK_OFFSET(0x160226B0)
#define MIHOYO_SDK_UIMANAGER_GETLANGUAGEFONT_OFFSET UNITYSDK_OFFSET(0x16022C50)
#define MIHOYO_SDK_UIMANAGER_GETTOPELEMENT_OFFSET UNITYSDK_OFFSET(0x16022BB0)
#define MIHOYO_SDK_UIMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x16019950)
#define MIHOYO_SDK_UIMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x160217C0)
#define MIHOYO_SDK_UIMANAGER_ISTOP_OFFSET UNITYSDK_OFFSET(0x16021410)
#define MIHOYO_SDK_UIMANAGER_ONHIDEALLNATIVEUI_OFFSET UNITYSDK_OFFSET(0x16022840)
#define MIHOYO_SDK_UIMANAGER_ONHIDENATIVEUI_OFFSET UNITYSDK_OFFSET(0x16022C10)
#define MIHOYO_SDK_UIMANAGER_ONSHOWNATIVEUI_OFFSET UNITYSDK_OFFSET(0x16022C30)
#define MIHOYO_SDK_UIMANAGER_POPALL_OFFSET UNITYSDK_OFFSET(0x1601FBE0)
#define MIHOYO_SDK_UIMANAGER_POPUIELEMENT_OFFSET UNITYSDK_OFFSET(0x16019AF0)
#define MIHOYO_SDK_UIMANAGER_POP_OFFSET UNITYSDK_OFFSET(0x160226A0)
#define MIHOYO_SDK_UIMANAGER_SETTEXTFONTS_OFFSET UNITYSDK_OFFSET(0x16023030)
#define MIHOYO_SDK_UIMANAGER_SETUIVERTEXCOLORCALCPROPERTY_OFFSET UNITYSDK_OFFSET(0x16022070)
#define MIHOYO_SDK_UIMANAGER_SET_PIXELPERFECT_OFFSET UNITYSDK_OFFSET(0x16021570)
#define MIHOYO_SDK_UIMANAGER_SET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0x160214A0)
#define MIHOYO_SDK_UIMANAGER_SET_USERINTERACTIONENABLE_OFFSET UNITYSDK_OFFSET(0x16021640)
#define MIHOYO_SDK_UIMANAGER_TRYGETRUNTIMEFONT_OFFSET UNITYSDK_OFFSET(0x16022580)
#define MIHOYO_SDK_UIMANAGER_TRYSETUPRUNTIMEFONT_OFFSET UNITYSDK_OFFSET(0x16022440)
#define MIHOYO_SDK_UIMANAGER_TRYUNLOADRUNTIMEFONT_OFFSET UNITYSDK_OFFSET(0x16022620)
#define MIHOYO_SDK_UIMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16023170)
#define MIHOYO_SDK_UIMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x16021770)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UIManager_TypeDefinitionIndex = 7255;

	class UIManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Reflection::PropertyInfo** StaticGet__cachedPropertyInfo()
		{
			return (::System::Reflection::PropertyInfo**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x1A020);
		}
		static ::MiHoYo::SDK::UIManager** StaticGet__instance()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x1A028);
		}
		static ::System::Nullable_1<::System::Boolean>* StaticGet__hasEnableUIVertexColorCalcProperty()
		{
			return (::System::Nullable_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x75C0);
		}
		// static const ::System::String* CanvasName; // 0x0
		// static const ::System::String* _enabledColorTextProp; // 0x0
		::System::Collections::Generic::List_1<::MiHoYo::SDK::UIElement*>* uiElements; // 0x18
		::MiHoYo::SDK::UIElement* topElement; // 0x20
		::System::Boolean isDealloc; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER__CCTOR_OFFSET))();
		}

		::System::Void set_sortingOrder(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_SET_SORTINGORDER_OFFSET))(this, value);
		}

		::System::Void set_pixelPerfect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_SET_PIXELPERFECT_OFFSET))(this, value);
		}

		::System::Void set_userInteractionEnable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_SET_USERINTERACTIONENABLE_OFFSET))(this, value);
		}

		static ::MiHoYo::SDK::UIManager* get_Instance()
		{
			return ((::MiHoYo::SDK::UIManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void SetUIVertexColorCalcProperty(::UnityEngine::Canvas* canvas)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_SETUIVERTEXCOLORCALCPROPERTY_OFFSET))(canvas);
		}

		static ::MiHoYo::SDK::UIManager* Init(::System::String* name)
		{
			return ((::MiHoYo::SDK::UIManager*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_INIT_OFFSET))(name);
		}

		::System::Void TrySetupRuntimeFont()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_TRYSETUPRUNTIMEFONT_OFFSET))(this);
		}

		::UnityEngine::Font* TryGetRuntimeFont()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_TRYGETRUNTIMEFONT_OFFSET))(this);
		}

		::System::Void TryUnloadRuntimeFont()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_TRYUNLOADRUNTIMEFONT_OFFSET))(this);
		}

		::System::Void Pop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_POP_OFFSET))(this);
		}

		::System::Void PopAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_POPALL_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_CLEAR_OFFSET))(this);
		}

		::System::Void PopUIElement(::System::String* targetName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_POPUIELEMENT_OFFSET))(this, targetName);
		}

		::System::Boolean isTop(::MiHoYo::SDK::UIElement* element)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::UIElement*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_ISTOP_OFFSET))(this, element);
		}

		::System::Void OnShowNativeUI(::System::String* strUIName, ::System::String* strParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_ONSHOWNATIVEUI_OFFSET))(this, strUIName, strParams);
		}

		::System::Void OnHideNativeUI(::System::String* strUIName, ::System::String* strParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_ONHIDENATIVEUI_OFFSET))(this, strUIName, strParams);
		}

		::System::Void OnHideAllNativeUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_ONHIDEALLNATIVEUI_OFFSET))(this);
		}

		::System::Void GetTopElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_GETTOPELEMENT_OFFSET))(this);
		}

		::System::Void DestoryContainer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_DESTORYCONTAINER_OFFSET))(this);
		}

		::UnityEngine::Font* GetLanguageFont()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_GETLANGUAGEFONT_OFFSET))(this);
		}

		::System::Void SetTextFonts(::UnityEngine::Transform* obj, ::UnityEngine::Font* languageFont)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_SETTEXTFONTS_OFFSET))(this, obj, languageFont);
		}
	};
}
