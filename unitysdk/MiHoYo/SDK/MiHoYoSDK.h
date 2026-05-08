#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/MiHoYoBaseSDK.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Texture2D; }

#define MIHOYO_SDK_MIHOYOSDK_ADD_MIHOYOSDKLOGNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x19434C40)
#define MIHOYO_SDK_MIHOYOSDK_ADD_MIHOYOSDKSHOWTEXTNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x19434AE0)
#define MIHOYO_SDK_MIHOYOSDK_AWAKE_OFFSET UNITYSDK_OFFSET(0x19434A70)
#define MIHOYO_SDK_MIHOYOSDK_GAMECONTROLSEND_OFFSET UNITYSDK_OFFSET(0x19436E00)
#define MIHOYO_SDK_MIHOYOSDK_INIT_OFFSET UNITYSDK_OFFSET(0x19434F20)
#define MIHOYO_SDK_MIHOYOSDK_INSTANCE_OFFSET UNITYSDK_OFFSET(0x19433F60)
#define MIHOYO_SDK_MIHOYOSDK_INVOKERETURN_OFFSET UNITYSDK_OFFSET(0x194352F0)
#define MIHOYO_SDK_MIHOYOSDK_INVOKE_OFFSET UNITYSDK_OFFSET(0x19436180)
#define MIHOYO_SDK_MIHOYOSDK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x194349B0)
#define MIHOYO_SDK_MIHOYOSDK_ONGETASBPATH_OFFSET UNITYSDK_OFFSET(0x19434EC0)
#define MIHOYO_SDK_MIHOYOSDK_ONMIHOYOSDKLOGNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x19434E00)
#define MIHOYO_SDK_MIHOYOSDK_ONSHOWTEXTNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x19434BE0)
#define MIHOYO_SDK_MIHOYOSDK_READCONFIGINI_OFFSET UNITYSDK_OFFSET(0x19434460)
#define MIHOYO_SDK_MIHOYOSDK_REMOVE_MIHOYOSDKLOGNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x19434D20)
#define MIHOYO_SDK_MIHOYOSDK_REMOVE_MIHOYOSDKSHOWTEXTNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x19434B60)
#define MIHOYO_SDK_MIHOYOSDK_REPORTACTION_OFFSET UNITYSDK_OFFSET(0x19436980)
#define MIHOYO_SDK_MIHOYOSDK_REQUESTWATERMARKDATA_OFFSET UNITYSDK_OFFSET(0x19436C90)
#define MIHOYO_SDK_MIHOYOSDK_REQUESTWATERMARK_OFFSET UNITYSDK_OFFSET(0x19436B70)
#define MIHOYO_SDK_MIHOYOSDK_START_OFFSET UNITYSDK_OFFSET(0x19434A80)
#define MIHOYO_SDK_MIHOYOSDK_UPDATE_OFFSET UNITYSDK_OFFSET(0x19434A10)
#define MIHOYO_SDK_MIHOYOSDK__CCTOR_OFFSET UNITYSDK_OFFSET(0x19436F00)
#define MIHOYO_SDK_MIHOYOSDK__CTOR_OFFSET UNITYSDK_OFFSET(0x19436E60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDK_TypeDefinitionIndex = 35083;

	class MiHoYoSDK : public ::MiHoYo::SDK::MiHoYoBaseSDK
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters1()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDK_TypeDefinitionIndex)->GetStaticField(0x26860);
		}
		static ::MiHoYo::SDK::MiHoYoSDK** StaticGet__instance()
		{
			return (::MiHoYo::SDK::MiHoYoSDK**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDK_TypeDefinitionIndex)->GetStaticField(0x26868);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters3()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDK_TypeDefinitionIndex)->GetStaticField(0x26870);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters2()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDK_TypeDefinitionIndex)->GetStaticField(0x26878);
		}
		static ::System::Type** StaticGet_miHoYoDllType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDK_TypeDefinitionIndex)->GetStaticField(0x26880);
		}
		static ::System::Action_1<::System::String*>** StaticGet_MiHoYoSDKLogNotification()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDK_TypeDefinitionIndex)->GetStaticField(0x26888);
		}
		::System::Action_1<::System::String*>* MiHoYoSDKShowTextNotification; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::MiHoYoSDK* Instance()
		{
			return ((::MiHoYo::SDK::MiHoYoSDK*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_INSTANCE_OFFSET))();
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_ONDESTROY_OFFSET))(this);
		}

		static ::System::Void ReadConfigIni()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_READCONFIGINI_OFFSET))();
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_UPDATE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_START_OFFSET))(this);
		}

		::System::Void add_MiHoYoSDKShowTextNotification(::System::Action_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_ADD_MIHOYOSDKSHOWTEXTNOTIFICATION_OFFSET))(this, value);
		}

		::System::Void remove_MiHoYoSDKShowTextNotification(::System::Action_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_REMOVE_MIHOYOSDKSHOWTEXTNOTIFICATION_OFFSET))(this, value);
		}

		::System::Void OnShowTextNotification(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_ONSHOWTEXTNOTIFICATION_OFFSET))(this, msg);
		}

		static ::System::Void add_MiHoYoSDKLogNotification(::System::Action_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_ADD_MIHOYOSDKLOGNOTIFICATION_OFFSET))(value);
		}

		static ::System::Void remove_MiHoYoSDKLogNotification(::System::Action_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_REMOVE_MIHOYOSDKLOGNOTIFICATION_OFFSET))(value);
		}

		static ::System::Void OnMiHoYoSDKLogNotification(::System::String* msg)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_ONMIHOYOSDKLOGNOTIFICATION_OFFSET))(msg);
		}

		static ::System::String* OnGetAsbPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_ONGETASBPATH_OFFSET))();
		}

		::System::Void Init(::System::Action_1<::System::String*>* callback, ::System::Boolean gameDebug)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_INIT_OFFSET))(this, callback, gameDebug);
		}

		::System::String* InvokeReturn(::System::String* funcName, ::System::String* args)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_INVOKERETURN_OFFSET))(this, funcName, args);
		}

		::System::Void Invoke(::System::String* funcName, ::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_INVOKE_OFFSET))(this, funcName, args, callback);
		}

		::System::Void ReportAction(::System::Int32 actionId, ::System::String* actionName, ::System::String* cBody, ::System::String* level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_REPORTACTION_OFFSET))(this, actionId, actionName, cBody, level);
		}

		::System::Void RequestWatermark(::System::Int32 width, ::System::Int32 height, ::System::Int32 timeout, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_REQUESTWATERMARK_OFFSET))(this, width, height, timeout, callback);
		}

		::System::Void RequestWatermarkData(::System::Int32 width, ::System::Int32 height, ::System::Int32 timeout, ::System::Action_2<::System::Int32, ::Il2CppArray<::System::Byte>*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Action_2<::System::Int32, ::Il2CppArray<::System::Byte>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_REQUESTWATERMARKDATA_OFFSET))(this, width, height, timeout, callback);
		}

		::System::Int64 GameControlSend(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Int64(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_GAMECONTROLSEND_OFFSET))(this, data);
		}
	};
}
