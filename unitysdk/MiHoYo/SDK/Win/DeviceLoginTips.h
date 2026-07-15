#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK::Win { class NewDeviceInfoModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_DEVICELOGINTIPS_AWAKE_OFFSET UNITYSDK_OFFSET(0x15680100)
#define MIHOYO_SDK_WIN_DEVICELOGINTIPS_BACK_OFFSET UNITYSDK_OFFSET(0x15681600)
#define MIHOYO_SDK_WIN_DEVICELOGINTIPS_BIND_OFFSET UNITYSDK_OFFSET(0x15681720)
#define MIHOYO_SDK_WIN_DEVICELOGINTIPS_CLOSE_OFFSET UNITYSDK_OFFSET(0x15681690)
#define MIHOYO_SDK_WIN_DEVICELOGINTIPS_GETSHOWTIME_OFFSET UNITYSDK_OFFSET(0x15681330)
#define MIHOYO_SDK_WIN_DEVICELOGINTIPS_HIDE_OFFSET UNITYSDK_OFFSET(0x15681590)
#define MIHOYO_SDK_WIN_DEVICELOGINTIPS_KNOW_OFFSET UNITYSDK_OFFSET(0x156817B0)
#define MIHOYO_SDK_WIN_DEVICELOGINTIPS_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15681840)
#define MIHOYO_SDK_WIN_DEVICELOGINTIPS_SHOW_OFFSET UNITYSDK_OFFSET(0x1567FF90)
#define MIHOYO_SDK_WIN_DEVICELOGINTIPS_START_OFFSET UNITYSDK_OFFSET(0x15680ED0)
#define MIHOYO_SDK_WIN_DEVICELOGINTIPS_UPDATECELL_OFFSET UNITYSDK_OFFSET(0x15680EE0)
#define MIHOYO_SDK_WIN_DEVICELOGINTIPS_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x15680BB0)
#define MIHOYO_SDK_WIN_DEVICELOGINTIPS__CTOR_OFFSET UNITYSDK_OFFSET(0x15681860)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int DeviceLoginTips_TypeDefinitionIndex = 9179;

	class DeviceLoginTips : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::DeviceLoginTips** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::DeviceLoginTips**)Il2CppClass::FromTypeDefinitionIndex(DeviceLoginTips_TypeDefinitionIndex)->GetStaticField(0x2B810);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* BackButtonPath; // 0x0
		// static const ::System::String* CloseButtonPath; // 0x0
		// static const ::System::String* ContentPath; // 0x0
		// static const ::System::String* TitlePath; // 0x0
		// static const ::System::String* SubTitlePath; // 0x0
		// static const ::System::String* ScrollContentPath; // 0x0
		// static const ::System::String* DeviceCellPath; // 0x0
		// static const ::System::String* DeviceNamePath; // 0x0
		// static const ::System::String* DeviceTimePath; // 0x0
		// static const ::System::String* BindButtonPath; // 0x0
		// static const ::System::String* BindButtonTextPath; // 0x0
		// static const ::System::String* OKButtonPath; // 0x0
		// static const ::System::String* OKButtonTextPath; // 0x0
		::UnityEngine::UI::Button* closeButton; // 0x58
		::UnityEngine::UI::Button* backButton; // 0x60
		::UnityEngine::UI::Text* titleText; // 0x68
		::UnityEngine::UI::Text* subTitleText; // 0x70
		::UnityEngine::GameObject* scrollContent; // 0x78
		::UnityEngine::GameObject* deviceCell; // 0x80
		::UnityEngine::UI::Button* bindButton; // 0x88
		::UnityEngine::UI::Text* bindButtonText; // 0x90
		::UnityEngine::UI::Button* okButton; // 0x98
		::UnityEngine::UI::Text* okButtonText; // 0xA0
		::System::Action* OnClose; // 0xA8
		::System::Action* OnBack; // 0xB0
		::System::Action* OnBind; // 0xB8
		::System::Action* OnKnown; // 0xC0
		::System::Collections::Generic::List_1<::MiHoYo::SDK::Win::NewDeviceInfoModel*>* deviceList; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICELOGINTIPS__CTOR_OFFSET))(this);
		}

		static ::System::Void Show(::System::Collections::Generic::List_1<::MiHoYo::SDK::Win::NewDeviceInfoModel*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::MiHoYo::SDK::Win::NewDeviceInfoModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICELOGINTIPS_SHOW_OFFSET))(a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICELOGINTIPS_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICELOGINTIPS_START_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICELOGINTIPS_UPDATETEXT_OFFSET))(this);
		}

		::System::Void UpdateCell(::System::Collections::Generic::List_1<::MiHoYo::SDK::Win::NewDeviceInfoModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::Win::NewDeviceInfoModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICELOGINTIPS_UPDATECELL_OFFSET))(this, a1);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICELOGINTIPS_HIDE_OFFSET))();
		}

		::System::Void Back()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICELOGINTIPS_BACK_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICELOGINTIPS_CLOSE_OFFSET))(this);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICELOGINTIPS_BIND_OFFSET))(this);
		}

		::System::Void Know()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICELOGINTIPS_KNOW_OFFSET))(this);
		}

		static ::System::String* GetShowTime(::System::Int64 a1)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICELOGINTIPS_GETSHOWTIME_OFFSET))(a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICELOGINTIPS_ONDESTROY_OFFSET))(this);
		}
	};
}
