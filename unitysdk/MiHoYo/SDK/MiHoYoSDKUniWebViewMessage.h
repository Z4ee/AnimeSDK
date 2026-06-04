#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_MIHOYOSDKUNIWEBVIEWMESSAGE_GETQUERYDICTIONARY_OFFSET UNITYSDK_OFFSET(0x2AD50)
#define MIHOYO_SDK_MIHOYOSDKUNIWEBVIEWMESSAGE_GET_ARGS_OFFSET UNITYSDK_OFFSET(0x2AD20)
#define MIHOYO_SDK_MIHOYOSDKUNIWEBVIEWMESSAGE_GET_PATH_OFFSET UNITYSDK_OFFSET(0x14410)
#define MIHOYO_SDK_MIHOYOSDKUNIWEBVIEWMESSAGE_GET_RAWMESSAGE_OFFSET UNITYSDK_OFFSET(0x5B60)
#define MIHOYO_SDK_MIHOYOSDKUNIWEBVIEWMESSAGE_GET_SCHEME_OFFSET UNITYSDK_OFFSET(0x60D0)
#define MIHOYO_SDK_MIHOYOSDKUNIWEBVIEWMESSAGE_SET_ARGS_OFFSET UNITYSDK_OFFSET(0x2AD30)
#define MIHOYO_SDK_MIHOYOSDKUNIWEBVIEWMESSAGE_SET_PATH_OFFSET UNITYSDK_OFFSET(0xB7C0)
#define MIHOYO_SDK_MIHOYOSDKUNIWEBVIEWMESSAGE_SET_RAWMESSAGE_OFFSET UNITYSDK_OFFSET(0xC630)
#define MIHOYO_SDK_MIHOYOSDKUNIWEBVIEWMESSAGE_SET_SCHEME_OFFSET UNITYSDK_OFFSET(0x95B0)
#define MIHOYO_SDK_MIHOYOSDKUNIWEBVIEWMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x2AD40)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKUniWebViewMessage_TypeDefinitionIndex = 43875;

	struct alignas(8) MiHoYoSDKUniWebViewMessage
	{
		::System::String* _RawMessage_k__BackingField; // 0x10
		::System::String* _Scheme_k__BackingField; // 0x18
		::System::String* _Path_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _Args_k__BackingField; // 0x28

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUNIWEBVIEWMESSAGE__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_RawMessage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUNIWEBVIEWMESSAGE_GET_RAWMESSAGE_OFFSET))(this);
		}

		::System::Void set_RawMessage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUNIWEBVIEWMESSAGE_SET_RAWMESSAGE_OFFSET))(this, a1);
		}

		::System::String* get_Scheme()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUNIWEBVIEWMESSAGE_GET_SCHEME_OFFSET))(this);
		}

		::System::Void set_Scheme(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUNIWEBVIEWMESSAGE_SET_SCHEME_OFFSET))(this, a1);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUNIWEBVIEWMESSAGE_GET_PATH_OFFSET))(this);
		}

		::System::Void set_Path(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUNIWEBVIEWMESSAGE_SET_PATH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* get_Args()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUNIWEBVIEWMESSAGE_GET_ARGS_OFFSET))(this);
		}

		::System::Void set_Args(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUNIWEBVIEWMESSAGE_SET_ARGS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* GetQueryDictionary(::System::String* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUNIWEBVIEWMESSAGE_GETQUERYDICTIONARY_OFFSET))(this, a1);
		}
	};
}
