#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberInfo; }

#define BEHAVIORDESIGNER_RUNTIME_TASKUTILITY_COMPARETYPE_OFFSET UNITYSDK_OFFSET(0x1D10F8F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKUTILITY_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1D10EB20)
#define BEHAVIORDESIGNER_RUNTIME_TASKUTILITY_GETALLFIELDS_OFFSET UNITYSDK_OFFSET(0x1D10EBD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKUTILITY_GETFIELDS_OFFSET UNITYSDK_OFFSET(0x1D10EEA0)
#define BEHAVIORDESIGNER_RUNTIME_TASKUTILITY_GETNAME_OFFSET UNITYSDK_OFFSET(0x1D10F9B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKUTILITY_GETPUBLICFIELDS_OFFSET UNITYSDK_OFFSET(0x1D10F1F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKUTILITY_GETSERIALIZABLEFIELDS_1_OFFSET UNITYSDK_OFFSET(0x1D10F4C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKUTILITY_GETSERIALIZABLEFIELDS_OFFSET UNITYSDK_OFFSET(0x1D105790)
#define BEHAVIORDESIGNER_RUNTIME_TASKUTILITY_GETTYPEWITHINASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1D0FF230)
#define BEHAVIORDESIGNER_RUNTIME_TASKUTILITY_HASATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D1060B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D10FBB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKUTILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D10FBA0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int TaskUtility_TypeDefinitionIndex = 33268;

	class TaskUtility : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::System::String*>** StaticGet_memberNameLookup()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TaskUtility_TypeDefinitionIndex)->GetStaticField(0x274C0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Il2CppArray<::System::Reflection::FieldInfo*>*>** StaticGet_publicFieldsLookup()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Il2CppArray<::System::Reflection::FieldInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(TaskUtility_TypeDefinitionIndex)->GetStaticField(0x274C8);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_TrimCharacters()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TaskUtility_TypeDefinitionIndex)->GetStaticField(0x274D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Il2CppArray<::System::Reflection::FieldInfo*>*>** StaticGet_allFieldsLookup()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Il2CppArray<::System::Reflection::FieldInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(TaskUtility_TypeDefinitionIndex)->GetStaticField(0x274D8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>** StaticGet_typeLookup()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(TaskUtility_TypeDefinitionIndex)->GetStaticField(0x274E0);
		}
		static ::System::Collections::Generic::List_1<::System::Reflection::Assembly*>** StaticGet_loadedAssemblies()
		{
			return (::System::Collections::Generic::List_1<::System::Reflection::Assembly*>**)Il2CppClass::FromTypeDefinitionIndex(TaskUtility_TypeDefinitionIndex)->GetStaticField(0x274E8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Il2CppArray<::System::Reflection::FieldInfo*>*>** StaticGet_serializableFieldsLookup()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Il2CppArray<::System::Reflection::FieldInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(TaskUtility_TypeDefinitionIndex)->GetStaticField(0x274F0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Reflection::FieldInfo*, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Boolean>*>** StaticGet_hasFieldLookup()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Reflection::FieldInfo*, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(TaskUtility_TypeDefinitionIndex)->GetStaticField(0x274F8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKUTILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKUTILITY__CCTOR_OFFSET))();
		}

		static ::System::Object* CreateInstance(::System::Type* t)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKUTILITY_CREATEINSTANCE_OFFSET))(t);
		}

		static ::Il2CppArray<::System::Reflection::FieldInfo*>* GetAllFields(::System::Type* t)
		{
			return ((::Il2CppArray<::System::Reflection::FieldInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKUTILITY_GETALLFIELDS_OFFSET))(t);
		}

		static ::Il2CppArray<::System::Reflection::FieldInfo*>* GetPublicFields(::System::Type* t)
		{
			return ((::Il2CppArray<::System::Reflection::FieldInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKUTILITY_GETPUBLICFIELDS_OFFSET))(t);
		}

		static ::Il2CppArray<::System::Reflection::FieldInfo*>* GetSerializableFields(::System::Type* t)
		{
			return ((::Il2CppArray<::System::Reflection::FieldInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKUTILITY_GETSERIALIZABLEFIELDS_OFFSET))(t);
		}

		static ::System::Void GetSerializableFields_1(::System::Type* t, ::System::Collections::Generic::IList_1<::System::Reflection::FieldInfo*>* fieldList, ::System::Int32 flags)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Collections::Generic::IList_1<::System::Reflection::FieldInfo*>*, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKUTILITY_GETSERIALIZABLEFIELDS_1_OFFSET))(t, fieldList, flags);
		}

		static ::System::Void GetFields(::System::Type* t, ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>*& fieldList, ::System::Int32 flags)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>*&, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKUTILITY_GETFIELDS_OFFSET))(t, fieldList, flags);
		}

		static ::System::Type* GetTypeWithinAssembly(::System::String* typeName)
		{
			return ((::System::Type*(*)(::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKUTILITY_GETTYPEWITHINASSEMBLY_OFFSET))(typeName);
		}

		static ::System::Boolean CompareType(::System::Type* t, ::System::String* typeName)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKUTILITY_COMPARETYPE_OFFSET))(t, typeName);
		}

		static ::System::Boolean HasAttribute(::System::Reflection::FieldInfo* field, ::System::Type* attribute)
		{
			return ((::System::Boolean(*)(::System::Reflection::FieldInfo*, ::System::Type*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKUTILITY_HASATTRIBUTE_OFFSET))(field, attribute);
		}

		static ::System::String* GetName(::System::Reflection::MemberInfo* member)
		{
			return ((::System::String*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKUTILITY_GETNAME_OFFSET))(member);
		}
	};
}
