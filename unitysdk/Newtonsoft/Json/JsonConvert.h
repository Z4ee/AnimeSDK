#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/FloatFormatHandling.h"
#include "unitysdk/Newtonsoft/Json/Formatting.h"
#include "unitysdk/Newtonsoft/Json/StringEscapeHandling.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonSerializerSettings; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Func_1; }

#define NEWTONSOFT_JSON_JSONCONVERT_DESERIALIZEOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1881A800)
#define NEWTONSOFT_JSON_JSONCONVERT_DESERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x1881A7C0)
#define NEWTONSOFT_JSON_JSONCONVERT_ENSUREDECIMALPLACE_1_OFFSET UNITYSDK_OFFSET(0x18819F30)
#define NEWTONSOFT_JSON_JSONCONVERT_ENSUREDECIMALPLACE_OFFSET UNITYSDK_OFFSET(0x18819C50)
#define NEWTONSOFT_JSON_JSONCONVERT_ENSUREFLOATFORMAT_OFFSET UNITYSDK_OFFSET(0x18819D20)
#define NEWTONSOFT_JSON_JSONCONVERT_GETDEFAULTSETTINGS_OFFSET UNITYSDK_OFFSET(0x188199C0)
#define NEWTONSOFT_JSON_JSONCONVERT_GET_DEFAULTSETTINGS_OFFSET UNITYSDK_OFFSET(0x18819700)
#define NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1881A370)
#define NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1881A210)
#define NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_2_OFFSET UNITYSDK_OFFSET(0x1881A1B0)
#define NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_3_OFFSET UNITYSDK_OFFSET(0x1881A2A0)
#define NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_4_OFFSET UNITYSDK_OFFSET(0x1881A5F0)
#define NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x1881A150)
#define NEWTONSOFT_JSON_JSONCONVERT_SET_DEFAULTSETTINGS_OFFSET UNITYSDK_OFFSET(0x18819730)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x18819A30)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x18819BC0)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x18819EA0)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_4_OFFSET UNITYSDK_OFFSET(0x18819FA0)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_5_OFFSET UNITYSDK_OFFSET(0x18819B30)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_6_OFFSET UNITYSDK_OFFSET(0x1881A060)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_7_OFFSET UNITYSDK_OFFSET(0x1881A0A0)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x188199F0)
#define NEWTONSOFT_JSON_JSONCONVERT__CCTOR_OFFSET UNITYSDK_OFFSET(0x18819770)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonConvert_TypeDefinitionIndex = 9269;

	class JsonConvert : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Undefined()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(JsonConvert_TypeDefinitionIndex)->GetStaticField(0x2DA40);
		}
		static ::System::String** StaticGet_NaN()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(JsonConvert_TypeDefinitionIndex)->GetStaticField(0x2DA48);
		}
		static ::System::String** StaticGet_False()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(JsonConvert_TypeDefinitionIndex)->GetStaticField(0x2DA50);
		}
		static ::System::String** StaticGet_True()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(JsonConvert_TypeDefinitionIndex)->GetStaticField(0x2DA58);
		}
		static ::Newtonsoft::Json::JsonSerializerSettings** StaticGet_InitialSerializerSettings()
		{
			return (::Newtonsoft::Json::JsonSerializerSettings**)Il2CppClass::FromTypeDefinitionIndex(JsonConvert_TypeDefinitionIndex)->GetStaticField(0x2DA60);
		}
		static ::System::String** StaticGet_PositiveInfinity()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(JsonConvert_TypeDefinitionIndex)->GetStaticField(0x2DA68);
		}
		static ::System::String** StaticGet_NegativeInfinity()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(JsonConvert_TypeDefinitionIndex)->GetStaticField(0x2DA70);
		}
		static ::System::String** StaticGet_Null()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(JsonConvert_TypeDefinitionIndex)->GetStaticField(0x2DA78);
		}
		static ::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>** StaticGet__DefaultSettings_k__BackingField()
		{
			return (::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>**)Il2CppClass::FromTypeDefinitionIndex(JsonConvert_TypeDefinitionIndex)->GetStaticField(0x2DA80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT__CCTOR_OFFSET))();
		}

		static ::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* get_DefaultSettings()
		{
			return ((::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>*(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_GET_DEFAULTSETTINGS_OFFSET))();
		}

		static ::System::Void set_DefaultSettings(::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* a1)
		{
			return ((::System::Void(*)(::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_SET_DEFAULTSETTINGS_OFFSET))(a1);
		}

		static ::Newtonsoft::Json::JsonSerializerSettings* GetDefaultSettings()
		{
			return ((::Newtonsoft::Json::JsonSerializerSettings*(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_GETDEFAULTSETTINGS_OFFSET))();
		}

		static ::System::String* ToString(::System::Boolean a1)
		{
			return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_OFFSET))(a1);
		}

		static ::System::String* ToString_1(::System::Char a1)
		{
			return ((::System::String*(*)(::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_1_OFFSET))(a1);
		}

		static ::System::String* ToString_2(::System::Single a1, ::Newtonsoft::Json::FloatFormatHandling a2, ::System::Char a3, ::System::Boolean a4)
		{
			return ((::System::String*(*)(::System::Single, ::Newtonsoft::Json::FloatFormatHandling, ::System::Char, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* EnsureFloatFormat(::System::Double a1, ::System::String* a2, ::Newtonsoft::Json::FloatFormatHandling a3, ::System::Char a4, ::System::Boolean a5)
		{
			return ((::System::String*(*)(::System::Double, ::System::String*, ::Newtonsoft::Json::FloatFormatHandling, ::System::Char, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_ENSUREFLOATFORMAT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::String* ToString_3(::System::Double a1, ::Newtonsoft::Json::FloatFormatHandling a2, ::System::Char a3, ::System::Boolean a4)
		{
			return ((::System::String*(*)(::System::Double, ::Newtonsoft::Json::FloatFormatHandling, ::System::Char, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_3_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* EnsureDecimalPlace(::System::Double a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::Double, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_ENSUREDECIMALPLACE_OFFSET))(a1, a2);
		}

		static ::System::String* EnsureDecimalPlace_1(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_ENSUREDECIMALPLACE_1_OFFSET))(a1);
		}

		static ::System::String* ToString_4(::System::Decimal a1)
		{
			return ((::System::String*(*)(::System::Decimal))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_4_OFFSET))(a1);
		}

		static ::System::String* ToString_5(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_5_OFFSET))(a1);
		}

		static ::System::String* ToString_6(::System::String* a1, ::System::Char a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_6_OFFSET))(a1, a2);
		}

		static ::System::String* ToString_7(::System::String* a1, ::System::Char a2, ::Newtonsoft::Json::StringEscapeHandling a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::Char, ::Newtonsoft::Json::StringEscapeHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_7_OFFSET))(a1, a2, a3);
		}

		static ::System::String* SerializeObject(::System::Object* a1)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_OFFSET))(a1);
		}

		static ::System::String* SerializeObject_1(::System::Object* a1, ::Newtonsoft::Json::Formatting a2)
		{
			return ((::System::String*(*)(::System::Object*, ::Newtonsoft::Json::Formatting))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_1_OFFSET))(a1, a2);
		}

		static ::System::String* SerializeObject_2(::System::Object* a1, ::System::Type* a2, ::Newtonsoft::Json::JsonSerializerSettings* a3)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Type*, ::Newtonsoft::Json::JsonSerializerSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_2_OFFSET))(a1, a2, a3);
		}

		static ::System::String* SerializeObject_3(::System::Object* a1, ::Newtonsoft::Json::Formatting a2, ::Newtonsoft::Json::JsonSerializerSettings* a3)
		{
			return ((::System::String*(*)(::System::Object*, ::Newtonsoft::Json::Formatting, ::Newtonsoft::Json::JsonSerializerSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_3_OFFSET))(a1, a2, a3);
		}

		static ::System::String* SerializeObject_4(::System::Object* a1, ::System::Type* a2, ::Newtonsoft::Json::Formatting a3, ::Newtonsoft::Json::JsonSerializerSettings* a4)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Type*, ::Newtonsoft::Json::Formatting, ::Newtonsoft::Json::JsonSerializerSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_4_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* SerializeObjectInternal(::System::Object* a1, ::System::Type* a2, ::Newtonsoft::Json::JsonSerializer* a3)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Type*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECTINTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Object* DeserializeObject(::System::String* a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_DESERIALIZEOBJECT_OFFSET))(a1, a2);
		}

		static ::System::Object* DeserializeObject_1(::System::String* a1, ::System::Type* a2, ::Newtonsoft::Json::JsonSerializerSettings* a3)
		{
			return ((::System::Object*(*)(::System::String*, ::System::Type*, ::Newtonsoft::Json::JsonSerializerSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_DESERIALIZEOBJECT_1_OFFSET))(a1, a2, a3);
		}
	};
}
