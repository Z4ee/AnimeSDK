#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/TwoWaySerializationBinder.h"

namespace Sirenix::Serialization { class DebugContext; }
namespace System { class AssemblyLoadEventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class Assembly; }

#define SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_BINDTONAME_OFFSET UNITYSDK_OFFSET(0x1D545BB0)
#define SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_BINDTOTYPE_OFFSET UNITYSDK_OFFSET(0x1D546700)
#define SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_CONTAINSTYPE_OFFSET UNITYSDK_OFFSET(0x1D546570)
#define SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_PARSEGENERICANDORARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x1D547440)
#define SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_PARSENAME_OFFSET UNITYSDK_OFFSET(0x1D5479A0)
#define SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_PARSETYPENAME_OFFSET UNITYSDK_OFFSET(0x1D546AD0)
#define SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_PEEK_OFFSET UNITYSDK_OFFSET(0x1D548250)
#define SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_READGENERICARG_OFFSET UNITYSDK_OFFSET(0x1D5482D0)
#define SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_REGISTERALLQUEUEDASSEMBLIESREPEATING_OFFSET UNITYSDK_OFFSET(0x1D544E10)
#define SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_REGISTERASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1D545520)
#define SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_REGISTERQUEUEDASSEMBLIES_OFFSET UNITYSDK_OFFSET(0x1D544E90)
#define SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_REGISTERQUEUEDASSEMBLYLOADEVENTS_OFFSET UNITYSDK_OFFSET(0x1D5451B0)
#define SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_TRYPARSEGENERICANDORARRAYTYPENAME_OFFSET UNITYSDK_OFFSET(0x1D547BE0)
#define SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5446B0)
#define SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D548430)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int DefaultSerializationBinder_TypeDefinitionIndex = 7500;

	class DefaultSerializationBinder : public ::Sirenix::Serialization::TwoWaySerializationBinder
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>** StaticGet_nameMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DefaultSerializationBinder_TypeDefinitionIndex)->GetStaticField(0x61D0);
		}
		static ::System::Collections::Generic::List_1<::System::Reflection::Assembly*>** StaticGet_assembliesQueuedForRegister()
		{
			return (::System::Collections::Generic::List_1<::System::Reflection::Assembly*>**)Il2CppClass::FromTypeDefinitionIndex(DefaultSerializationBinder_TypeDefinitionIndex)->GetStaticField(0x61D8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>** StaticGet_customTypeNameToTypeBindings()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(DefaultSerializationBinder_TypeDefinitionIndex)->GetStaticField(0x61E0);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_genericArgNamesList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DefaultSerializationBinder_TypeDefinitionIndex)->GetStaticField(0x61E8);
		}
		static ::System::Object** StaticGet_ASSEMBLY_LOOKUP_LOCK()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DefaultSerializationBinder_TypeDefinitionIndex)->GetStaticField(0x61F0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::Assembly*>** StaticGet_assemblyNameLookUp()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::Assembly*>**)Il2CppClass::FromTypeDefinitionIndex(DefaultSerializationBinder_TypeDefinitionIndex)->GetStaticField(0x61F8);
		}
		static ::System::Collections::Generic::List_1<::System::AssemblyLoadEventArgs*>** StaticGet_assemblyLoadEventsQueuedForRegister()
		{
			return (::System::Collections::Generic::List_1<::System::AssemblyLoadEventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(DefaultSerializationBinder_TypeDefinitionIndex)->GetStaticField(0x6200);
		}
		static ::System::Collections::Generic::List_1<::System::Type*>** StaticGet_genericArgTypesList()
		{
			return (::System::Collections::Generic::List_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(DefaultSerializationBinder_TypeDefinitionIndex)->GetStaticField(0x6208);
		}
		static ::System::Object** StaticGet_ASSEMBLY_REGISTER_QUEUE_LOCK()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DefaultSerializationBinder_TypeDefinitionIndex)->GetStaticField(0x6210);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>** StaticGet_typeMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(DefaultSerializationBinder_TypeDefinitionIndex)->GetStaticField(0x6218);
		}
		static ::System::Object** StaticGet_TYPETONAME_LOCK()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DefaultSerializationBinder_TypeDefinitionIndex)->GetStaticField(0x6220);
		}
		static ::System::Object** StaticGet_NAMETOTYPE_LOCK()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DefaultSerializationBinder_TypeDefinitionIndex)->GetStaticField(0x6228);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER__CTOR_OFFSET))(this);
		}

		static ::System::Void RegisterAllQueuedAssembliesRepeating()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_REGISTERALLQUEUEDASSEMBLIESREPEATING_OFFSET))();
		}

		static ::System::Boolean RegisterQueuedAssemblies()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_REGISTERQUEUEDASSEMBLIES_OFFSET))();
		}

		static ::System::Boolean RegisterQueuedAssemblyLoadEvents()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_REGISTERQUEUEDASSEMBLYLOADEVENTS_OFFSET))();
		}

		static ::System::Void RegisterAssembly(::System::Reflection::Assembly* assembly)
		{
			return ((::System::Void(*)(::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_REGISTERASSEMBLY_OFFSET))(assembly);
		}

		::System::String* BindToName(::System::Type* type, ::Sirenix::Serialization::DebugContext* debugContext)
		{
			return ((::System::String*(*)(::PVOID, ::System::Type*, ::Sirenix::Serialization::DebugContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_BINDTONAME_OFFSET))(this, type, debugContext);
		}

		::System::Boolean ContainsType(::System::String* typeName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_CONTAINSTYPE_OFFSET))(this, typeName);
		}

		::System::Type* BindToType(::System::String* typeName, ::Sirenix::Serialization::DebugContext* debugContext)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::Sirenix::Serialization::DebugContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_BINDTOTYPE_OFFSET))(this, typeName, debugContext);
		}

		::System::Type* ParseTypeName(::System::String* typeName, ::Sirenix::Serialization::DebugContext* debugContext)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::Sirenix::Serialization::DebugContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_PARSETYPENAME_OFFSET))(this, typeName, debugContext);
		}

		static ::System::Void ParseName(::System::String* fullName, ::System::String*& typeName, ::System::String*& assemblyName)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_PARSENAME_OFFSET))(fullName, typeName, assemblyName);
		}

		::System::Type* ParseGenericAndOrArrayType(::System::String* typeName, ::Sirenix::Serialization::DebugContext* debugContext)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::Sirenix::Serialization::DebugContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_PARSEGENERICANDORARRAYTYPE_OFFSET))(this, typeName, debugContext);
		}

		static ::System::Boolean TryParseGenericAndOrArrayTypeName(::System::String* typeName, ::System::String*& actualTypeName, ::System::Boolean& isGeneric, ::System::Collections::Generic::List_1<::System::String*>*& genericArgNames, ::System::Boolean& isArray, ::System::Int32& arrayRank)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*&, ::System::Boolean&, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Boolean&, ::System::Int32&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_TRYPARSEGENERICANDORARRAYTYPENAME_OFFSET))(typeName, actualTypeName, isGeneric, genericArgNames, isArray, arrayRank);
		}

		static ::System::Char Peek(::System::String* str, ::System::Int32 i, ::System::Int32 ahead)
		{
			return ((::System::Char(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_PEEK_OFFSET))(str, i, ahead);
		}

		static ::System::Boolean ReadGenericArg(::System::String* typeName, ::System::Int32& i, ::System::String*& argName)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32&, ::System::String*&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_READGENERICARG_OFFSET))(typeName, i, argName);
		}
	};
}
