#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CloudGame::MailBox { class Mailbox; }
namespace CloudGame::MailBox { class Mailbox_ReceiveCallbackHandler; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_CONNECT_OFFSET UNITYSDK_OFFSET(0x1C7C3E20)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1C7C4BB0)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_INIT_OFFSET UNITYSDK_OFFSET(0x1C7C40D0)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_INVOKECALLBACK_OFFSET UNITYSDK_OFFSET(0x1C7C48B0)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_ONGETPIPEDATA_OFFSET UNITYSDK_OFFSET(0x1C7C4400)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_ONGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1C7C4570)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_SDKRECEIVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1C7C3C50)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_SENDDATA_OFFSET UNITYSDK_OFFSET(0x1C7C40E0)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_SENDPARAMDATA_OFFSET UNITYSDK_OFFSET(0x1C7C4170)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7C4C20)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7C3D60)

namespace MiHoYo::SDK::MiHoYoCloud
{
	inline static constexpr unsigned int CloudPipe_TypeDefinitionIndex = 21226;

	class CloudPipe : public ::System::Object
	{
	public:
		static ::CloudGame::MailBox::Mailbox_ReceiveCallbackHandler** StaticGet_receiveCallback()
		{
			return (::CloudGame::MailBox::Mailbox_ReceiveCallbackHandler**)Il2CppClass::FromTypeDefinitionIndex(CloudPipe_TypeDefinitionIndex)->GetStaticField(0xB1C0);
		}
		static ::CloudGame::MailBox::Mailbox** StaticGet_mailbox()
		{
			return (::CloudGame::MailBox::Mailbox**)Il2CppClass::FromTypeDefinitionIndex(CloudPipe_TypeDefinitionIndex)->GetStaticField(0xB1C8);
		}
		static ::MiHoYo::SDK::MiHoYoCloud::CloudPipe** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::MiHoYoCloud::CloudPipe**)Il2CppClass::FromTypeDefinitionIndex(CloudPipe_TypeDefinitionIndex)->GetStaticField(0xB1D0);
		}
		static ::System::Action_1<::Il2CppArray<::System::Byte>*>** StaticGet_OnReceiveData()
		{
			return (::System::Action_1<::Il2CppArray<::System::Byte>*>**)Il2CppClass::FromTypeDefinitionIndex(CloudPipe_TypeDefinitionIndex)->GetStaticField(0xB1D8);
		}
		// static const ::System::String* InvokeFunc; // 0x0
		// static const ::System::String* InvokeReturnFunc; // 0x0
		// static const ::System::String* WebFunc; // 0x0
		// static const ::System::String* pipeSalt; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_INIT_OFFSET))(this);
		}

		static ::System::Boolean Connect()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_CONNECT_OFFSET))();
		}

		static ::System::Void SdkReceiveCallback(::System::IntPtr pData, ::System::Int32 size)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_SDKRECEIVECALLBACK_OFFSET))(pData, size);
		}

		::System::Void SendData(::System::String* typeName, ::System::String* functionName, ::System::String* parameters, ::System::Int32 callbackIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_SENDDATA_OFFSET))(this, typeName, functionName, parameters, callbackIndex);
		}

		::System::Void SendParamData(::System::String* functionName, ::System::String* parameters, ::System::Int32 callbackIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_SENDPARAMDATA_OFFSET))(this, functionName, parameters, callbackIndex);
		}

		static ::System::Void OnGetPipeData(::System::String* dataString)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_ONGETPIPEDATA_OFFSET))(dataString);
		}

		static ::System::Void OnGetResponse(::System::Object* data)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_ONGETRESPONSE_OFFSET))(data);
		}

		static ::System::Void InvokeCallback(::System::Int32 ret, ::System::String* msg, ::System::String* data, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_INVOKECALLBACK_OFFSET))(ret, msg, data, index);
		}

		static ::System::String* GetString(::System::String* dataString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_GETSTRING_OFFSET))(dataString);
		}
	};
}
