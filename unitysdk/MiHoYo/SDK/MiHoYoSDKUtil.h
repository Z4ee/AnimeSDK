#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKUTIL_AESDECRYPT_OFFSET UNITYSDK_OFFSET(0xB253480)
#define MIHOYO_SDK_MIHOYOSDKUTIL_AESENCRYPT_OFFSET UNITYSDK_OFFSET(0xB253110)
#define MIHOYO_SDK_MIHOYOSDKUTIL_DECODESTRING_OFFSET UNITYSDK_OFFSET(0xB252920)
#define MIHOYO_SDK_MIHOYOSDKUTIL_ENCODESTRING_OFFSET UNITYSDK_OFFSET(0xB252470)
#define MIHOYO_SDK_MIHOYOSDKUTIL_ESCAPEURL_OFFSET UNITYSDK_OFFSET(0xB251D30)
#define MIHOYO_SDK_MIHOYOSDKUTIL_GENERATEUNIXTIMESTAMPINMILLISECONDS_OFFSET UNITYSDK_OFFSET(0xB253830)
#define MIHOYO_SDK_MIHOYOSDKUTIL_GENERATEUNIXTIMESTAMPINSECONDS_OFFSET UNITYSDK_OFFSET(0xB253AC0)
#define MIHOYO_SDK_MIHOYOSDKUTIL_GETCOLOR_OFFSET UNITYSDK_OFFSET(0xB251CB0)
#define MIHOYO_SDK_MIHOYOSDKUTIL_GETCONTENTMD5_OFFSET UNITYSDK_OFFSET(0xB252320)
#define MIHOYO_SDK_MIHOYOSDKUTIL_GETENCODEVALUE_OFFSET UNITYSDK_OFFSET(0xB2528C0)
#define MIHOYO_SDK_MIHOYOSDKUTIL_GETFULLLANGCODEFROMSHORT_OFFSET UNITYSDK_OFFSET(0xB2538C0)
#define MIHOYO_SDK_MIHOYOSDKUTIL_GETMACADDRESS_OFFSET UNITYSDK_OFFSET(0xB252D60)
#define MIHOYO_SDK_MIHOYOSDKUTIL_GETQUERYSTRING_OFFSET UNITYSDK_OFFSET(0xB249820)
#define MIHOYO_SDK_MIHOYOSDKUTIL_GETQUERY_OFFSET UNITYSDK_OFFSET(0xB251D50)
#define MIHOYO_SDK_MIHOYOSDKUTIL_GETSAVESTRING_OFFSET UNITYSDK_OFFSET(0xB2530B0)
#define MIHOYO_SDK_MIHOYOSDKUTIL_GZIPCOMPRESS_1_OFFSET UNITYSDK_OFFSET(0xB253EF0)
#define MIHOYO_SDK_MIHOYOSDKUTIL_GZIPCOMPRESS_OFFSET UNITYSDK_OFFSET(0xB253B30)
#define MIHOYO_SDK_MIHOYOSDKUTIL_GZIPDECOMPRESS_OFFSET UNITYSDK_OFFSET(0xB2542D0)
#define MIHOYO_SDK_MIHOYOSDKUTIL_HMACSHA1_OFFSET UNITYSDK_OFFSET(0xB24FCD0)
#define MIHOYO_SDK_MIHOYOSDKUTIL_HMACSHA256_OFFSET UNITYSDK_OFFSET(0xB24E9A0)
#define MIHOYO_SDK_MIHOYOSDKUTIL_INTTOBIGENDIANBYTES_OFFSET UNITYSDK_OFFSET(0xB254680)
#define MIHOYO_SDK_MIHOYOSDKUTIL_ISNEEDURLENCODE_OFFSET UNITYSDK_OFFSET(0xB2537E0)
#define MIHOYO_SDK_MIHOYOSDKUTIL_MD5SUM_OFFSET UNITYSDK_OFFSET(0xB2520E0)
#define MIHOYO_SDK_MIHOYOSDKUTIL_RSADECRYPT_OFFSET UNITYSDK_OFFSET(0xB250780)
#define MIHOYO_SDK_MIHOYOSDKUTIL_RSAENCRYPT_OFFSET UNITYSDK_OFFSET(0xB24FF30)
#define MIHOYO_SDK_MIHOYOSDKUTIL_SETSAVESTRING_OFFSET UNITYSDK_OFFSET(0xB253010)
#define MIHOYO_SDK_MIHOYOSDKUTIL_SHA1_OFFSET UNITYSDK_OFFSET(0xB24FB80)
#define MIHOYO_SDK_MIHOYOSDKUTIL_SIGNCOMBOBODY_OFFSET UNITYSDK_OFFSET(0xB2516D0)
#define MIHOYO_SDK_MIHOYOSDKUTIL_SIGNMDKBODY_OFFSET UNITYSDK_OFFSET(0xB251260)
#define MIHOYO_SDK_MIHOYOSDKUTIL_SPECIALCODE_OFFSET UNITYSDK_OFFSET(0xB2511E0)
#define MIHOYO_SDK_MIHOYOSDKUTIL_STRINGTOBASE64_OFFSET UNITYSDK_OFFSET(0xB251F60)
#define MIHOYO_SDK_MIHOYOSDKUTIL_STRINGTOBYTES_OFFSET UNITYSDK_OFFSET(0xB2510B0)
#define MIHOYO_SDK_MIHOYOSDKUTIL_UNESCAPEURL_OFFSET UNITYSDK_OFFSET(0xB22EEA0)
#define MIHOYO_SDK_MIHOYOSDKUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2546D0)
#define MIHOYO_SDK_MIHOYOSDKUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0xB2546C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKUtil_TypeDefinitionIndex = 46941;

	class MiHoYoSDKUtil : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_Keys()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKUtil_TypeDefinitionIndex)->GetStaticField(0x54AD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL__CCTOR_OFFSET))();
		}

		static ::System::String* SHA1(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_SHA1_OFFSET))(a1);
		}

		static ::System::String* HMACSHA1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_HMACSHA1_OFFSET))(a1, a2);
		}

		static ::System::String* HMACSHA256(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_HMACSHA256_OFFSET))(a1, a2);
		}

		static ::System::String* RSAEncrypt(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_RSAENCRYPT_OFFSET))(a1, a2);
		}

		static ::System::String* RSADecrypt(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_RSADECRYPT_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* StringToBytes(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_STRINGTOBYTES_OFFSET))(a1);
		}

		static ::System::String* SpecialCode(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_SPECIALCODE_OFFSET))(a1);
		}

		static ::System::String* SignMdkBody(::MiHoYo::SDK::JSONObject* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::MiHoYo::SDK::JSONObject*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_SIGNMDKBODY_OFFSET))(a1, a2);
		}

		static ::System::String* SignComboBody(::MiHoYo::SDK::JSONObject* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::MiHoYo::SDK::JSONObject*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_SIGNCOMBOBODY_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Color GetColor(::System::String* a1)
		{
			return ((::UnityEngine::Color(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_GETCOLOR_OFFSET))(a1);
		}

		static ::System::String* GetQueryString(::MiHoYo::SDK::JSONObject* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::MiHoYo::SDK::JSONObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_GETQUERYSTRING_OFFSET))(a1, a2);
		}

		static ::MiHoYo::SDK::JSONObject* GetQuery(::System::String* a1, ::System::Boolean a2)
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_GETQUERY_OFFSET))(a1, a2);
		}

		static ::System::String* EscapeURL(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_ESCAPEURL_OFFSET))(a1);
		}

		static ::System::String* UnEscapeURL(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_UNESCAPEURL_OFFSET))(a1);
		}

		static ::System::String* StringToBase64(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_STRINGTOBASE64_OFFSET))(a1);
		}

		static ::System::String* Md5Sum(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_MD5SUM_OFFSET))(a1);
		}

		static ::System::String* GetContentMD5(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_GETCONTENTMD5_OFFSET))(a1);
		}

		static ::System::String* EncodeString(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_ENCODESTRING_OFFSET))(a1, a2);
		}

		static ::System::String* DecodeString(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_DECODESTRING_OFFSET))(a1, a2);
		}

		static ::System::String* GetEncodeValue(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_GETENCODEVALUE_OFFSET))(a1);
		}

		static ::System::String* GetMacAddress()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_GETMACADDRESS_OFFSET))();
		}

		static ::System::Void SetSaveString(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_SETSAVESTRING_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetSaveString(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_GETSAVESTRING_OFFSET))(a1, a2);
		}

		static ::System::String* AesEncrypt(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_AESENCRYPT_OFFSET))(a1, a2);
		}

		static ::System::String* AesDecrypt(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_AESDECRYPT_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsNeedUrlEncode(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_ISNEEDURLENCODE_OFFSET))(a1);
		}

		static ::System::Int64 GenerateUnixTimestampInMilliseconds()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_GENERATEUNIXTIMESTAMPINMILLISECONDS_OFFSET))();
		}

		static ::System::String* GetFullLangCodeFromShort(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_GETFULLLANGCODEFROMSHORT_OFFSET))(a1);
		}

		static ::System::Int64 GenerateUnixTimestampInSeconds()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_GENERATEUNIXTIMESTAMPINSECONDS_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* GzipCompress(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_GZIPCOMPRESS_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* GzipCompress_1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_GZIPCOMPRESS_1_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* GzipDecompress(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_GZIPDECOMPRESS_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* IntToBigEndianBytes(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUTIL_INTTOBIGENDIANBYTES_OFFSET))(a1);
		}
	};
}
