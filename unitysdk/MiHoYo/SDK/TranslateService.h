#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class BabelfishClient; }
namespace MiHoYo::SDK { class ChatMessage; }
namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_TRANSLATESERVICE_ADDMESSAGE_OFFSET UNITYSDK_OFFSET(0xB2B8700)
#define MIHOYO_SDK_TRANSLATESERVICE_CALLBACKTRANSLATERESULT_OFFSET UNITYSDK_OFFSET(0xB2BB1F0)
#define MIHOYO_SDK_TRANSLATESERVICE_CHECKINITIALIZED_OFFSET UNITYSDK_OFFSET(0xB2BA4F0)
#define MIHOYO_SDK_TRANSLATESERVICE_CLEARCONTEXT_OFFSET UNITYSDK_OFFSET(0xB2B9F00)
#define MIHOYO_SDK_TRANSLATESERVICE_GETCONFIGURL_OFFSET UNITYSDK_OFFSET(0xB2BA290)
#define MIHOYO_SDK_TRANSLATESERVICE_GETGAMEBIZ_OFFSET UNITYSDK_OFFSET(0xB2BA190)
#define MIHOYO_SDK_TRANSLATESERVICE_GETREGION_OFFSET UNITYSDK_OFFSET(0xB2BA210)
#define MIHOYO_SDK_TRANSLATESERVICE_GETTRANSLATEURL_OFFSET UNITYSDK_OFFSET(0xB2BA3C0)
#define MIHOYO_SDK_TRANSLATESERVICE_INIT_OFFSET UNITYSDK_OFFSET(0xB2B75F0)
#define MIHOYO_SDK_TRANSLATESERVICE_PARSECHATMESSAGE_OFFSET UNITYSDK_OFFSET(0xB2BA550)
#define MIHOYO_SDK_TRANSLATESERVICE_SETCONTEXT_OFFSET UNITYSDK_OFFSET(0xB2B8070)
#define MIHOYO_SDK_TRANSLATESERVICE_TRANSLATE_OFFSET UNITYSDK_OFFSET(0xB2B9770)
#define MIHOYO_SDK_TRANSLATESERVICE_VALIDATEMESSAGE_OFFSET UNITYSDK_OFFSET(0xB2BB120)
#define MIHOYO_SDK_TRANSLATESERVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2BBD40)
#define MIHOYO_SDK_TRANSLATESERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xB2BBD00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TranslateService_TypeDefinitionIndex = 47042;

	class TranslateService : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::TranslateService** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::TranslateService**)Il2CppClass::FromTypeDefinitionIndex(TranslateService_TypeDefinitionIndex)->GetStaticField(0x5B5D0);
		}
		// static const ::System::String* DEFAULT_CONFIG_URL; // 0x0
		// static const ::System::String* DEFAULT_TRANSLATE_URL; // 0x0
		// static const ::System::String* LOG_TAG; // 0x0
		// static const ::System::String* K_SCENE_ID; // 0x0
		// static const ::System::String* K_MESSAGES; // 0x0
		// static const ::System::String* K_UID; // 0x0
		// static const ::System::String* K_TIME; // 0x0
		// static const ::System::String* K_UID_TIME_MD5; // 0x0
		// static const ::System::String* K_SPEAKER_NAME; // 0x0
		// static const ::System::String* K_IS_NPC; // 0x0
		// static const ::System::String* K_CONTENT; // 0x0
		// static const ::System::String* K_LANGUAGE; // 0x0
		// static const ::System::String* K_TARGET_LANGUAGE; // 0x0
		// static const ::System::String* K_AUTH_KEY; // 0x0
		// static const ::System::String* K_AUTH_KEY_VER; // 0x0
		// static const ::System::String* K_RESULT; // 0x0
		// static const ::System::String* K_MAX_CONTEXT_SIZE; // 0x0
		// static const ::System::String* K_TIMEOUT; // 0x0
		// static const ::System::String* K_ITEM_ID; // 0x0
		// static const ::System::String* K_TEXT; // 0x0
		// static const ::System::String* K_TRANSLATION; // 0x0
		// static const ::System::String* K_DETECTED_SOURCE_LANGUAGE; // 0x0
		// static const ::System::String* K_ORIGINAL; // 0x0
		// static const ::System::String* K_TRANSLATED; // 0x0
		// static const ::System::String* K_SOURCE_LANG; // 0x0
		// static const ::System::String* K_TARGET_LANG; // 0x0
		::MiHoYo::SDK::BabelfishClient* _client; // 0x10
		::System::Boolean _initialized; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE__CCTOR_OFFSET))();
		}

		::System::String* GetGameBiz()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE_GETGAMEBIZ_OFFSET))(this);
		}

		::System::String* GetRegion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE_GETREGION_OFFSET))(this);
		}

		::System::String* GetConfigUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE_GETCONFIGURL_OFFSET))(this);
		}

		::System::String* GetTranslateUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE_GETTRANSLATEURL_OFFSET))(this);
		}

		::System::Void Init(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE_INIT_OFFSET))(this, a1);
		}

		::System::Void SetContext(::System::String* a1, ::MiHoYo::SDK::JSONArray* a2, ::System::Int32 a3, ::System::Action_1<::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONArray*, ::System::Int32, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE_SETCONTEXT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AddMessage(::System::String* a1, ::MiHoYo::SDK::JSONObject* a2, ::System::Action_1<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE_ADDMESSAGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Translate(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::String* a7, ::System::Int32 a8, ::System::Action_1<::System::String*>* a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE_TRANSLATE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void ClearContext(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE_CLEARCONTEXT_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::ChatMessage* ParseChatMessage(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::MiHoYo::SDK::ChatMessage*(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE_PARSECHATMESSAGE_OFFSET))(this, a1);
		}

		::System::Void CallbackTranslateResult(::System::Action_1<::System::String*>* a1, ::MiHoYo::SDK::JSONNode* a2, ::MiHoYo::SDK::ChatMessage* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::MiHoYo::SDK::JSONNode*, ::MiHoYo::SDK::ChatMessage*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE_CALLBACKTRANSLATERESULT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* ValidateMessage(::MiHoYo::SDK::ChatMessage* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::ChatMessage*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE_VALIDATEMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckInitialized(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE_CHECKINITIALIZED_OFFSET))(this, a1);
		}
	};
}
