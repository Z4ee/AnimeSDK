#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKUTIL_AESDECRYPT_OFFSET UNITYSDK_OFFSET(0x1B63BF40)
#define MIHOYO_SDK_MIHOYOSDKUTIL_AESENCRYPT_OFFSET UNITYSDK_OFFSET(0x1B63BAA0)
#define MIHOYO_SDK_MIHOYOSDKUTIL_DECODESTRING_OFFSET UNITYSDK_OFFSET(0x1B63B2A0)
#define MIHOYO_SDK_MIHOYOSDKUTIL_ENCODESTRING_OFFSET UNITYSDK_OFFSET(0x1B63ACC0)
#define MIHOYO_SDK_MIHOYOSDKUTIL_ESCAPEURL_OFFSET UNITYSDK_OFFSET(0x1B63A4C0)
#define MIHOYO_SDK_MIHOYOSDKUTIL_GENERATEUNIXTIMESTAMPINMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x1B63C4B0)
#define MIHOYO_SDK_MIHOYOSDKUTIL_GENERATEUNIXTIMESTAMPINSECONDS_OFFSET UNITYSDK_OFFSET(0x1B63C7C0)
#define MIHOYO_SDK_MIHOYOSDKUTIL_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x1B6390E0)
#define MIHOYO_SDK_MIHOYOSDKUTIL_GETCONTENTMD5_OFFSET UNITYSDK_OFFSET(0x1B63AB30)
#define MIHOYO_SDK_MIHOYOSDKUTIL_GETENCODEVALUE_OFFSET UNITYSDK_OFFSET(0x1B63B220)
#define MIHOYO_SDK_MIHOYOSDKUTIL_GETFULLLANGCODEFROMSHORT_OFFSET UNITYSDK_OFFSET(0x1B63C5B0)
#define MIHOYO_SDK_MIHOYOSDKUTIL_GETMACADDRESS_OFFSET UNITYSDK_OFFSET(0x1B63B7B0)
#define MIHOYO_SDK_MIHOYOSDKUTIL_GETQUERYSTRING_OFFSET UNITYSDK_OFFSET(0x1B639190)
#define MIHOYO_SDK_MIHOYOSDKUTIL_GETQUERY_OFFSET UNITYSDK_OFFSET(0x1B63A4D0)
#define MIHOYO_SDK_MIHOYOSDKUTIL_GETSAVESTRING_OFFSET UNITYSDK_OFFSET(0x1B63BA00)
#define MIHOYO_SDK_MIHOYOSDKUTIL_GZIPCOMPRESS_1_OFFSET UNITYSDK_OFFSET(0x1B63CB50)
#define MIHOYO_SDK_MIHOYOSDKUTIL_GZIPCOMPRESS_OFFSET UNITYSDK_OFFSET(0x1B63C890)
#define MIHOYO_SDK_MIHOYOSDKUTIL_GZIPDECOMPRESS_OFFSET UNITYSDK_OFFSET(0x1B63CE30)
#define MIHOYO_SDK_MIHOYOSDKUTIL_HMACSHA1_OFFSET UNITYSDK_OFFSET(0x1B637530)
#define MIHOYO_SDK_MIHOYOSDKUTIL_HMACSHA256_OFFSET UNITYSDK_OFFSET(0x1B637730)
#define MIHOYO_SDK_MIHOYOSDKUTIL_INTTOBIGENDIANBYTES_OFFSET UNITYSDK_OFFSET(0x1B63D0A0)
#define MIHOYO_SDK_MIHOYOSDKUTIL_ISNEEDURLENCODE_OFFSET UNITYSDK_OFFSET(0x1B63C3E0)
#define MIHOYO_SDK_MIHOYOSDKUTIL_MD5SUM_OFFSET UNITYSDK_OFFSET(0x1B63A910)
#define MIHOYO_SDK_MIHOYOSDKUTIL_RSADECRYPT_OFFSET UNITYSDK_OFFSET(0x1B637F10)
#define MIHOYO_SDK_MIHOYOSDKUTIL_RSAENCRYPT_OFFSET UNITYSDK_OFFSET(0x1B637930)
#define MIHOYO_SDK_MIHOYOSDKUTIL_SETSAVESTRING_OFFSET UNITYSDK_OFFSET(0x1B63B920)
#define MIHOYO_SDK_MIHOYOSDKUTIL_SHA1_OFFSET UNITYSDK_OFFSET(0x1B637410)
#define MIHOYO_SDK_MIHOYOSDKUTIL_SIGNCOMBOBODY_OFFSET UNITYSDK_OFFSET(0x1B638B40)
#define MIHOYO_SDK_MIHOYOSDKUTIL_SIGNMDKBODY_OFFSET UNITYSDK_OFFSET(0x1B638760)
#define MIHOYO_SDK_MIHOYOSDKUTIL_SPECIALCODE_OFFSET UNITYSDK_OFFSET(0x1B6386E0)
#define MIHOYO_SDK_MIHOYOSDKUTIL_STRINGTOBASE64_OFFSET UNITYSDK_OFFSET(0x1B63A7C0)
#define MIHOYO_SDK_MIHOYOSDKUTIL_STRINGTOBYTES_OFFSET UNITYSDK_OFFSET(0x1B638580)
#define MIHOYO_SDK_MIHOYOSDKUTIL_UNESCAPEURL_OFFSET UNITYSDK_OFFSET(0x1B63A7B0)
#define MIHOYO_SDK_MIHOYOSDKUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B63D110)
#define MIHOYO_SDK_MIHOYOSDKUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B63D100)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKUtil_TypeDefinitionIndex = 36868;

	class MiHoYoSDKUtil : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_Keys()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKUtil_TypeDefinitionIndex)->GetStaticField(0x28920);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL__CCTOR_OFFSET))();
		}

		static ::System::String* SHA1(::System::String* message)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_SHA1_OFFSET))(message);
		}

		static ::System::String* HMACSHA1(::System::String* message, ::System::String* secret)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_HMACSHA1_OFFSET))(message, secret);
		}

		static ::System::String* HMACSHA256(::System::String* message, ::System::String* secret)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_HMACSHA256_OFFSET))(message, secret);
		}

		static ::System::String* RSAEncrypt(::System::String* publickey, ::System::String* content)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_RSAENCRYPT_OFFSET))(publickey, content);
		}

		static ::System::String* RSADecrypt(::System::String* key, ::System::String* content)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_RSADECRYPT_OFFSET))(key, content);
		}

		static ::Il2CppArray<::System::Byte>* StringToBytes(::System::String* str)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_STRINGTOBYTES_OFFSET))(str);
		}

		static ::System::String* SpecialCode(::System::String* s)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_SPECIALCODE_OFFSET))(s);
		}

		static ::System::String* SignMdkBody(::MiHoYo::SDK::JSONObject* content, ::System::String* secret)
		{
			return ((::System::String*(*)(::MiHoYo::SDK::JSONObject*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_SIGNMDKBODY_OFFSET))(content, secret);
		}

		static ::System::String* SignComboBody(::MiHoYo::SDK::JSONObject* content, ::System::String* secret)
		{
			return ((::System::String*(*)(::MiHoYo::SDK::JSONObject*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_SIGNCOMBOBODY_OFFSET))(content, secret);
		}

		static ::UnityEngine::Color GetColor(::System::String* colorString)
		{
			return ((::UnityEngine::Color(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_GETCOLOR_OFFSET))(colorString);
		}

		static ::System::String* GetQueryString(::MiHoYo::SDK::JSONObject* query, ::System::Boolean escape)
		{
			return ((::System::String*(*)(::MiHoYo::SDK::JSONObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_GETQUERYSTRING_OFFSET))(query, escape);
		}

		static ::MiHoYo::SDK::JSONObject* GetQuery(::System::String* queryString, ::System::Boolean unescape)
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_GETQUERY_OFFSET))(queryString, unescape);
		}

		static ::System::String* EscapeURL(::System::String* url)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_ESCAPEURL_OFFSET))(url);
		}

		static ::System::String* UnEscapeURL(::System::String* url)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_UNESCAPEURL_OFFSET))(url);
		}

		static ::System::String* StringToBase64(::System::String* inputString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_STRINGTOBASE64_OFFSET))(inputString);
		}

		static ::System::String* Md5Sum(::System::String* input)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_MD5SUM_OFFSET))(input);
		}

		static ::System::String* GetContentMD5(::System::String* input)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_GETCONTENTMD5_OFFSET))(input);
		}

		static ::System::String* EncodeString(::System::String* encryptString, ::System::String* encodeValue)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_ENCODESTRING_OFFSET))(encryptString, encodeValue);
		}

		static ::System::String* DecodeString(::System::String* decryptString, ::System::String* encodeValue)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_DECODESTRING_OFFSET))(decryptString, encodeValue);
		}

		static ::System::String* GetEncodeValue(::System::String* encodeStrnig)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_GETENCODEVALUE_OFFSET))(encodeStrnig);
		}

		static ::System::String* GetMacAddress()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_GETMACADDRESS_OFFSET))();
		}

		static ::System::Void SetSaveString(::System::String* key, ::System::String* value, ::System::Boolean isEncode)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_SETSAVESTRING_OFFSET))(key, value, isEncode);
		}

		static ::System::String* GetSaveString(::System::String* key, ::System::Boolean isDecode)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_GETSAVESTRING_OFFSET))(key, isDecode);
		}

		static ::System::String* AesEncrypt(::System::String* str, ::System::String* key)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_AESENCRYPT_OFFSET))(str, key);
		}

		static ::System::String* AesDecrypt(::System::String* str, ::System::String* key)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_AESDECRYPT_OFFSET))(str, key);
		}

		static ::System::Boolean IsNeedUrlEncode(::System::String* strSrc)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_ISNEEDURLENCODE_OFFSET))(strSrc);
		}

		static ::System::Int64 GenerateUnixTimestampInMilliseconds()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_GENERATEUNIXTIMESTAMPINMILLISECONDS_OFFSET))();
		}

		static ::System::String* GetFullLangCodeFromShort(::System::String* shortLangCode)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_GETFULLLANGCODEFROMSHORT_OFFSET))(shortLangCode);
		}

		static ::System::Int64 GenerateUnixTimestampInSeconds()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_GENERATEUNIXTIMESTAMPINSECONDS_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* GzipCompress(::Il2CppArray<::System::Byte>* data)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_GZIPCOMPRESS_OFFSET))(data);
		}

		static ::Il2CppArray<::System::Byte>* GzipCompress_1(::Il2CppArray<::System::Byte>* data, ::System::Int32 count)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_GZIPCOMPRESS_1_OFFSET))(data, count);
		}

		static ::Il2CppArray<::System::Byte>* GzipDecompress(::Il2CppArray<::System::Byte>* data)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_GZIPDECOMPRESS_OFFSET))(data);
		}

		static ::Il2CppArray<::System::Byte>* IntToBigEndianBytes(::System::Int32 value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_INTTOBIGENDIANBYTES_OFFSET))(value);
		}
	};
}
