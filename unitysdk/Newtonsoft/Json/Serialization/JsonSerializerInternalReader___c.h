#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Serialization/JsonSerializerInternalReader_PropertyPresence.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Serialization { class JsonProperty; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F733F00)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER___C__CREATEOBJECTUSINGCREATORWITHPARAMETERS_B__36_0_OFFSET UNITYSDK_OFFSET(0x1F733F50)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER___C__CREATEOBJECTUSINGCREATORWITHPARAMETERS_B__36_2_OFFSET UNITYSDK_OFFSET(0x1F733F70)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F733F40)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER___C__POPULATEOBJECT_B__41_0_OFFSET UNITYSDK_OFFSET(0x1F733F90)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER___C__POPULATEOBJECT_B__41_1_OFFSET UNITYSDK_OFFSET(0x1F733FA0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonSerializerInternalReader___c_TypeDefinitionIndex = 7145;

	class JsonSerializerInternalReader___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::System::String*>** StaticGet___9__36_2()
		{
			return (::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(JsonSerializerInternalReader___c_TypeDefinitionIndex)->GetStaticField(0x5E90);
		}
		static ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c** StaticGet___9()
		{
			return (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c**)Il2CppClass::FromTypeDefinitionIndex(JsonSerializerInternalReader___c_TypeDefinitionIndex)->GetStaticField(0x5E98);
		}
		static ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::System::String*>** StaticGet___9__36_0()
		{
			return (::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(JsonSerializerInternalReader___c_TypeDefinitionIndex)->GetStaticField(0x5EA0);
		}
		static ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonProperty*>** StaticGet___9__41_0()
		{
			return (::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonProperty*>**)Il2CppClass::FromTypeDefinitionIndex(JsonSerializerInternalReader___c_TypeDefinitionIndex)->GetStaticField(0x5EA8);
		}
		static ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence>** StaticGet___9__41_1()
		{
			return (::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence>**)Il2CppClass::FromTypeDefinitionIndex(JsonSerializerInternalReader___c_TypeDefinitionIndex)->GetStaticField(0x5EB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER___C__CTOR_OFFSET))(this);
		}

		::System::String* _CreateObjectUsingCreatorWithParameters_b__36_0(::Newtonsoft::Json::Serialization::JsonProperty* p)
		{
			return ((::System::String*(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER___C__CREATEOBJECTUSINGCREATORWITHPARAMETERS_B__36_0_OFFSET))(this, p);
		}

		::System::String* _CreateObjectUsingCreatorWithParameters_b__36_2(::Newtonsoft::Json::Serialization::JsonProperty* p)
		{
			return ((::System::String*(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER___C__CREATEOBJECTUSINGCREATORWITHPARAMETERS_B__36_2_OFFSET))(this, p);
		}

		::Newtonsoft::Json::Serialization::JsonProperty* _PopulateObject_b__41_0(::Newtonsoft::Json::Serialization::JsonProperty* m)
		{
			return ((::Newtonsoft::Json::Serialization::JsonProperty*(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER___C__POPULATEOBJECT_B__41_0_OFFSET))(this, m);
		}

		::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence _PopulateObject_b__41_1(::Newtonsoft::Json::Serialization::JsonProperty* m)
		{
			return ((::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER___C__POPULATEOBJECT_B__41_1_OFFSET))(this, m);
		}
	};
}
