#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class NewDeviceInfoModel; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_DEVICETIPSMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D34690)
#define MIHOYO_SDK_WIN_DEVICETIPSMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15D346D0)
#define MIHOYO_SDK_WIN_DEVICETIPSMANAGER___C__ONGETDEVICELIST_B__20_0_OFFSET UNITYSDK_OFFSET(0x15D34790)
#define MIHOYO_SDK_WIN_DEVICETIPSMANAGER___C__REQUESTACKNEWERDEVICES_B__19_0_OFFSET UNITYSDK_OFFSET(0x15D346E0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int DeviceTipsManager___c_TypeDefinitionIndex = 9274;

	class DeviceTipsManager___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::MiHoYo::SDK::JSONNode*, ::MiHoYo::SDK::Win::NewDeviceInfoModel*>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::MiHoYo::SDK::JSONNode*, ::MiHoYo::SDK::Win::NewDeviceInfoModel*>**)Il2CppClass::FromTypeDefinitionIndex(DeviceTipsManager___c_TypeDefinitionIndex)->GetStaticField(0x2B7E0);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__19_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(DeviceTipsManager___c_TypeDefinitionIndex)->GetStaticField(0x2B7E8);
		}
		static ::MiHoYo::SDK::Win::DeviceTipsManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::DeviceTipsManager___c**)Il2CppClass::FromTypeDefinitionIndex(DeviceTipsManager___c_TypeDefinitionIndex)->GetStaticField(0x2B7F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICETIPSMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICETIPSMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RequestAckNewerDevices_b__19_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICETIPSMANAGER___C__REQUESTACKNEWERDEVICES_B__19_0_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::Win::NewDeviceInfoModel* _OnGetDeviceList_b__20_0(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::MiHoYo::SDK::Win::NewDeviceInfoModel*(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICETIPSMANAGER___C__ONGETDEVICELIST_B__20_0_OFFSET))(this, a1);
		}
	};
}
