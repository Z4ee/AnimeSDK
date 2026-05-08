#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_SDKUTIL_AESDECRYPT_OFFSET UNITYSDK_OFFSET(0x1A520D90)
#define MIHOYO_SDK_SDKUTIL_AESENCRYPT_OFFSET UNITYSDK_OFFSET(0x1A5208F0)
#define MIHOYO_SDK_SDKUTIL_DECODESTRING_OFFSET UNITYSDK_OFFSET(0x1A520270)
#define MIHOYO_SDK_SDKUTIL_ENCODESTRING_OFFSET UNITYSDK_OFFSET(0x1A51FC90)
#define MIHOYO_SDK_SDKUTIL_ESCAPEURL_OFFSET UNITYSDK_OFFSET(0x1A51EF20)
#define MIHOYO_SDK_SDKUTIL_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x1A51EE70)
#define MIHOYO_SDK_SDKUTIL_GETCONTENTMD5_OFFSET UNITYSDK_OFFSET(0x1A521230)
#define MIHOYO_SDK_SDKUTIL_GETENCODEVALUE_OFFSET UNITYSDK_OFFSET(0x1A5201F0)
#define MIHOYO_SDK_SDKUTIL_GETMACADDRESS_OFFSET UNITYSDK_OFFSET(0x1A520780)
#define MIHOYO_SDK_SDKUTIL_GETQUERYSTRING_OFFSET UNITYSDK_OFFSET(0x1A510020)
#define MIHOYO_SDK_SDKUTIL_GETQUERYURL_OFFSET UNITYSDK_OFFSET(0x1A51F220)
#define MIHOYO_SDK_SDKUTIL_GETQUERY_OFFSET UNITYSDK_OFFSET(0x1A51EF30)
#define MIHOYO_SDK_SDKUTIL_HMACSHA1_OFFSET UNITYSDK_OFFSET(0x1A51D2A0)
#define MIHOYO_SDK_SDKUTIL_HMACSHA256_OFFSET UNITYSDK_OFFSET(0x1A51D4A0)
#define MIHOYO_SDK_SDKUTIL_MD5SUM_OFFSET UNITYSDK_OFFSET(0x1A51FA70)
#define MIHOYO_SDK_SDKUTIL_RSADECRYPT_OFFSET UNITYSDK_OFFSET(0x1A51DC80)
#define MIHOYO_SDK_SDKUTIL_RSAENCRYPT_OFFSET UNITYSDK_OFFSET(0x1A51D6A0)
#define MIHOYO_SDK_SDKUTIL_SHA1_OFFSET UNITYSDK_OFFSET(0x1A51D180)
#define MIHOYO_SDK_SDKUTIL_SIGNCOMBOBODY_OFFSET UNITYSDK_OFFSET(0x1A51E8B0)
#define MIHOYO_SDK_SDKUTIL_SIGNMDKBODY_OFFSET UNITYSDK_OFFSET(0x1A51E4D0)
#define MIHOYO_SDK_SDKUTIL_SPECIALCODE_OFFSET UNITYSDK_OFFSET(0x1A51E450)
#define MIHOYO_SDK_SDKUTIL_STRINGTOBASE64_OFFSET UNITYSDK_OFFSET(0x1A51F920)
#define MIHOYO_SDK_SDKUTIL_STRINGTOBYTES_OFFSET UNITYSDK_OFFSET(0x1A51E2F0)
#define MIHOYO_SDK_SDKUTIL_UNESCAPEURL_OFFSET UNITYSDK_OFFSET(0x1A51F210)
#define MIHOYO_SDK_SDKUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A5213D0)
#define MIHOYO_SDK_SDKUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5213C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKUtil_TypeDefinitionIndex = 19044;

	class SDKUtil : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_Keys()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(SDKUtil_TypeDefinitionIndex)->GetStaticField(0x9340);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL__CCTOR_OFFSET))();
		}

		static ::System::String* SHA1(::System::String* message)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_SHA1_OFFSET))(message);
		}

		static ::System::String* HMACSHA1(::System::String* message, ::System::String* secret)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_HMACSHA1_OFFSET))(message, secret);
		}

		static ::System::String* HMACSHA256(::System::String* message, ::System::String* secret)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_HMACSHA256_OFFSET))(message, secret);
		}

		static ::System::String* RSAEncrypt(::System::String* publickey, ::System::String* content)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_RSAENCRYPT_OFFSET))(publickey, content);
		}

		static ::System::String* RSADecrypt(::System::String* key, ::System::String* content)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_RSADECRYPT_OFFSET))(key, content);
		}

		static ::Il2CppArray<::System::Byte>* StringToBytes(::System::String* str)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_STRINGTOBYTES_OFFSET))(str);
		}

		static ::System::String* SpecialCode(::System::String* s)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_SPECIALCODE_OFFSET))(s);
		}

		static ::System::String* SignMdkBody(::MiHoYo::SDK::JSONObject* content, ::System::String* secret)
		{
			return ((::System::String*(*)(::MiHoYo::SDK::JSONObject*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_SIGNMDKBODY_OFFSET))(content, secret);
		}

		static ::System::String* SignComboBody(::MiHoYo::SDK::JSONObject* content, ::System::String* secret)
		{
			return ((::System::String*(*)(::MiHoYo::SDK::JSONObject*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_SIGNCOMBOBODY_OFFSET))(content, secret);
		}

		static ::UnityEngine::Color GetColor(::System::String* colorString)
		{
			return ((::UnityEngine::Color(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_GETCOLOR_OFFSET))(colorString);
		}

		static ::System::String* GetQueryString(::MiHoYo::SDK::JSONObject* query, ::System::Boolean escape)
		{
			return ((::System::String*(*)(::MiHoYo::SDK::JSONObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_GETQUERYSTRING_OFFSET))(query, escape);
		}

		static ::MiHoYo::SDK::JSONObject* GetQuery(::System::String* queryString, ::System::Boolean unescape)
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_GETQUERY_OFFSET))(queryString, unescape);
		}

		static ::System::String* GetQueryUrl(::System::String* url, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* querys)
		{
			return ((::System::String*(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_GETQUERYURL_OFFSET))(url, querys);
		}

		static ::System::String* EscapeURL(::System::String* url)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_ESCAPEURL_OFFSET))(url);
		}

		static ::System::String* UnEscapeURL(::System::String* url)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_UNESCAPEURL_OFFSET))(url);
		}

		static ::System::String* StringToBase64(::System::String* inputString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_STRINGTOBASE64_OFFSET))(inputString);
		}

		static ::System::String* Md5Sum(::System::String* input)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_MD5SUM_OFFSET))(input);
		}

		static ::System::String* EncodeString(::System::String* encryptString, ::System::String* encodeValue)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_ENCODESTRING_OFFSET))(encryptString, encodeValue);
		}

		static ::System::String* DecodeString(::System::String* decryptString, ::System::String* encodeValue)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_DECODESTRING_OFFSET))(decryptString, encodeValue);
		}

		static ::System::String* GetEncodeValue(::System::String* encodeStrnig)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_GETENCODEVALUE_OFFSET))(encodeStrnig);
		}

		static ::System::String* GetMacAddress()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_GETMACADDRESS_OFFSET))();
		}

		static ::System::String* AesEncrypt(::System::String* str, ::System::String* key)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_AESENCRYPT_OFFSET))(str, key);
		}

		static ::System::String* AesDecrypt(::System::String* str, ::System::String* key)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_AESDECRYPT_OFFSET))(str, key);
		}

		static ::System::String* GetContentMD5(::System::String* input)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_GETCONTENTMD5_OFFSET))(input);
		}
	};
}
