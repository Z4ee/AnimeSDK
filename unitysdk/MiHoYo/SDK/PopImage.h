#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class PopImageModel; }
namespace MiHoYo::SDK { class PopImage_ClickImageDelegate; }
namespace MiHoYo::SDK { class PopImage_CloseDelegate; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_POPIMAGE_AWAKE_OFFSET UNITYSDK_OFFSET(0x17617A60)
#define MIHOYO_SDK_POPIMAGE_CLICKIMAGE_OFFSET UNITYSDK_OFFSET(0x17619330)
#define MIHOYO_SDK_POPIMAGE_CLOSE_OFFSET UNITYSDK_OFFSET(0x17619430)
#define MIHOYO_SDK_POPIMAGE_GET_POPIMAGEMODEL_OFFSET UNITYSDK_OFFSET(0x176178F0)
#define MIHOYO_SDK_POPIMAGE_HIDE_OFFSET UNITYSDK_OFFSET(0x176179F0)
#define MIHOYO_SDK_POPIMAGE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1761A920)
#define MIHOYO_SDK_POPIMAGE_ONGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x17619EF0)
#define MIHOYO_SDK_POPIMAGE_RESTJOYPADBUTTONUI_OFFSET UNITYSDK_OFFSET(0x1761A800)
#define MIHOYO_SDK_POPIMAGE_SET_POPIMAGEMODEL_OFFSET UNITYSDK_OFFSET(0x17617690)
#define MIHOYO_SDK_POPIMAGE_SHOW_OFFSET UNITYSDK_OFFSET(0x17617900)
#define MIHOYO_SDK_POPIMAGE_UPDATEJOYPADBUTTONUI_OFFSET UNITYSDK_OFFSET(0x1761A4B0)
#define MIHOYO_SDK_POPIMAGE_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x176188D0)
#define MIHOYO_SDK_POPIMAGE_UPDATE_OFFSET UNITYSDK_OFFSET(0x17618990)
#define MIHOYO_SDK_POPIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1761A960)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PopImage_TypeDefinitionIndex = 7292;

	class PopImage : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::PopImage** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PopImage**)Il2CppClass::FromTypeDefinitionIndex(PopImage_TypeDefinitionIndex)->GetStaticField(0x16870);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* BGPath; // 0x0
		// static const ::System::String* ImagePath; // 0x0
		// static const ::System::String* CloseButtonPath; // 0x0
		// static const ::System::String* JoyPadButtonsPath; // 0x0
		// static const ::System::String* JoyPadCloseButtonPath; // 0x0
		// static const ::System::String* JoyPadWatchButtonPath; // 0x0
		// static const ::System::String* JoyPadCloseButtonTextPath; // 0x0
		// static const ::System::String* JoyPadWatchButtonTextPath; // 0x0
		// static const ::System::String* JoyPadCircle; // 0x0
		// static const ::System::String* JoyPadClose; // 0x0
		// static const ::System::String* JoyPadXBoxA; // 0x0
		// static const ::System::String* JoyPadXBoxB; // 0x0
		// static const ::System::String* JoyPadPS5Circle; // 0x0
		// static const ::System::String* JoyPadPS5Close; // 0x0
		::UnityEngine::UI::Button* bgButton; // 0x58
		::UnityEngine::GameObject* imageObject; // 0x60
		::UnityEngine::GameObject* closeObject; // 0x68
		::UnityEngine::GameObject* joyPadObject; // 0x70
		::UnityEngine::GameObject* joyPadCloseObject; // 0x78
		::UnityEngine::GameObject* joyPadWatchObject; // 0x80
		::UnityEngine::UI::Text* joyPadCloseText; // 0x88
		::UnityEngine::UI::Text* joyPadWatchText; // 0x90
		::UnityEngine::GameObject* joyPadWatchCircleObject; // 0x98
		::UnityEngine::GameObject* joyPadWatchCloseObject; // 0xA0
		::UnityEngine::GameObject* joyPadWatchPS5CloseObject; // 0xA8
		::UnityEngine::GameObject* joyPadWatchAObject; // 0xB0
		::UnityEngine::GameObject* joyPadWatchBObject; // 0xB8
		::UnityEngine::GameObject* joyPadCloseCircleObject; // 0xC0
		::UnityEngine::GameObject* joyPadClosePS5CircleObject; // 0xC8
		::UnityEngine::GameObject* joyPadCloseCloseObject; // 0xD0
		::UnityEngine::GameObject* joyPadCloseAObject; // 0xD8
		::UnityEngine::GameObject* joyPadCloseBObject; // 0xE0
		::MiHoYo::SDK::PopImage_CloseDelegate* OnClose; // 0xE8
		::MiHoYo::SDK::PopImage_ClickImageDelegate* OnClickImage; // 0xF0
		::MiHoYo::SDK::PopImageModel* _popImageModel; // 0xF8
		::System::Boolean isAnimaiton; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE__CTOR_OFFSET))(this);
		}

		::System::Void set_popImageModel(::MiHoYo::SDK::PopImageModel* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PopImageModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_SET_POPIMAGEMODEL_OFFSET))(this, value);
		}

		::MiHoYo::SDK::PopImageModel* get_popImageModel()
		{
			return ((::MiHoYo::SDK::PopImageModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_GET_POPIMAGEMODEL_OFFSET))(this);
		}

		static ::System::Void Show(::System::Boolean animationed)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_SHOW_OFFSET))(animationed);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_HIDE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_UPDATETEXT_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_UPDATE_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_CLOSE_OFFSET))(this);
		}

		::System::Void ClickImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_CLICKIMAGE_OFFSET))(this);
		}

		::System::Void OnGetTexture(::UnityEngine::Texture2D* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_ONGETTEXTURE_OFFSET))(this, data);
		}

		::System::Void UpdateJoyPadButtonUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_UPDATEJOYPADBUTTONUI_OFFSET))(this);
		}

		::System::Void RestJoyPadButtonUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_RESTJOYPADBUTTONUI_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_ONDESTROY_OFFSET))(this);
		}
	};
}
