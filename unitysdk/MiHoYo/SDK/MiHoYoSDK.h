#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/MiHoYoBaseSDK.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Texture2D; }

#define MIHOYO_SDK_MIHOYOSDK_ADD_MIHOYOSDKLOGNOTIFICATION_OFFSET UNITYSDK_OFFSET(0xB21D410)
#define MIHOYO_SDK_MIHOYOSDK_ADD_MIHOYOSDKSHOWTEXTNOTIFICATION_OFFSET UNITYSDK_OFFSET(0xB21D2F0)
#define MIHOYO_SDK_MIHOYOSDK_AWAKE_OFFSET UNITYSDK_OFFSET(0xB21D2B0)
#define MIHOYO_SDK_MIHOYOSDK_DESTROYALLUI_OFFSET UNITYSDK_OFFSET(0xB21FAC0)
#define MIHOYO_SDK_MIHOYOSDK_GAMECONTROLSEND_OFFSET UNITYSDK_OFFSET(0xB21FA60)
#define MIHOYO_SDK_MIHOYOSDK_INIT_OFFSET UNITYSDK_OFFSET(0xB21D690)
#define MIHOYO_SDK_MIHOYOSDK_INSTANCE_OFFSET UNITYSDK_OFFSET(0xB21C650)
#define MIHOYO_SDK_MIHOYOSDK_INVOKERETURN_OFFSET UNITYSDK_OFFSET(0xB21DC90)
#define MIHOYO_SDK_MIHOYOSDK_INVOKE_OFFSET UNITYSDK_OFFSET(0xB21ED50)
#define MIHOYO_SDK_MIHOYOSDK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB21D250)
#define MIHOYO_SDK_MIHOYOSDK_ONGETASBPATH_OFFSET UNITYSDK_OFFSET(0xB21D660)
#define MIHOYO_SDK_MIHOYOSDK_ONMIHOYOSDKLOGNOTIFICATION_OFFSET UNITYSDK_OFFSET(0xB21D5D0)
#define MIHOYO_SDK_MIHOYOSDK_ONSHOWTEXTNOTIFICATION_OFFSET UNITYSDK_OFFSET(0xB21D3F0)
#define MIHOYO_SDK_MIHOYOSDK_READCONFIGINI_OFFSET UNITYSDK_OFFSET(0xB21CC50)
#define MIHOYO_SDK_MIHOYOSDK_REMOVE_MIHOYOSDKLOGNOTIFICATION_OFFSET UNITYSDK_OFFSET(0xB21D4F0)
#define MIHOYO_SDK_MIHOYOSDK_REMOVE_MIHOYOSDKSHOWTEXTNOTIFICATION_OFFSET UNITYSDK_OFFSET(0xB21D370)
#define MIHOYO_SDK_MIHOYOSDK_REPORTACTION_OFFSET UNITYSDK_OFFSET(0xB21F620)
#define MIHOYO_SDK_MIHOYOSDK_REQUESTWATERMARKDATA_OFFSET UNITYSDK_OFFSET(0xB21F8D0)
#define MIHOYO_SDK_MIHOYOSDK_REQUESTWATERMARK_OFFSET UNITYSDK_OFFSET(0xB21F7E0)
#define MIHOYO_SDK_MIHOYOSDK_START_OFFSET UNITYSDK_OFFSET(0xB21D2C0)
#define MIHOYO_SDK_MIHOYOSDK_UPDATE_OFFSET UNITYSDK_OFFSET(0xB21D280)
#define MIHOYO_SDK_MIHOYOSDK__CCTOR_OFFSET UNITYSDK_OFFSET(0xB220030)
#define MIHOYO_SDK_MIHOYOSDK__CTOR_OFFSET UNITYSDK_OFFSET(0xB220010)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDK_TypeDefinitionIndex = 46717;

	class MiHoYoSDK : public ::MiHoYo::SDK::MiHoYoBaseSDK
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters3()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDK_TypeDefinitionIndex)->GetStaticField(0x52010);
		}
		static ::System::Type** StaticGet_miHoYoDllType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDK_TypeDefinitionIndex)->GetStaticField(0x52018);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters2()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDK_TypeDefinitionIndex)->GetStaticField(0x52020);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters1()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDK_TypeDefinitionIndex)->GetStaticField(0x52028);
		}
		static ::MiHoYo::SDK::MiHoYoSDK** StaticGet__instance()
		{
			return (::MiHoYo::SDK::MiHoYoSDK**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDK_TypeDefinitionIndex)->GetStaticField(0x52030);
		}
		static ::System::Action_1<::System::String*>** StaticGet_MiHoYoSDKLogNotification()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDK_TypeDefinitionIndex)->GetStaticField(0x52038);
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

		::System::Void add_MiHoYoSDKShowTextNotification(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_ADD_MIHOYOSDKSHOWTEXTNOTIFICATION_OFFSET))(this, a1);
		}

		::System::Void remove_MiHoYoSDKShowTextNotification(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_REMOVE_MIHOYOSDKSHOWTEXTNOTIFICATION_OFFSET))(this, a1);
		}

		::System::Void OnShowTextNotification(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_ONSHOWTEXTNOTIFICATION_OFFSET))(this, a1);
		}

		static ::System::Void add_MiHoYoSDKLogNotification(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_ADD_MIHOYOSDKLOGNOTIFICATION_OFFSET))(a1);
		}

		static ::System::Void remove_MiHoYoSDKLogNotification(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_REMOVE_MIHOYOSDKLOGNOTIFICATION_OFFSET))(a1);
		}

		static ::System::Void OnMiHoYoSDKLogNotification(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_ONMIHOYOSDKLOGNOTIFICATION_OFFSET))(a1);
		}

		static ::System::String* OnGetAsbPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_ONGETASBPATH_OFFSET))();
		}

		::System::Void Init(::System::Action_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_INIT_OFFSET))(this, a1, a2);
		}

		::System::String* InvokeReturn(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_INVOKERETURN_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::String* a1, ::System::String* a2, ::System::Action_1<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ReportAction(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_REPORTACTION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RequestWatermark(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_REQUESTWATERMARK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RequestWatermarkData(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Action_2<::System::Int32, ::Il2CppArray<::System::Byte>*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Action_2<::System::Int32, ::Il2CppArray<::System::Byte>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_REQUESTWATERMARKDATA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int64 GameControlSend(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_GAMECONTROLSEND_OFFSET))(this, a1);
		}

		::System::Void DestroyAllUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_DESTROYALLUI_OFFSET))(this);
		}
	};
}
