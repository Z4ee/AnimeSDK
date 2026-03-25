#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonConverter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace System { class Object; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x16431100)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_GET_ENABLEVECTOR2_OFFSET UNITYSDK_OFFSET(0x16430800)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_GET_ENABLEVECTOR3_OFFSET UNITYSDK_OFFSET(0x16430820)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_GET_ENABLEVECTOR4_OFFSET UNITYSDK_OFFSET(0x16430840)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_POPULATEVECTOR2_OFFSET UNITYSDK_OFFSET(0x16430EC0)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_POPULATEVECTOR3_OFFSET UNITYSDK_OFFSET(0x16430F50)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_POPULATEVECTOR4_OFFSET UNITYSDK_OFFSET(0x16431010)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x16430DA0)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_SET_ENABLEVECTOR2_OFFSET UNITYSDK_OFFSET(0x16430810)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_SET_ENABLEVECTOR3_OFFSET UNITYSDK_OFFSET(0x16430830)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_SET_ENABLEVECTOR4_OFFSET UNITYSDK_OFFSET(0x16430850)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x16430870)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_WRITEVECTOR_OFFSET UNITYSDK_OFFSET(0x16430C70)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x164312C0)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16430860)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int VectorConverter_TypeDefinitionIndex = 8423;

	class VectorConverter : public ::Newtonsoft::Json::JsonConverter
	{
	public:
		static ::System::Type** StaticGet_V3()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(VectorConverter_TypeDefinitionIndex)->GetStaticField(0x17E50);
		}
		static ::System::Type** StaticGet_V4()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(VectorConverter_TypeDefinitionIndex)->GetStaticField(0x17E58);
		}
		static ::System::Type** StaticGet_V2()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(VectorConverter_TypeDefinitionIndex)->GetStaticField(0x17E60);
		}
		::System::Boolean _EnableVector4_k__BackingField; // 0x10
		::System::Boolean _EnableVector2_k__BackingField; // 0x11
		::System::Boolean _EnableVector3_k__BackingField; // 0x12

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER__CCTOR_OFFSET))();
		}

		::System::Boolean get_EnableVector2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_GET_ENABLEVECTOR2_OFFSET))(this);
		}

		::System::Void set_EnableVector2(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_SET_ENABLEVECTOR2_OFFSET))(this, value);
		}

		::System::Boolean get_EnableVector3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_GET_ENABLEVECTOR3_OFFSET))(this);
		}

		::System::Void set_EnableVector3(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_SET_ENABLEVECTOR3_OFFSET))(this, value);
		}

		::System::Boolean get_EnableVector4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_GET_ENABLEVECTOR4_OFFSET))(this);
		}

		::System::Void set_EnableVector4(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_SET_ENABLEVECTOR4_OFFSET))(this, value);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_WRITEJSON_OFFSET))(this, writer, value, serializer);
		}

		static ::System::Void WriteVector(::Newtonsoft::Json::JsonWriter* writer, ::System::Single x, ::System::Single y, ::System::Nullable_1<::System::Single> z, ::System::Nullable_1<::System::Single> w)
		{
			return ((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Single, ::System::Single, ::System::Nullable_1<::System::Single>, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_WRITEVECTOR_OFFSET))(writer, x, y, z, w);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_READJSON_OFFSET))(this, reader, objectType, existingValue, serializer);
		}

		::System::Boolean CanConvert(::System::Type* objectType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_CANCONVERT_OFFSET))(this, objectType);
		}

		static ::UnityEngine::Vector2 PopulateVector2(::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::UnityEngine::Vector2(*)(::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_POPULATEVECTOR2_OFFSET))(reader);
		}

		static ::UnityEngine::Vector3 PopulateVector3(::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::UnityEngine::Vector3(*)(::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_POPULATEVECTOR3_OFFSET))(reader);
		}

		static ::UnityEngine::Vector4 PopulateVector4(::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::UnityEngine::Vector4(*)(::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_POPULATEVECTOR4_OFFSET))(reader);
		}
	};
}
