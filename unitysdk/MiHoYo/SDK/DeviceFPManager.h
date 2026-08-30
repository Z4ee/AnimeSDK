#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Random; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_DEVICEFPMANAGER_CHECKINVALIDDEVICEFPVALUE_OFFSET UNITYSDK_OFFSET(0x16A99ED0)
#define MIHOYO_SDK_DEVICEFPMANAGER_GETDEVICEFP_OFFSET UNITYSDK_OFFSET(0x16A99950)
#define MIHOYO_SDK_DEVICEFPMANAGER_GETFPKEY_OFFSET UNITYSDK_OFFSET(0x16A99E20)
#define MIHOYO_SDK_DEVICEFPMANAGER_GETRANDOMHEXNUMBER_OFFSET UNITYSDK_OFFSET(0x16A9A080)
#define MIHOYO_SDK_DEVICEFPMANAGER_REFRESH_OFFSET UNITYSDK_OFFSET(0x16A9A280)
#define MIHOYO_SDK_DEVICEFPMANAGER_REQUESTDEVICEFP_OFFSET UNITYSDK_OFFSET(0x16A9A510)
#define MIHOYO_SDK_DEVICEFPMANAGER_REQUESTEXTLIST_OFFSET UNITYSDK_OFFSET(0x16A9A340)
#define MIHOYO_SDK_DEVICEFPMANAGER_SETFPKEY_OFFSET UNITYSDK_OFFSET(0x16A9A1A0)
#define MIHOYO_SDK_DEVICEFPMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A9CCC0)
#define MIHOYO_SDK_DEVICEFPMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x16A99940)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DeviceFPManager_TypeDefinitionIndex = 46734;

	class DeviceFPManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::DeviceFPManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::DeviceFPManager**)Il2CppClass::FromTypeDefinitionIndex(DeviceFPManager_TypeDefinitionIndex)->GetStaticField(0x44ED0);
		}
		static ::System::Random** StaticGet_random()
		{
			return (::System::Random**)Il2CppClass::FromTypeDefinitionIndex(DeviceFPManager_TypeDefinitionIndex)->GetStaticField(0x44ED8);
		}
		// static const ::System::String* DEVICE_ID; // 0x0
		// static const ::System::String* DEVICE_FP; // 0x0
		// static const ::System::String* SEED_ID; // 0x0
		// static const ::System::String* SEED_TIME; // 0x0
		// static const ::System::String* DEVICE_UID; // 0x0
		// static const ::System::String* GPU_NAME; // 0x0
		// static const ::System::String* REGISTRY_KEY_NAME; // 0x0
		// static const ::System::String* SOFTWARE; // 0x0
		// static const ::System::Int32 deviceFFDefaultCount = 0xA; // 0x0
		// static const ::System::Int32 deviceFPFailCountt = 0xB; // 0x0
		// static const ::System::Int32 deviceIdCount = 0x10; // 0x0
		::System::String* seedId; // 0x10
		::System::String* gpuName; // 0x18
		::System::String* seedTime; // 0x20
		::System::String* deviceFP; // 0x28
		::System::String* deviceUID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEFPMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEFPMANAGER__CCTOR_OFFSET))();
		}

		::System::String* GetDeviceFP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEFPMANAGER_GETDEVICEFP_OFFSET))(this);
		}

		::System::Void Refresh(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEFPMANAGER_REFRESH_OFFSET))(this, a1);
		}

		::System::Void RequestExtList(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEFPMANAGER_REQUESTEXTLIST_OFFSET))(this, a1);
		}

		::System::Void RequestDeviceFP(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEFPMANAGER_REQUESTDEVICEFP_OFFSET))(this, a1, a2);
		}

		::System::String* GetRandomHexNumber(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEFPMANAGER_GETRANDOMHEXNUMBER_OFFSET))(this, a1);
		}

		::System::Boolean CheckInvalidDeviceFpValue(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEFPMANAGER_CHECKINVALIDDEVICEFPVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void SetFPKey(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEFPMANAGER_SETFPKEY_OFFSET))(this, a1, a2);
		}

		::System::String* GetFPKey(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEFPMANAGER_GETFPKEY_OFFSET))(this, a1);
		}
	};
}
