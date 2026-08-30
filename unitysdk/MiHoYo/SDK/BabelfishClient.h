#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class BabelfishConfig; }
namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_BABELFISHCLIENT_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x16A827A0)
#define MIHOYO_SDK_BABELFISHCLIENT_SETCONFIGURL_OFFSET UNITYSDK_OFFSET(0x16A82780)
#define MIHOYO_SDK_BABELFISHCLIENT_SETTRANSLATEURL_OFFSET UNITYSDK_OFFSET(0x16A82790)
#define MIHOYO_SDK_BABELFISHCLIENT_TRANSLATE_OFFSET UNITYSDK_OFFSET(0x16A82A60)
#define MIHOYO_SDK_BABELFISHCLIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x16A82F90)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BabelfishClient_TypeDefinitionIndex = 47034;

	class BabelfishClient : public ::System::Object
	{
	public:
		// static const ::System::Single DEFAULT_TIMEOUT_SEC; // 0x0
		// static const ::System::Single MIN_TIMEOUT_SEC; // 0x0
		// static const ::System::Int32 NO_RETRY = 0x0; // 0x0
		::System::String* _configUrl; // 0x10
		::System::String* _translateUrl; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCLIENT__CTOR_OFFSET))(this);
		}

		::System::Void SetConfigUrl(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCLIENT_SETCONFIGURL_OFFSET))(this, a1);
		}

		::System::Void SetTranslateUrl(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCLIENT_SETTRANSLATEURL_OFFSET))(this, a1);
		}

		::System::Void GetConfig(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::BabelfishConfig*>* a2, ::System::Action_2<::System::Int32, ::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::BabelfishConfig*>*, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCLIENT_GETCONFIG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Translate(::MiHoYo::SDK::JSONArray* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::Action_1<::MiHoYo::SDK::JSONNode*>* a7, ::System::Action_2<::System::Int32, ::System::String*>* a8, ::System::Single a9)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONArray*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::JSONNode*>*, ::System::Action_2<::System::Int32, ::System::String*>*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCLIENT_TRANSLATE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
	};
}
