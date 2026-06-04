#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class NewDeviceInfoModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_WIN_DEVICETIPSMANAGER_CHECKNEWDEVICETIPS_OFFSET UNITYSDK_OFFSET(0x184BA200)
#define MIHOYO_SDK_WIN_DEVICETIPSMANAGER_GET_DEVICEINFOLIST_OFFSET UNITYSDK_OFFSET(0x184BA1A0)
#define MIHOYO_SDK_WIN_DEVICETIPSMANAGER_GET_LASTESTDEVICEID_OFFSET UNITYSDK_OFFSET(0x184BA1C0)
#define MIHOYO_SDK_WIN_DEVICETIPSMANAGER_GET_USERDATA_OFFSET UNITYSDK_OFFSET(0x184BA1E0)
#define MIHOYO_SDK_WIN_DEVICETIPSMANAGER_ONGETDEVICELIST_OFFSET UNITYSDK_OFFSET(0x184BA8A0)
#define MIHOYO_SDK_WIN_DEVICETIPSMANAGER_REQUESTACKNEWERDEVICES_OFFSET UNITYSDK_OFFSET(0x184BA570)
#define MIHOYO_SDK_WIN_DEVICETIPSMANAGER_REQUESTNEWDEVICELIST_OFFSET UNITYSDK_OFFSET(0x184BA290)
#define MIHOYO_SDK_WIN_DEVICETIPSMANAGER_SET_DEVICEINFOLIST_OFFSET UNITYSDK_OFFSET(0x184BA1B0)
#define MIHOYO_SDK_WIN_DEVICETIPSMANAGER_SET_LASTESTDEVICEID_OFFSET UNITYSDK_OFFSET(0x184BA1D0)
#define MIHOYO_SDK_WIN_DEVICETIPSMANAGER_SET_USERDATA_OFFSET UNITYSDK_OFFSET(0x184BA1F0)
#define MIHOYO_SDK_WIN_DEVICETIPSMANAGER_SHOWDEVICELOGINTIPSPLUGINUI_OFFSET UNITYSDK_OFFSET(0x184BAB80)
#define MIHOYO_SDK_WIN_DEVICETIPSMANAGER_SHOWDEVICELOGINTIPS_OFFSET UNITYSDK_OFFSET(0x184BB440)
#define MIHOYO_SDK_WIN_DEVICETIPSMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x184BB560)
#define MIHOYO_SDK_WIN_DEVICETIPSMANAGER__CHECKNEWDEVICETIPS_B__17_0_OFFSET UNITYSDK_OFFSET(0x184BB5A0)
#define MIHOYO_SDK_WIN_DEVICETIPSMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x184BB550)
#define MIHOYO_SDK_WIN_DEVICETIPSMANAGER__SHOWDEVICELOGINTIPSPLUGINUI_B__21_0_OFFSET UNITYSDK_OFFSET(0x184BB5F0)
#define MIHOYO_SDK_WIN_DEVICETIPSMANAGER__SHOWDEVICELOGINTIPSPLUGINUI_B__21_1_OFFSET UNITYSDK_OFFSET(0x184BB810)
#define MIHOYO_SDK_WIN_DEVICETIPSMANAGER__SHOWDEVICELOGINTIPSPLUGINUI_B__21_2_OFFSET UNITYSDK_OFFSET(0x184BB8A0)
#define MIHOYO_SDK_WIN_DEVICETIPSMANAGER__SHOWDEVICELOGINTIPSPLUGINUI_B__21_3_OFFSET UNITYSDK_OFFSET(0x184BB930)
#define MIHOYO_SDK_WIN_DEVICETIPSMANAGER__SHOWDEVICELOGINTIPS_B__22_0_OFFSET UNITYSDK_OFFSET(0x184BB9D0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int DeviceTipsManager_TypeDefinitionIndex = 8990;

	class DeviceTipsManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::DeviceTipsManager** StaticGet_Instacne()
		{
			return (::MiHoYo::SDK::Win::DeviceTipsManager**)Il2CppClass::FromTypeDefinitionIndex(DeviceTipsManager_TypeDefinitionIndex)->GetStaticField(0x260C0);
		}
		::MiHoYo::SDK::AccountModel* _userData_k__BackingField; // 0x10
		::System::Action* OnBack; // 0x18
		::System::Collections::Generic::List_1<::MiHoYo::SDK::Win::NewDeviceInfoModel*>* _deviceInfoList_k__BackingField; // 0x20
		::System::Action* OnNotNewDevice; // 0x28
		::System::Action* OnBind; // 0x30
		::System::Action* OnClose; // 0x38
		::System::Int32 _lastestDeviceId_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICETIPSMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICETIPSMANAGER__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::List_1<::MiHoYo::SDK::Win::NewDeviceInfoModel*>* get_deviceInfoList()
		{
			return ((::System::Collections::Generic::List_1<::MiHoYo::SDK::Win::NewDeviceInfoModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICETIPSMANAGER_GET_DEVICEINFOLIST_OFFSET))(this);
		}

		::System::Void set_deviceInfoList(::System::Collections::Generic::List_1<::MiHoYo::SDK::Win::NewDeviceInfoModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::Win::NewDeviceInfoModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICETIPSMANAGER_SET_DEVICEINFOLIST_OFFSET))(this, a1);
		}

		::System::Int32 get_lastestDeviceId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICETIPSMANAGER_GET_LASTESTDEVICEID_OFFSET))(this);
		}

		::System::Void set_lastestDeviceId(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICETIPSMANAGER_SET_LASTESTDEVICEID_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::AccountModel* get_userData()
		{
			return ((::MiHoYo::SDK::AccountModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICETIPSMANAGER_GET_USERDATA_OFFSET))(this);
		}

		::System::Void set_userData(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICETIPSMANAGER_SET_USERDATA_OFFSET))(this, a1);
		}

		::System::Void CheckNewDeviceTips(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICETIPSMANAGER_CHECKNEWDEVICETIPS_OFFSET))(this, a1);
		}

		::System::Void RequestNewDeviceList(::MiHoYo::SDK::AccountModel* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICETIPSMANAGER_REQUESTNEWDEVICELIST_OFFSET))(this, a1, a2);
		}

		::System::Void RequestAckNewerDevices(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICETIPSMANAGER_REQUESTACKNEWERDEVICES_OFFSET))(this, a1);
		}

		::System::Void OnGetDeviceList(::MiHoYo::SDK::NetworkResponseModel* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICETIPSMANAGER_ONGETDEVICELIST_OFFSET))(this, a1, a2);
		}

		::System::Boolean ShowDeviceLoginTipsPluginUI(::System::Collections::Generic::List_1<::MiHoYo::SDK::Win::NewDeviceInfoModel*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::Win::NewDeviceInfoModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICETIPSMANAGER_SHOWDEVICELOGINTIPSPLUGINUI_OFFSET))(this, a1);
		}

		::System::Void ShowDeviceLoginTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICETIPSMANAGER_SHOWDEVICELOGINTIPS_OFFSET))(this);
		}

		::System::Void _CheckNewDeviceTips_b__17_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICETIPSMANAGER__CHECKNEWDEVICETIPS_B__17_0_OFFSET))(this, a1);
		}

		::System::Void _ShowDeviceLoginTipsPluginUI_b__21_0(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICETIPSMANAGER__SHOWDEVICELOGINTIPSPLUGINUI_B__21_0_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowDeviceLoginTipsPluginUI_b__21_1(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICETIPSMANAGER__SHOWDEVICELOGINTIPSPLUGINUI_B__21_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowDeviceLoginTipsPluginUI_b__21_2(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICETIPSMANAGER__SHOWDEVICELOGINTIPSPLUGINUI_B__21_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowDeviceLoginTipsPluginUI_b__21_3(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICETIPSMANAGER__SHOWDEVICELOGINTIPSPLUGINUI_B__21_3_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowDeviceLoginTips_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICETIPSMANAGER__SHOWDEVICELOGINTIPS_B__22_0_OFFSET))(this);
		}
	};
}
