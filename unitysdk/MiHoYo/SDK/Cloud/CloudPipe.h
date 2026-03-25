#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/WeLing/SDK/GyroType.h"

namespace System { class String; }

#define MIHOYO_SDK_CLOUD_CLOUDPIPE_GETSTRING_OFFSET UNITYSDK_OFFSET(0x15DF21D0)
#define MIHOYO_SDK_CLOUD_CLOUDPIPE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15DEF3C0)
#define MIHOYO_SDK_CLOUD_CLOUDPIPE_INIT_OFFSET UNITYSDK_OFFSET(0x15DF1670)
#define MIHOYO_SDK_CLOUD_CLOUDPIPE_INVOKECALLBACK_OFFSET UNITYSDK_OFFSET(0x15DEFEE0)
#define MIHOYO_SDK_CLOUD_CLOUDPIPE_ONGETPIPEDATA_OFFSET UNITYSDK_OFFSET(0x15DF1940)
#define MIHOYO_SDK_CLOUD_CLOUDPIPE_ONGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x15DF1AC0)
#define MIHOYO_SDK_CLOUD_CLOUDPIPE_ONSENSOR_OFFSET UNITYSDK_OFFSET(0x15DF1680)
#define MIHOYO_SDK_CLOUD_CLOUDPIPE_SENDDATA_OFFSET UNITYSDK_OFFSET(0x15DF18A0)
#define MIHOYO_SDK_CLOUD_CLOUDPIPE_SENDPARAMDATA_OFFSET UNITYSDK_OFFSET(0x15DEF6D0)
#define MIHOYO_SDK_CLOUD_CLOUDPIPE__CTOR_OFFSET UNITYSDK_OFFSET(0x15DF1660)

namespace MiHoYo::SDK::Cloud
{
	inline static constexpr unsigned int CloudPipe_TypeDefinitionIndex = 7499;

	class CloudPipe : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Cloud::CloudPipe** StaticGet__instance()
		{
			return (::MiHoYo::SDK::Cloud::CloudPipe**)Il2CppClass::FromTypeDefinitionIndex(CloudPipe_TypeDefinitionIndex)->GetStaticField(0x10050);
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

		static ::System::Void OnSensor(::WeLing::SDK::GyroType gyroType, ::Il2CppArray<::System::Single>* data)
		{
			return ((::System::Void(*)(::WeLing::SDK::GyroType, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDPIPE_ONSENSOR_OFFSET))(gyroType, data);
		}

		::System::Void SendData(::System::String* typeName, ::System::String* functionName, ::System::String* parameters, ::System::Int32 callbackIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDPIPE_SENDDATA_OFFSET))(this, typeName, functionName, parameters, callbackIndex);
		}

		::System::Void SendParamData(::System::String* functionName, ::System::String* parameters, ::System::Int32 callbackIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDPIPE_SENDPARAMDATA_OFFSET))(this, functionName, parameters, callbackIndex);
		}

		static ::System::Void OnGetPipeData(::System::String* dataString)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDPIPE_ONGETPIPEDATA_OFFSET))(dataString);
		}

		static ::System::Void OnGetResponse(::System::Object* data)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDPIPE_ONGETRESPONSE_OFFSET))(data);
		}

		static ::System::Void InvokeCallback(::System::Int32 ret, ::System::String* msg, ::System::String* data, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDPIPE_INVOKECALLBACK_OFFSET))(ret, msg, data, index);
		}

		static ::System::String* GetString(::System::String* dataString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDPIPE_GETSTRING_OFFSET))(dataString);
		}
	};
}
