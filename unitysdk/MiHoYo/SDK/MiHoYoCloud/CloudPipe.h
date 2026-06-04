#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CloudGame::MailBox { class Mailbox; }
namespace CloudGame::MailBox { class Mailbox_ReceiveCallbackHandler; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_CONNECT_OFFSET UNITYSDK_OFFSET(0x1835F390)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_GETSTRING_OFFSET UNITYSDK_OFFSET(0x183603D0)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_INIT_OFFSET UNITYSDK_OFFSET(0x1835F660)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_INVOKECALLBACK_OFFSET UNITYSDK_OFFSET(0x1835EFD0)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_ONGETPIPEDATA_OFFSET UNITYSDK_OFFSET(0x1835F970)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_ONGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1835FB20)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_SDKRECEIVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1835F1C0)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_SENDDATA_OFFSET UNITYSDK_OFFSET(0x1835F670)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_SENDPARAMDATA_OFFSET UNITYSDK_OFFSET(0x1835F700)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18360440)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1835F2D0)

namespace MiHoYo::SDK::MiHoYoCloud
{
	inline static constexpr unsigned int CloudPipe_TypeDefinitionIndex = 8792;

	class CloudPipe : public ::System::Object
	{
	public:
		static ::CloudGame::MailBox::Mailbox** StaticGet_mailbox()
		{
			return (::CloudGame::MailBox::Mailbox**)Il2CppClass::FromTypeDefinitionIndex(CloudPipe_TypeDefinitionIndex)->GetStaticField(0x107F0);
		}
		static ::MiHoYo::SDK::MiHoYoCloud::CloudPipe** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::MiHoYoCloud::CloudPipe**)Il2CppClass::FromTypeDefinitionIndex(CloudPipe_TypeDefinitionIndex)->GetStaticField(0x107F8);
		}
		static ::System::Action_1<::Il2CppArray<::System::Byte>*>** StaticGet_OnReceiveData()
		{
			return (::System::Action_1<::Il2CppArray<::System::Byte>*>**)Il2CppClass::FromTypeDefinitionIndex(CloudPipe_TypeDefinitionIndex)->GetStaticField(0x10800);
		}
		static ::CloudGame::MailBox::Mailbox_ReceiveCallbackHandler** StaticGet_receiveCallback()
		{
			return (::CloudGame::MailBox::Mailbox_ReceiveCallbackHandler**)Il2CppClass::FromTypeDefinitionIndex(CloudPipe_TypeDefinitionIndex)->GetStaticField(0x10808);
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

		static ::System::Void SdkReceiveCallback(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_SDKRECEIVECALLBACK_OFFSET))(a1, a2);
		}

		::System::Void SendData(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_SENDDATA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SendParamData(::System::String* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_SENDPARAMDATA_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void OnGetPipeData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_ONGETPIPEDATA_OFFSET))(a1);
		}

		static ::System::Void OnGetResponse(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_ONGETRESPONSE_OFFSET))(a1);
		}

		static ::System::Void InvokeCallback(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_INVOKECALLBACK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* GetString(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE_GETSTRING_OFFSET))(a1);
		}
	};
}
