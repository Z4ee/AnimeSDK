#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Serialization { class JsonProperty; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class MemberInfo; }

#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16476BF0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__CREATEPROPERTIES_B__60_0_OFFSET UNITYSDK_OFFSET(0x16477160)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16476C20)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__GETATTRIBUTECONSTRUCTOR_B__36_0_OFFSET UNITYSDK_OFFSET(0x16477100)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__GETEXTENSIONDATAMEMBERFORTYPE_B__33_0_OFFSET UNITYSDK_OFFSET(0x16476C90)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__GETEXTENSIONDATAMEMBERFORTYPE_B__33_1_OFFSET UNITYSDK_OFFSET(0x16476D20)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__GETSERIALIZABLEMEMBERS_B__30_0_OFFSET UNITYSDK_OFFSET(0x16476C30)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__GETSERIALIZABLEMEMBERS_B__30_1_OFFSET UNITYSDK_OFFSET(0x16476C60)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int DefaultContractResolver___c_TypeDefinitionIndex = 8310;

	class DefaultContractResolver___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::Boolean>** StaticGet___9__30_1()
		{
			return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DefaultContractResolver___c_TypeDefinitionIndex)->GetStaticField(0x18F90);
		}
		static ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Int32>** StaticGet___9__60_0()
		{
			return (::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DefaultContractResolver___c_TypeDefinitionIndex)->GetStaticField(0x18F98);
		}
		static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::Boolean>** StaticGet___9__30_0()
		{
			return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DefaultContractResolver___c_TypeDefinitionIndex)->GetStaticField(0x18FA0);
		}
		static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::Boolean>** StaticGet___9__33_1()
		{
			return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DefaultContractResolver___c_TypeDefinitionIndex)->GetStaticField(0x18FA8);
		}
		static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>** StaticGet___9__36_0()
		{
			return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DefaultContractResolver___c_TypeDefinitionIndex)->GetStaticField(0x18FB0);
		}
		static ::Newtonsoft::Json::Serialization::DefaultContractResolver___c** StaticGet___9()
		{
			return (::Newtonsoft::Json::Serialization::DefaultContractResolver___c**)Il2CppClass::FromTypeDefinitionIndex(DefaultContractResolver___c_TypeDefinitionIndex)->GetStaticField(0x18FB8);
		}
		static ::System::Func_2<::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>*>** StaticGet___9__33_0()
		{
			return (::System::Func_2<::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(DefaultContractResolver___c_TypeDefinitionIndex)->GetStaticField(0x18FC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSerializableMembers_b__30_0(::System::Reflection::MemberInfo* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__GETSERIALIZABLEMEMBERS_B__30_0_OFFSET))(this, m);
		}

		::System::Boolean _GetSerializableMembers_b__30_1(::System::Reflection::MemberInfo* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__GETSERIALIZABLEMEMBERS_B__30_1_OFFSET))(this, m);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>* _GetExtensionDataMemberForType_b__33_0(::System::Type* baseType)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__GETEXTENSIONDATAMEMBERFORTYPE_B__33_0_OFFSET))(this, baseType);
		}

		::System::Boolean _GetExtensionDataMemberForType_b__33_1(::System::Reflection::MemberInfo* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__GETEXTENSIONDATAMEMBERFORTYPE_B__33_1_OFFSET))(this, m);
		}

		::System::Boolean _GetAttributeConstructor_b__36_0(::System::Reflection::ConstructorInfo* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__GETATTRIBUTECONSTRUCTOR_B__36_0_OFFSET))(this, c);
		}

		::System::Int32 _CreateProperties_b__60_0(::Newtonsoft::Json::Serialization::JsonProperty* p)
		{
			return ((::System::Int32(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__CREATEPROPERTIES_B__60_0_OFFSET))(this, p);
		}
	};
}
