#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/WeLing/SDK/GyroType.h"

namespace System { class String; }

#define MIHOYO_SDK_CLOUD_CLOUDPIPE_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1B744100)
#define MIHOYO_SDK_CLOUD_CLOUDPIPE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B7414D0)
#define MIHOYO_SDK_CLOUD_CLOUDPIPE_INIT_OFFSET UNITYSDK_OFFSET(0x1B743520)
#define MIHOYO_SDK_CLOUD_CLOUDPIPE_INVOKECALLBACK_OFFSET UNITYSDK_OFFSET(0x1B741E10)
#define MIHOYO_SDK_CLOUD_CLOUDPIPE_ONGETPIPEDATA_OFFSET UNITYSDK_OFFSET(0x1B743860)
#define MIHOYO_SDK_CLOUD_CLOUDPIPE_ONGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1B743A10)
#define MIHOYO_SDK_CLOUD_CLOUDPIPE_ONSENSOR_OFFSET UNITYSDK_OFFSET(0x1B743530)
#define MIHOYO_SDK_CLOUD_CLOUDPIPE_SENDDATA_OFFSET UNITYSDK_OFFSET(0x1B7437C0)
#define MIHOYO_SDK_CLOUD_CLOUDPIPE_SENDPARAMDATA_OFFSET UNITYSDK_OFFSET(0x1B741650)
#define MIHOYO_SDK_CLOUD_CLOUDPIPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B743510)

namespace MiHoYo::SDK::Cloud
{
	inline static constexpr unsigned int CloudPipe_TypeDefinitionIndex = 8822;

	class CloudPipe : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Cloud::CloudPipe** StaticGet__instance()
		{
			return (::MiHoYo::SDK::Cloud::CloudPipe**)Il2CppClass::FromTypeDefinitionIndex(CloudPipe_TypeDefinitionIndex)->GetStaticField(0x4DA0);
		}
		// static const ::System::String* InvokeFunc; // 0x0
		// static const ::System::String* InvokeReturnFunc; // 0x0
		// static const ::System::String* WebFunc; // 0x0
		// static const ::System::String* pipeSalt; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDPIPE__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Cloud::CloudPipe* get_Instance()
		{
			return ((::MiHoYo::SDK::Cloud::CloudPipe*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDPIPE_GET_INSTANCE_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDPIPE_INIT_OFFSET))(this);
		}

		static ::System::Void OnSensor(::WeLing::SDK::GyroType a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Void(*)(::WeLing::SDK::GyroType, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDPIPE_ONSENSOR_OFFSET))(a1, a2);
		}

		::System::Void SendData(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDPIPE_SENDDATA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SendParamData(::System::String* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDPIPE_SENDPARAMDATA_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void OnGetPipeData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDPIPE_ONGETPIPEDATA_OFFSET))(a1);
		}

		static ::System::Void OnGetResponse(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDPIPE_ONGETRESPONSE_OFFSET))(a1);
		}

		static ::System::Void InvokeCallback(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDPIPE_INVOKECALLBACK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* GetString(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDPIPE_GETSTRING_OFFSET))(a1);
		}
	};
}
