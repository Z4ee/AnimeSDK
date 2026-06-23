#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_UNIWEBVIEWMESSAGE_GETQUERYDICTIONARY_OFFSET UNITYSDK_OFFSET(0x911BA0)
#define MIHOYO_SDK_UNIWEBVIEWMESSAGE_GET_ARGS_OFFSET UNITYSDK_OFFSET(0x40C750)
#define MIHOYO_SDK_UNIWEBVIEWMESSAGE_GET_PATH_OFFSET UNITYSDK_OFFSET(0x3E3F20)
#define MIHOYO_SDK_UNIWEBVIEWMESSAGE_GET_QUERY_OFFSET UNITYSDK_OFFSET(0x2AB510)
#define MIHOYO_SDK_UNIWEBVIEWMESSAGE_GET_RAWMESSAGE_OFFSET UNITYSDK_OFFSET(0x246290)
#define MIHOYO_SDK_UNIWEBVIEWMESSAGE_GET_SCHEME_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define MIHOYO_SDK_UNIWEBVIEWMESSAGE_SET_ARGS_OFFSET UNITYSDK_OFFSET(0x6B3130)
#define MIHOYO_SDK_UNIWEBVIEWMESSAGE_SET_PATH_OFFSET UNITYSDK_OFFSET(0x446DB0)
#define MIHOYO_SDK_UNIWEBVIEWMESSAGE_SET_QUERY_OFFSET UNITYSDK_OFFSET(0x7353A0)
#define MIHOYO_SDK_UNIWEBVIEWMESSAGE_SET_RAWMESSAGE_OFFSET UNITYSDK_OFFSET(0x2B6D10)
#define MIHOYO_SDK_UNIWEBVIEWMESSAGE_SET_SCHEME_OFFSET UNITYSDK_OFFSET(0x446DA0)
#define MIHOYO_SDK_UNIWEBVIEWMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x911B90)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UniWebViewMessage_TypeDefinitionIndex = 19702;

	struct alignas(8) UniWebViewMessage
	{
		::System::String* _RawMessage_k__BackingField; // 0x10
		::System::String* _Scheme_k__BackingField; // 0x18
		::System::String* _Path_k__BackingField; // 0x20
		::System::String* _Query_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _Args_k__BackingField; // 0x30

		::System::Void _ctor(::System::String* rawMessage)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UNIWEBVIEWMESSAGE__CTOR_OFFSET))(this, rawMessage);
		}

		::System::String* get_RawMessage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UNIWEBVIEWMESSAGE_GET_RAWMESSAGE_OFFSET))(this);
		}

		::System::Void set_RawMessage(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UNIWEBVIEWMESSAGE_SET_RAWMESSAGE_OFFSET))(this, value);
		}

		::System::String* get_Scheme()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UNIWEBVIEWMESSAGE_GET_SCHEME_OFFSET))(this);
		}

		::System::Void set_Scheme(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UNIWEBVIEWMESSAGE_SET_SCHEME_OFFSET))(this, value);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UNIWEBVIEWMESSAGE_GET_PATH_OFFSET))(this);
		}

		::System::Void set_Path(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UNIWEBVIEWMESSAGE_SET_PATH_OFFSET))(this, value);
		}

		::System::String* get_Query()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UNIWEBVIEWMESSAGE_GET_QUERY_OFFSET))(this);
		}

		::System::Void set_Query(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UNIWEBVIEWMESSAGE_SET_QUERY_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* get_Args()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UNIWEBVIEWMESSAGE_GET_ARGS_OFFSET))(this);
		}

		::System::Void set_Args(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UNIWEBVIEWMESSAGE_SET_ARGS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* GetQueryDictionary(::System::String* query)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UNIWEBVIEWMESSAGE_GETQUERYDICTIONARY_OFFSET))(this, query);
		}
	};
}
