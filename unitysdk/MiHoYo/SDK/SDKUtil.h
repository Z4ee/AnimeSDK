#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_SDKUTIL_AESDECRYPT_OFFSET UNITYSDK_OFFSET(0x18429290)
#define MIHOYO_SDK_SDKUTIL_AESENCRYPT_OFFSET UNITYSDK_OFFSET(0x18428EC0)
#define MIHOYO_SDK_SDKUTIL_DECODESTRING_OFFSET UNITYSDK_OFFSET(0x18428820)
#define MIHOYO_SDK_SDKUTIL_ENCODESTRING_OFFSET UNITYSDK_OFFSET(0x18428330)
#define MIHOYO_SDK_SDKUTIL_ESCAPEURL_OFFSET UNITYSDK_OFFSET(0x18427E40)
#define MIHOYO_SDK_SDKUTIL_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x18426B90)
#define MIHOYO_SDK_SDKUTIL_GETCONTENTMD5_OFFSET UNITYSDK_OFFSET(0x18429650)
#define MIHOYO_SDK_SDKUTIL_GETENCODEVALUE_OFFSET UNITYSDK_OFFSET(0x184287C0)
#define MIHOYO_SDK_SDKUTIL_GETMACADDRESS_OFFSET UNITYSDK_OFFSET(0x18428CC0)
#define MIHOYO_SDK_SDKUTIL_GETQUERYSTRING_OFFSET UNITYSDK_OFFSET(0x18426C10)
#define MIHOYO_SDK_SDKUTIL_GETQUERYURL_OFFSET UNITYSDK_OFFSET(0x18407210)
#define MIHOYO_SDK_SDKUTIL_GETQUERY_OFFSET UNITYSDK_OFFSET(0x18427EF0)
#define MIHOYO_SDK_SDKUTIL_HMACSHA1_OFFSET UNITYSDK_OFFSET(0x18412E20)
#define MIHOYO_SDK_SDKUTIL_HMACSHA256_OFFSET UNITYSDK_OFFSET(0x184257E0)
#define MIHOYO_SDK_SDKUTIL_MD5SUM_OFFSET UNITYSDK_OFFSET(0x18412C80)
#define MIHOYO_SDK_SDKUTIL_RSADECRYPT_OFFSET UNITYSDK_OFFSET(0x18425B20)
#define MIHOYO_SDK_SDKUTIL_RSAENCRYPT_OFFSET UNITYSDK_OFFSET(0x1841C160)
#define MIHOYO_SDK_SDKUTIL_SHA1_OFFSET UNITYSDK_OFFSET(0x18425670)
#define MIHOYO_SDK_SDKUTIL_SIGNCOMBOBODY_OFFSET UNITYSDK_OFFSET(0x18426500)
#define MIHOYO_SDK_SDKUTIL_SIGNMDKBODY_OFFSET UNITYSDK_OFFSET(0x18415C00)
#define MIHOYO_SDK_SDKUTIL_SPECIALCODE_OFFSET UNITYSDK_OFFSET(0x184264A0)
#define MIHOYO_SDK_SDKUTIL_STRINGTOBASE64_OFFSET UNITYSDK_OFFSET(0x18428240)
#define MIHOYO_SDK_SDKUTIL_STRINGTOBYTES_OFFSET UNITYSDK_OFFSET(0x18426370)
#define MIHOYO_SDK_SDKUTIL_UNESCAPEURL_OFFSET UNITYSDK_OFFSET(0x18428190)
#define MIHOYO_SDK_SDKUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x184297B0)
#define MIHOYO_SDK_SDKUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x184297A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKUtil_TypeDefinitionIndex = 8121;

	class SDKUtil : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_Keys()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(SDKUtil_TypeDefinitionIndex)->GetStaticField(0x1BD20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL__CCTOR_OFFSET))();
		}

		static ::System::String* SHA1(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_SHA1_OFFSET))(a1);
		}

		static ::System::String* HMACSHA1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_HMACSHA1_OFFSET))(a1, a2);
		}

		static ::System::String* HMACSHA256(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_HMACSHA256_OFFSET))(a1, a2);
		}

		static ::System::String* RSAEncrypt(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_RSAENCRYPT_OFFSET))(a1, a2);
		}

		static ::System::String* RSADecrypt(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_RSADECRYPT_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* StringToBytes(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_STRINGTOBYTES_OFFSET))(a1);
		}

		static ::System::String* SpecialCode(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_SPECIALCODE_OFFSET))(a1);
		}

		static ::System::String* SignMdkBody(::MiHoYo::SDK::JSONObject* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::MiHoYo::SDK::JSONObject*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_SIGNMDKBODY_OFFSET))(a1, a2);
		}

		static ::System::String* SignComboBody(::MiHoYo::SDK::JSONObject* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::MiHoYo::SDK::JSONObject*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_SIGNCOMBOBODY_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Color GetColor(::System::String* a1)
		{
			return ((::UnityEngine::Color(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_GETCOLOR_OFFSET))(a1);
		}

		static ::System::String* GetQueryString(::MiHoYo::SDK::JSONObject* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::MiHoYo::SDK::JSONObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_GETQUERYSTRING_OFFSET))(a1, a2);
		}

		static ::MiHoYo::SDK::JSONObject* GetQuery(::System::String* a1, ::System::Boolean a2)
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_GETQUERY_OFFSET))(a1, a2);
		}

		static ::System::String* GetQueryUrl(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_GETQUERYURL_OFFSET))(a1, a2);
		}

		static ::System::String* EscapeURL(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_ESCAPEURL_OFFSET))(a1);
		}

		static ::System::String* UnEscapeURL(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_UNESCAPEURL_OFFSET))(a1);
		}

		static ::System::String* StringToBase64(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_STRINGTOBASE64_OFFSET))(a1);
		}

		static ::System::String* Md5Sum(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_MD5SUM_OFFSET))(a1);
		}

		static ::System::String* EncodeString(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_ENCODESTRING_OFFSET))(a1, a2);
		}

		static ::System::String* DecodeString(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_DECODESTRING_OFFSET))(a1, a2);
		}

		static ::System::String* GetEncodeValue(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_GETENCODEVALUE_OFFSET))(a1);
		}

		static ::System::String* GetMacAddress()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_GETMACADDRESS_OFFSET))();
		}

		static ::System::String* AesEncrypt(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_AESENCRYPT_OFFSET))(a1, a2);
		}

		static ::System::String* AesDecrypt(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_AESDECRYPT_OFFSET))(a1, a2);
		}

		static ::System::String* GetContentMD5(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKUTIL_GETCONTENTMD5_OFFSET))(a1);
		}
	};
}
