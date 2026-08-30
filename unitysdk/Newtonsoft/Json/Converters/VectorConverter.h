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

#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x1BE75770)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_GET_ENABLEVECTOR2_OFFSET UNITYSDK_OFFSET(0x1BE74970)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_GET_ENABLEVECTOR3_OFFSET UNITYSDK_OFFSET(0x1BE74990)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_GET_ENABLEVECTOR4_OFFSET UNITYSDK_OFFSET(0x1BE749B0)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_POPULATEVECTOR2_OFFSET UNITYSDK_OFFSET(0x1BE753E0)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_POPULATEVECTOR3_OFFSET UNITYSDK_OFFSET(0x1BE754E0)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_POPULATEVECTOR4_OFFSET UNITYSDK_OFFSET(0x1BE75610)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x1BE752C0)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_SET_ENABLEVECTOR2_OFFSET UNITYSDK_OFFSET(0x1BE74980)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_SET_ENABLEVECTOR3_OFFSET UNITYSDK_OFFSET(0x1BE749A0)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_SET_ENABLEVECTOR4_OFFSET UNITYSDK_OFFSET(0x1BE749C0)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x1BE749E0)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_WRITEVECTOR_OFFSET UNITYSDK_OFFSET(0x1BE74D70)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE75980)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE749D0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int VectorConverter_TypeDefinitionIndex = 9763;

	class VectorConverter : public ::Newtonsoft::Json::JsonConverter
	{
	public:
		static ::System::Type** StaticGet_V4()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(VectorConverter_TypeDefinitionIndex)->GetStaticField(0x399C0);
		}
		static ::System::Type** StaticGet_V2()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(VectorConverter_TypeDefinitionIndex)->GetStaticField(0x399C8);
		}
		static ::System::Type** StaticGet_V3()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(VectorConverter_TypeDefinitionIndex)->GetStaticField(0x399D0);
		}
		::System::Boolean _EnableVector2_k__BackingField; // 0x10
		::System::Boolean _EnableVector3_k__BackingField; // 0x11
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

		::System::Void set_EnableVector2(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_SET_ENABLEVECTOR2_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableVector3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_GET_ENABLEVECTOR3_OFFSET))(this);
		}

		::System::Void set_EnableVector3(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_SET_ENABLEVECTOR3_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableVector4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_GET_ENABLEVECTOR4_OFFSET))(this);
		}

		::System::Void set_EnableVector4(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_SET_ENABLEVECTOR4_OFFSET))(this, a1);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* a1, ::System::Object* a2, ::Newtonsoft::Json::JsonSerializer* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_WRITEJSON_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void WriteVector(::Newtonsoft::Json::JsonWriter* a1, ::System::Single a2, ::System::Single a3, ::System::Nullable_1<::System::Single> a4, ::System::Nullable_1<::System::Single> a5)
		{
			return ((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Single, ::System::Single, ::System::Nullable_1<::System::Single>, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_WRITEVECTOR_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* a1, ::System::Type* a2, ::System::Object* a3, ::Newtonsoft::Json::JsonSerializer* a4)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_READJSON_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean CanConvert(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_CANCONVERT_OFFSET))(this, a1);
		}

		static ::UnityEngine::Vector2 PopulateVector2(::Newtonsoft::Json::JsonReader* a1)
		{
			return ((::UnityEngine::Vector2(*)(::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_POPULATEVECTOR2_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 PopulateVector3(::Newtonsoft::Json::JsonReader* a1)
		{
			return ((::UnityEngine::Vector3(*)(::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_POPULATEVECTOR3_OFFSET))(a1);
		}

		static ::UnityEngine::Vector4 PopulateVector4(::Newtonsoft::Json::JsonReader* a1)
		{
			return ((::UnityEngine::Vector4(*)(::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_POPULATEVECTOR4_OFFSET))(a1);
		}
	};
}
