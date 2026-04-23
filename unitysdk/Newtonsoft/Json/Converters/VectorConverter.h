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

#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x17A5CAE0)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_GET_ENABLEVECTOR2_OFFSET UNITYSDK_OFFSET(0x17A5C240)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_GET_ENABLEVECTOR3_OFFSET UNITYSDK_OFFSET(0x17A5C260)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_GET_ENABLEVECTOR4_OFFSET UNITYSDK_OFFSET(0x17A5C280)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_POPULATEVECTOR2_OFFSET UNITYSDK_OFFSET(0x17A5C8A0)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_POPULATEVECTOR3_OFFSET UNITYSDK_OFFSET(0x17A5C930)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_POPULATEVECTOR4_OFFSET UNITYSDK_OFFSET(0x17A5C9F0)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x17A5C780)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_SET_ENABLEVECTOR2_OFFSET UNITYSDK_OFFSET(0x17A5C250)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_SET_ENABLEVECTOR3_OFFSET UNITYSDK_OFFSET(0x17A5C270)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_SET_ENABLEVECTOR4_OFFSET UNITYSDK_OFFSET(0x17A5C290)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x17A5C2B0)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_WRITEVECTOR_OFFSET UNITYSDK_OFFSET(0x17A5C620)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A5CCA0)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A5C2A0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int VectorConverter_TypeDefinitionIndex = 8569;

	class VectorConverter : public ::Newtonsoft::Json::JsonConverter
	{
	public:
		static ::System::Type** StaticGet_V3()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(VectorConverter_TypeDefinitionIndex)->GetStaticField(0x33AB0);
		}
		static ::System::Type** StaticGet_V2()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(VectorConverter_TypeDefinitionIndex)->GetStaticField(0x33AB8);
		}
		static ::System::Type** StaticGet_V4()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(VectorConverter_TypeDefinitionIndex)->GetStaticField(0x33AC0);
		}
		::System::Boolean _EnableVector3_k__BackingField; // 0x10
		::System::Boolean _EnableVector2_k__BackingField; // 0x11
		::System::Boolean _EnableVector4_k__BackingField; // 0x12

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
