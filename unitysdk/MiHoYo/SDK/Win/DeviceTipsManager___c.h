#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class NewDeviceInfoModel; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_DEVICETIPSMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1609A6E0)
#define MIHOYO_SDK_WIN_DEVICETIPSMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1609A720)
#define MIHOYO_SDK_WIN_DEVICETIPSMANAGER___C__ONGETDEVICELIST_B__20_0_OFFSET UNITYSDK_OFFSET(0x1609A7E0)
#define MIHOYO_SDK_WIN_DEVICETIPSMANAGER___C__REQUESTACKNEWERDEVICES_B__19_0_OFFSET UNITYSDK_OFFSET(0x1609A730)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int DeviceTipsManager___c_TypeDefinitionIndex = 7943;

	class DeviceTipsManager___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::DeviceTipsManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::DeviceTipsManager___c**)Il2CppClass::FromTypeDefinitionIndex(DeviceTipsManager___c_TypeDefinitionIndex)->GetStaticField(0x13CC0);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__19_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(DeviceTipsManager___c_TypeDefinitionIndex)->GetStaticField(0x13CC8);
		}
		static ::System::Func_2<::MiHoYo::SDK::JSONNode*, ::MiHoYo::SDK::Win::NewDeviceInfoModel*>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::MiHoYo::SDK::JSONNode*, ::MiHoYo::SDK::Win::NewDeviceInfoModel*>**)Il2CppClass::FromTypeDefinitionIndex(DeviceTipsManager___c_TypeDefinitionIndex)->GetStaticField(0x13CD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICETIPSMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICETIPSMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RequestAckNewerDevices_b__19_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICETIPSMANAGER___C__REQUESTACKNEWERDEVICES_B__19_0_OFFSET))(this, response);
		}

		::MiHoYo::SDK::Win::NewDeviceInfoModel* _OnGetDeviceList_b__20_0(::MiHoYo::SDK::JSONNode* device)
		{
			return ((::MiHoYo::SDK::Win::NewDeviceInfoModel*(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICETIPSMANAGER___C__ONGETDEVICELIST_B__20_0_OFFSET))(this, device);
		}
	};
}
