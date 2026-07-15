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

#define MIHOYO_SDK_MIHOYOBASESDK_BASEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1AD0DA00)
#define MIHOYO_SDK_MIHOYOBASESDK_CHECKPLATFORM_OFFSET UNITYSDK_OFFSET(0x1AD0F530)
#define MIHOYO_SDK_MIHOYOBASESDK_DESTORY_OFFSET UNITYSDK_OFFSET(0x1AD0E210)
#define MIHOYO_SDK_MIHOYOBASESDK_DESTROYALLUI_OFFSET UNITYSDK_OFFSET(0x1AD0E290)
#define MIHOYO_SDK_MIHOYOBASESDK_ENABLEAUTOTEST_OFFSET UNITYSDK_OFFSET(0x1AD0F9D0)
#define MIHOYO_SDK_MIHOYOBASESDK_FETCHDIRECTWATERMARKIMAGEBYTES_OFFSET UNITYSDK_OFFSET(0x1AD0F890)
#define MIHOYO_SDK_MIHOYOBASESDK_FETCHDIRECTWATERMARKIMAGE_OFFSET UNITYSDK_OFFSET(0x1AD0F810)
#define MIHOYO_SDK_MIHOYOBASESDK_FINDINIGNOREMODULELIST_OFFSET UNITYSDK_OFFSET(0x1AD10270)
#define MIHOYO_SDK_MIHOYOBASESDK_FINDINMOCKFUNCLIST_OFFSET UNITYSDK_OFFSET(0x1AD10170)
#define MIHOYO_SDK_MIHOYOBASESDK_GAMECONTROLSEND_OFFSET UNITYSDK_OFFSET(0x1AD0F950)
#define MIHOYO_SDK_MIHOYOBASESDK_GET_RUNTIMEFONT_OFFSET UNITYSDK_OFFSET(0x1AD0E0E0)
#define MIHOYO_SDK_MIHOYOBASESDK_GET_UITRACKING_OFFSET UNITYSDK_OFFSET(0x1AD0E100)
#define MIHOYO_SDK_MIHOYOBASESDK_INIT_OFFSET UNITYSDK_OFFSET(0x1AD0E190)
#define MIHOYO_SDK_MIHOYOBASESDK_INVOKERETURN_OFFSET UNITYSDK_OFFSET(0x1AD0E310)
#define MIHOYO_SDK_MIHOYOBASESDK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AD0E390)
#define MIHOYO_SDK_MIHOYOBASESDK_ISCURFUNCAUTOTEST_OFFSET UNITYSDK_OFFSET(0x1AD10080)
#define MIHOYO_SDK_MIHOYOBASESDK_ISEDITOR_OFFSET UNITYSDK_OFFSET(0x1AD0F940)
#define MIHOYO_SDK_MIHOYOBASESDK_ISENABLEDCUSTOMAUTOTEST_OFFSET UNITYSDK_OFFSET(0x1AD10040)
#define MIHOYO_SDK_MIHOYOBASESDK_ISEXISTS_OFFSET UNITYSDK_OFFSET(0x1AD0DFE0)
#define MIHOYO_SDK_MIHOYOBASESDK_ONADDINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x1AD0E0C0)
#define MIHOYO_SDK_MIHOYOBASESDK_ONDOWNLOADNOTIFICATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1AD0E0A0)
#define MIHOYO_SDK_MIHOYOBASESDK_ONGETRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x1AD0F910)
#define MIHOYO_SDK_MIHOYOBASESDK_ONINVOKE_OFFSET UNITYSDK_OFFSET(0x1AD0E410)
#define MIHOYO_SDK_MIHOYOBASESDK_ONNOTIFICATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1ACF2730)
#define MIHOYO_SDK_MIHOYOBASESDK_REGISTERINPUTSYSTEM_OFFSET UNITYSDK_OFFSET(0x1AD0DDE0)
#define MIHOYO_SDK_MIHOYOBASESDK_REPORTACTION_OFFSET UNITYSDK_OFFSET(0x1AD0F690)
#define MIHOYO_SDK_MIHOYOBASESDK_REQUESTWATERMARKDATA_OFFSET UNITYSDK_OFFSET(0x1AD0F790)
#define MIHOYO_SDK_MIHOYOBASESDK_REQUESTWATERMARK_OFFSET UNITYSDK_OFFSET(0x1AD0F710)
#define MIHOYO_SDK_MIHOYOBASESDK_SETCLOUDPLAT_OFFSET UNITYSDK_OFFSET(0x1AD0E040)
#define MIHOYO_SDK_MIHOYOBASESDK_SETMIHOYOCLOUDPLAT_OFFSET UNITYSDK_OFFSET(0x1AD0E070)
#define MIHOYO_SDK_MIHOYOBASESDK_SET_RUNTIMEFONT_OFFSET UNITYSDK_OFFSET(0x1AD0E0F0)
#define MIHOYO_SDK_MIHOYOBASESDK_SET_UITRACKING_OFFSET UNITYSDK_OFFSET(0x1AD0E110)
#define MIHOYO_SDK_MIHOYOBASESDK_TOCUSTOMAUTOTESTUNIQUEINFO_OFFSET UNITYSDK_OFFSET(0x1AD0FB50)
#define MIHOYO_SDK_MIHOYOBASESDK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD10480)
#define MIHOYO_SDK_MIHOYOBASESDK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD10470)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoBaseSDK_TypeDefinitionIndex = 44522;

	class MiHoYoBaseSDK : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Action_1<::System::String*>** StaticGet_OnInvokeReturnStart()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoBaseSDK_TypeDefinitionIndex)->GetStaticField(0xAE90);
		}
		static ::System::String** StaticGet_asbPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoBaseSDK_TypeDefinitionIndex)->GetStaticField(0xAE98);
		}
		static ::System::String** StaticGet_resourcePath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoBaseSDK_TypeDefinitionIndex)->GetStaticField(0xAEA0);
		}
		static ::System::Action_1<::System::String*>** StaticGet_OnInvokeReturnEnd()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoBaseSDK_TypeDefinitionIndex)->GetStaticField(0xAEA8);
		}
		static ::MiHoYo::SDK::MiHoYoSDK** StaticGet__baseInstance()
		{
			return (::MiHoYo::SDK::MiHoYoSDK**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoBaseSDK_TypeDefinitionIndex)->GetStaticField(0xAEB0);
		}
		static ::MiHoYo::SDK::SDKDelegate_LoadAssetDelegate** StaticGet_LoadResource()
		{
			return (::MiHoYo::SDK::SDKDelegate_LoadAssetDelegate**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoBaseSDK_TypeDefinitionIndex)->GetStaticField(0xAEB8);
		}
		static ::System::Action_2<::WeLing::SDK::GyroType, ::Il2CppArray<::System::Single>*>** StaticGet_OnGyroEvent()
		{
			return (::System::Action_2<::WeLing::SDK::GyroType, ::Il2CppArray<::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoBaseSDK_TypeDefinitionIndex)->GetStaticField(0xAEC0);
		}
		static ::System::Action_1<::CloudGame::MailBox::GameControl::Gyroscope>** StaticGet_OnGyroscope()
		{
			return (::System::Action_1<::CloudGame::MailBox::GameControl::Gyroscope>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoBaseSDK_TypeDefinitionIndex)->GetStaticField(0xAEC8);
		}
		static ::MiHoYo::SDK::MiHoYoBaseSDK_LoadAsbDelegate** StaticGet_LoadAsb()
		{
			return (::MiHoYo::SDK::MiHoYoBaseSDK_LoadAsbDelegate**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoBaseSDK_TypeDefinitionIndex)->GetStaticField(0xAED0);
		}
		static ::System::Action_1<::Il2CppArray<::System::Byte>*>** StaticGet_OnGameControlReceive()
		{
			return (::System::Action_1<::Il2CppArray<::System::Byte>*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoBaseSDK_TypeDefinitionIndex)->GetStaticField(0xAED8);
		}
		static ::System::Boolean* StaticGet_isAllAutoTest()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoBaseSDK_TypeDefinitionIndex)->GetStaticField(0x4510);
		}
		static ::System::Boolean* StaticGet_isCloudPlat()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoBaseSDK_TypeDefinitionIndex)->GetStaticField(0x4511);
		}
		static ::System::Boolean* StaticGet_isMiHoYoCloudPlat()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoBaseSDK_TypeDefinitionIndex)->GetStaticField(0x4512);
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

		static ::System::Void SetCloudPlat(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_SETCLOUDPLAT_OFFSET))(a1);
		}

		static ::System::Void SetMiHoYoCloudPlat(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_SETMIHOYOCLOUDPLAT_OFFSET))(a1);
		}

		::System::Void OnNotificationCallback(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_ONNOTIFICATIONCALLBACK_OFFSET))(this, a1);
		}

		::System::Void OnDownloadNotificationCallback(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_ONDOWNLOADNOTIFICATIONCALLBACK_OFFSET))(this, a1);
		}

		::System::Void OnAddInputField(::UnityEngine::UI::InputField* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_ONADDINPUTFIELD_OFFSET))(this, a1);
		}

		::System::Boolean get_RuntimeFont()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_GET_RUNTIMEFONT_OFFSET))(this);
		}

		::System::Void set_RuntimeFont(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_SET_RUNTIMEFONT_OFFSET))(this, a1);
		}

		::System::Boolean get_UITracking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_GET_UITRACKING_OFFSET))(this);
		}

		::System::Void set_UITracking(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_SET_UITRACKING_OFFSET))(this, a1);
		}

		::System::Void Init(::System::Action_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Destory(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_DESTORY_OFFSET))(this, a1);
		}

		::System::Void DestroyAllUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_DESTROYALLUI_OFFSET))(this);
		}

		::System::String* InvokeReturn(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_INVOKERETURN_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::String* a1, ::System::String* a2, ::System::Action_1<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnInvoke(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_ONINVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void CheckPlatform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_CHECKPLATFORM_OFFSET))(this);
		}

		::System::Void ReportAction(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_REPORTACTION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RequestWatermark(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_REQUESTWATERMARK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RequestWatermarkData(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Action_2<::System::Int32, ::Il2CppArray<::System::Byte>*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Action_2<::System::Int32, ::Il2CppArray<::System::Byte>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_REQUESTWATERMARKDATA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FetchDirectWatermarkImage(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_FETCHDIRECTWATERMARKIMAGE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FetchDirectWatermarkImageBytes(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Action_2<::System::Int32, ::Il2CppArray<::System::Byte>*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Action_2<::System::Int32, ::Il2CppArray<::System::Byte>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_FETCHDIRECTWATERMARKIMAGEBYTES_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::String* OnGetResourcePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_ONGETRESOURCEPATH_OFFSET))();
		}

		static ::System::Boolean IsEditor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_ISEDITOR_OFFSET))();
		}

		::System::Int64 GameControlSend(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_GAMECONTROLSEND_OFFSET))(this, a1);
		}

		::System::Void EnableAutoTest(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_ENABLEAUTOTEST_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::MiHoYoBaseSDK_AutoTestResult* IsCurFuncAutoTest(::System::String* a1, ::System::String* a2)
		{
			return ((::MiHoYo::SDK::MiHoYoBaseSDK_AutoTestResult*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_ISCURFUNCAUTOTEST_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsEnabledCustomAutoTest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_ISENABLEDCUSTOMAUTOTEST_OFFSET))(this);
		}

		::MiHoYo::SDK::MiHoYoBaseSDK_AutoTestResult* FindInMockFuncList(::System::String* a1)
		{
			return ((::MiHoYo::SDK::MiHoYoBaseSDK_AutoTestResult*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_FINDINMOCKFUNCLIST_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::MiHoYoBaseSDK_AutoTestResult* FindInIgnoreModuleList(::System::String* a1, ::System::String* a2)
		{
			return ((::MiHoYo::SDK::MiHoYoBaseSDK_AutoTestResult*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_FINDINIGNOREMODULELIST_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::MiHoYoBaseSDK_CustomAutoTestUniqueInfo* ToCustomAutoTestUniqueInfo(::MiHoYo::SDK::MiHoYoBaseSDK_CustomAutoTestInfo* a1)
		{
			return ((::MiHoYo::SDK::MiHoYoBaseSDK_CustomAutoTestUniqueInfo*(*)(::PVOID, ::MiHoYo::SDK::MiHoYoBaseSDK_CustomAutoTestInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_TOCUSTOMAUTOTESTUNIQUEINFO_OFFSET))(this, a1);
		}

		static ::System::Void RegisterInputSystem()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_REGISTERINPUTSYSTEM_OFFSET))();
		}
	};
}
