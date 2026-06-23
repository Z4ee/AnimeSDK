#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CloudGame/MailBox/GameControl/Gyroscope.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/WeLing/SDK/GyroType.h"

namespace MiHoYo::SDK { class MiHoYoBaseSDK_AutoTestResult; }
namespace MiHoYo::SDK { class MiHoYoBaseSDK_CustomAutoTestInfo; }
namespace MiHoYo::SDK { class MiHoYoBaseSDK_CustomAutoTestUniqueInfo; }
namespace MiHoYo::SDK { class MiHoYoBaseSDK_LoadAsbDelegate; }
namespace MiHoYo::SDK { class MiHoYoSDK; }
namespace MiHoYo::SDK { class SDKDelegate_LoadAssetDelegate; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UI { class InputField; }

#define MIHOYO_SDK_MIHOYOBASESDK_BASEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1CBA3230)
#define MIHOYO_SDK_MIHOYOBASESDK_CHECKPLATFORM_OFFSET UNITYSDK_OFFSET(0x1CBA4030)
#define MIHOYO_SDK_MIHOYOBASESDK_DESTORY_OFFSET UNITYSDK_OFFSET(0x1CBA3E90)
#define MIHOYO_SDK_MIHOYOBASESDK_DESTROYALLUI_OFFSET UNITYSDK_OFFSET(0x1CBA3EA0)
#define MIHOYO_SDK_MIHOYOBASESDK_ENABLEAUTOTEST_OFFSET UNITYSDK_OFFSET(0x1CBA4170)
#define MIHOYO_SDK_MIHOYOBASESDK_FINDINIGNOREMODULELIST_OFFSET UNITYSDK_OFFSET(0x1CBA49C0)
#define MIHOYO_SDK_MIHOYOBASESDK_FINDINMOCKFUNCLIST_OFFSET UNITYSDK_OFFSET(0x1CBA48B0)
#define MIHOYO_SDK_MIHOYOBASESDK_GAMECONTROLSEND_OFFSET UNITYSDK_OFFSET(0x1CBA4150)
#define MIHOYO_SDK_MIHOYOBASESDK_GET_RUNTIMEFONT_OFFSET UNITYSDK_OFFSET(0x1CBA3DD0)
#define MIHOYO_SDK_MIHOYOBASESDK_GET_UITRACKING_OFFSET UNITYSDK_OFFSET(0x1CBA3DF0)
#define MIHOYO_SDK_MIHOYOBASESDK_INIT_OFFSET UNITYSDK_OFFSET(0x1CBA3E80)
#define MIHOYO_SDK_MIHOYOBASESDK_INVOKERETURN_OFFSET UNITYSDK_OFFSET(0x1CBA3EB0)
#define MIHOYO_SDK_MIHOYOBASESDK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CBA3EF0)
#define MIHOYO_SDK_MIHOYOBASESDK_ISCURFUNCAUTOTEST_OFFSET UNITYSDK_OFFSET(0x1CBA4790)
#define MIHOYO_SDK_MIHOYOBASESDK_ISEDITOR_OFFSET UNITYSDK_OFFSET(0x1CBA4140)
#define MIHOYO_SDK_MIHOYOBASESDK_ISENABLEDCUSTOMAUTOTEST_OFFSET UNITYSDK_OFFSET(0x1CBA4750)
#define MIHOYO_SDK_MIHOYOBASESDK_ISEXISTS_OFFSET UNITYSDK_OFFSET(0x1CBA3AA0)
#define MIHOYO_SDK_MIHOYOBASESDK_ONADDINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x1CBA3D70)
#define MIHOYO_SDK_MIHOYOBASESDK_ONDOWNLOADNOTIFICATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CBA3D10)
#define MIHOYO_SDK_MIHOYOBASESDK_ONGETRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x1CBA40E0)
#define MIHOYO_SDK_MIHOYOBASESDK_ONINVOKE_OFFSET UNITYSDK_OFFSET(0x1CBA3F00)
#define MIHOYO_SDK_MIHOYOBASESDK_ONNOTIFICATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CBA3CB0)
#define MIHOYO_SDK_MIHOYOBASESDK_REGISTERINPUTSYSTEM_OFFSET UNITYSDK_OFFSET(0x1CBA3860)
#define MIHOYO_SDK_MIHOYOBASESDK_REPORTACTION_OFFSET UNITYSDK_OFFSET(0x1CBA40B0)
#define MIHOYO_SDK_MIHOYOBASESDK_REQUESTWATERMARKDATA_OFFSET UNITYSDK_OFFSET(0x1CBA40D0)
#define MIHOYO_SDK_MIHOYOBASESDK_REQUESTWATERMARK_OFFSET UNITYSDK_OFFSET(0x1CBA40C0)
#define MIHOYO_SDK_MIHOYOBASESDK_SETCLOUDPLAT_OFFSET UNITYSDK_OFFSET(0x1CBA3BF0)
#define MIHOYO_SDK_MIHOYOBASESDK_SETMIHOYOCLOUDPLAT_OFFSET UNITYSDK_OFFSET(0x1CBA3C50)
#define MIHOYO_SDK_MIHOYOBASESDK_SET_RUNTIMEFONT_OFFSET UNITYSDK_OFFSET(0x1CBA3DE0)
#define MIHOYO_SDK_MIHOYOBASESDK_SET_UITRACKING_OFFSET UNITYSDK_OFFSET(0x1CBA3E00)
#define MIHOYO_SDK_MIHOYOBASESDK_TOCUSTOMAUTOTESTUNIQUEINFO_OFFSET UNITYSDK_OFFSET(0x1CBA42E0)
#define MIHOYO_SDK_MIHOYOBASESDK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBA4C30)
#define MIHOYO_SDK_MIHOYOBASESDK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA4BE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoBaseSDK_TypeDefinitionIndex = 36639;

	class MiHoYoBaseSDK : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Action_1<::CloudGame::MailBox::GameControl::Gyroscope>** StaticGet_OnGyroscope()
		{
			return (::System::Action_1<::CloudGame::MailBox::GameControl::Gyroscope>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoBaseSDK_TypeDefinitionIndex)->GetStaticField(0x27F20);
		}
		static ::System::Action_1<::System::String*>** StaticGet_OnInvokeReturnEnd()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoBaseSDK_TypeDefinitionIndex)->GetStaticField(0x27F28);
		}
		static ::System::Action_1<::Il2CppArray<::System::Byte>*>** StaticGet_OnGameControlReceive()
		{
			return (::System::Action_1<::Il2CppArray<::System::Byte>*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoBaseSDK_TypeDefinitionIndex)->GetStaticField(0x27F30);
		}
		static ::MiHoYo::SDK::MiHoYoBaseSDK_LoadAsbDelegate** StaticGet_LoadAsb()
		{
			return (::MiHoYo::SDK::MiHoYoBaseSDK_LoadAsbDelegate**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoBaseSDK_TypeDefinitionIndex)->GetStaticField(0x27F38);
		}
		static ::System::String** StaticGet_asbPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoBaseSDK_TypeDefinitionIndex)->GetStaticField(0x27F40);
		}
		static ::System::Action_1<::System::String*>** StaticGet_OnInvokeReturnStart()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoBaseSDK_TypeDefinitionIndex)->GetStaticField(0x27F48);
		}
		static ::MiHoYo::SDK::SDKDelegate_LoadAssetDelegate** StaticGet_LoadResource()
		{
			return (::MiHoYo::SDK::SDKDelegate_LoadAssetDelegate**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoBaseSDK_TypeDefinitionIndex)->GetStaticField(0x27F50);
		}
		static ::System::String** StaticGet_resourcePath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoBaseSDK_TypeDefinitionIndex)->GetStaticField(0x27F58);
		}
		static ::MiHoYo::SDK::MiHoYoSDK** StaticGet__baseInstance()
		{
			return (::MiHoYo::SDK::MiHoYoSDK**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoBaseSDK_TypeDefinitionIndex)->GetStaticField(0x27F60);
		}
		static ::System::Action_2<::WeLing::SDK::GyroType, ::Il2CppArray<::System::Single>*>** StaticGet_OnGyroEvent()
		{
			return (::System::Action_2<::WeLing::SDK::GyroType, ::Il2CppArray<::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoBaseSDK_TypeDefinitionIndex)->GetStaticField(0x27F68);
		}
		static ::System::Boolean* StaticGet_isMiHoYoCloudPlat()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoBaseSDK_TypeDefinitionIndex)->GetStaticField(0x86B0);
		}
		static ::System::Boolean* StaticGet_isCloudPlat()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoBaseSDK_TypeDefinitionIndex)->GetStaticField(0x86B1);
		}
		static ::System::Boolean* StaticGet_isAllAutoTest()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoBaseSDK_TypeDefinitionIndex)->GetStaticField(0x86B2);
		}
		// static const ::System::String* CanvasName; // 0x0
		::System::Action_1<::System::String*>* MiHoYoSDKNotification; // 0x18
		::System::Action_1<::System::String*>* MiHoYoSDKDownloadNotification; // 0x20
		::System::Action_1<::UnityEngine::UI::InputField*>* MiHoYoSDKAddInputField; // 0x28
		::System::Boolean m_bEnableRuntimeFont; // 0x30
		::System::Boolean m_bEnableUITracking; // 0x31
		::MiHoYo::SDK::MiHoYoBaseSDK_CustomAutoTestUniqueInfo* m_customeAutoTestInfo; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::MiHoYoSDK* BaseInstance()
		{
			return ((::MiHoYo::SDK::MiHoYoSDK*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_BASEINSTANCE_OFFSET))();
		}

		static ::System::Boolean IsExists()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_ISEXISTS_OFFSET))();
		}

		static ::System::Void SetCloudPlat(::System::Boolean flag)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_SETCLOUDPLAT_OFFSET))(flag);
		}

		static ::System::Void SetMiHoYoCloudPlat(::System::Boolean flag)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_SETMIHOYOCLOUDPLAT_OFFSET))(flag);
		}

		::System::Void OnNotificationCallback(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_ONNOTIFICATIONCALLBACK_OFFSET))(this, message);
		}

		::System::Void OnDownloadNotificationCallback(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_ONDOWNLOADNOTIFICATIONCALLBACK_OFFSET))(this, message);
		}

		::System::Void OnAddInputField(::UnityEngine::UI::InputField* inputField)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_ONADDINPUTFIELD_OFFSET))(this, inputField);
		}

		::System::Boolean get_RuntimeFont()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_GET_RUNTIMEFONT_OFFSET))(this);
		}

		::System::Void set_RuntimeFont(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_SET_RUNTIMEFONT_OFFSET))(this, value);
		}

		::System::Boolean get_UITracking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_GET_UITRACKING_OFFSET))(this);
		}

		::System::Void set_UITracking(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_SET_UITRACKING_OFFSET))(this, value);
		}

		::System::Void Init(::System::Action_1<::System::String*>* callback, ::System::Boolean gameDebug)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_INIT_OFFSET))(this, callback, gameDebug);
		}

		::System::Void Destory(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_DESTORY_OFFSET))(this, callback);
		}

		::System::Void DestroyAllUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_DESTROYALLUI_OFFSET))(this);
		}

		::System::String* InvokeReturn(::System::String* funcName, ::System::String* args)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_INVOKERETURN_OFFSET))(this, funcName, args);
		}

		::System::Void Invoke(::System::String* funcName, ::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_INVOKE_OFFSET))(this, funcName, args, callback);
		}

		::System::Void OnInvoke(::System::String* funcName, ::System::String* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_ONINVOKE_OFFSET))(this, funcName, args);
		}

		::System::Void CheckPlatform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_CHECKPLATFORM_OFFSET))(this);
		}

		::System::Void ReportAction(::System::Int32 actionId, ::System::String* actionName, ::System::String* cBody, ::System::String* level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_REPORTACTION_OFFSET))(this, actionId, actionName, cBody, level);
		}

		::System::Void RequestWatermark(::System::Int32 width, ::System::Int32 height, ::System::Int32 timeout, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_REQUESTWATERMARK_OFFSET))(this, width, height, timeout, callback);
		}

		::System::Void RequestWatermarkData(::System::Int32 width, ::System::Int32 height, ::System::Int32 timeout, ::System::Action_2<::System::Int32, ::Il2CppArray<::System::Byte>*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Action_2<::System::Int32, ::Il2CppArray<::System::Byte>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_REQUESTWATERMARKDATA_OFFSET))(this, width, height, timeout, callback);
		}

		static ::System::String* OnGetResourcePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_ONGETRESOURCEPATH_OFFSET))();
		}

		static ::System::Boolean IsEditor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_ISEDITOR_OFFSET))();
		}

		::System::Int64 GameControlSend(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Int64(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_GAMECONTROLSEND_OFFSET))(this, data);
		}

		::System::Void EnableAutoTest(::System::String* strArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_ENABLEAUTOTEST_OFFSET))(this, strArgs);
		}

		::MiHoYo::SDK::MiHoYoBaseSDK_AutoTestResult* IsCurFuncAutoTest(::System::String* strFuncName, ::System::String* strDefaultResponse)
		{
			return ((::MiHoYo::SDK::MiHoYoBaseSDK_AutoTestResult*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_ISCURFUNCAUTOTEST_OFFSET))(this, strFuncName, strDefaultResponse);
		}

		::System::Boolean IsEnabledCustomAutoTest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_ISENABLEDCUSTOMAUTOTEST_OFFSET))(this);
		}

		::MiHoYo::SDK::MiHoYoBaseSDK_AutoTestResult* FindInMockFuncList(::System::String* strFuncName)
		{
			return ((::MiHoYo::SDK::MiHoYoBaseSDK_AutoTestResult*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_FINDINMOCKFUNCLIST_OFFSET))(this, strFuncName);
		}

		::MiHoYo::SDK::MiHoYoBaseSDK_AutoTestResult* FindInIgnoreModuleList(::System::String* strFuncName, ::System::String* strDefaultResponse)
		{
			return ((::MiHoYo::SDK::MiHoYoBaseSDK_AutoTestResult*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_FINDINIGNOREMODULELIST_OFFSET))(this, strFuncName, strDefaultResponse);
		}

		::MiHoYo::SDK::MiHoYoBaseSDK_CustomAutoTestUniqueInfo* ToCustomAutoTestUniqueInfo(::MiHoYo::SDK::MiHoYoBaseSDK_CustomAutoTestInfo* info)
		{
			return ((::MiHoYo::SDK::MiHoYoBaseSDK_CustomAutoTestUniqueInfo*(*)(::PVOID, ::MiHoYo::SDK::MiHoYoBaseSDK_CustomAutoTestInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_TOCUSTOMAUTOTESTUNIQUEINFO_OFFSET))(this, info);
		}

		static ::System::Void RegisterInputSystem()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_REGISTERINPUTSYSTEM_OFFSET))();
		}
	};
}
