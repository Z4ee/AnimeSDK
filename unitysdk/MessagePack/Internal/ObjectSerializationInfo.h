#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMember; }
namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMemberAndConstructorParameter; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class PropertyInfo; }

#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_CREATEORNULL_OFFSET UNITYSDK_OFFSET(0x1BC55A30)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GETALLFIELDS_OFFSET UNITYSDK_OFFSET(0x1BC5A590)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GETALLPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1BC5A530)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_BESTMATCHCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1BC559C0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_CONSTRUCTORPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1BC559E0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_ISCLASS_OFFSET UNITYSDK_OFFSET(0x1BC55990)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_ISINTKEY_OFFSET UNITYSDK_OFFSET(0x1BC55960)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_ISSTRINGKEY_OFFSET UNITYSDK_OFFSET(0x1BC55980)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_ISSTRUCT_OFFSET UNITYSDK_OFFSET(0x1BC559B0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_MEMBERS_OFFSET UNITYSDK_OFFSET(0x1BC55A00)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1BC55940)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_SET_BESTMATCHCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1BC559D0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_SET_CONSTRUCTORPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1BC559F0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_SET_ISCLASS_OFFSET UNITYSDK_OFFSET(0x1BC559A0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_SET_ISINTKEY_OFFSET UNITYSDK_OFFSET(0x1BC55970)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_SET_MEMBERS_OFFSET UNITYSDK_OFFSET(0x1BC55A10)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1BC55950)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_TRYGETNEXTCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1BC5A5F0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC55A20)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ObjectSerializationInfo_TypeDefinitionIndex = 30383;

	class ObjectSerializationInfo : public ::System::Object
	{
	public:
		::System::Reflection::ConstructorInfo* _BestmatchConstructor_k__BackingField; // 0x10
		::Il2CppArray<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>* _Members_k__BackingField; // 0x18
		::System::Type* _Type_k__BackingField; // 0x20
		::Il2CppArray<::MessagePack::Internal::ObjectSerializationInfo_EmittableMemberAndConstructorParameter*>* _ConstructorParameters_k__BackingField; // 0x28
		::System::Boolean _IsClass_k__BackingField; // 0x30
		::System::Boolean _IsIntKey_k__BackingField; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__CTOR_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_SET_TYPE_OFFSET))(this, value);
		}

		::System::Boolean get_IsIntKey()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_ISINTKEY_OFFSET))(this);
		}

		::System::Void set_IsIntKey(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_SET_ISINTKEY_OFFSET))(this, value);
		}

		::System::Boolean get_IsStringKey()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_ISSTRINGKEY_OFFSET))(this);
		}

		::System::Boolean get_IsClass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_ISCLASS_OFFSET))(this);
		}

		::System::Void set_IsClass(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_SET_ISCLASS_OFFSET))(this, value);
		}

		::System::Boolean get_IsStruct()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_ISSTRUCT_OFFSET))(this);
		}

		::System::Reflection::ConstructorInfo* get_BestmatchConstructor()
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_BESTMATCHCONSTRUCTOR_OFFSET))(this);
		}

		::System::Void set_BestmatchConstructor(::System::Reflection::ConstructorInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_SET_BESTMATCHCONSTRUCTOR_OFFSET))(this, value);
		}

		::Il2CppArray<::MessagePack::Internal::ObjectSerializationInfo_EmittableMemberAndConstructorParameter*>* get_ConstructorParameters()
		{
			return ((::Il2CppArray<::MessagePack::Internal::ObjectSerializationInfo_EmittableMemberAndConstructorParameter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_CONSTRUCTORPARAMETERS_OFFSET))(this);
		}

		::System::Void set_ConstructorParameters(::Il2CppArray<::MessagePack::Internal::ObjectSerializationInfo_EmittableMemberAndConstructorParameter*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MessagePack::Internal::ObjectSerializationInfo_EmittableMemberAndConstructorParameter*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_SET_CONSTRUCTORPARAMETERS_OFFSET))(this, value);
		}

		::Il2CppArray<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>* get_Members()
		{
			return ((::Il2CppArray<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_MEMBERS_OFFSET))(this);
		}

		::System::Void set_Members(::Il2CppArray<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_SET_MEMBERS_OFFSET))(this, value);
		}

		static ::MessagePack::Internal::ObjectSerializationInfo* CreateOrNull(::System::Type* type, ::System::Boolean forceStringKey, ::System::Boolean contractless, ::System::Boolean allowPrivate)
		{
			return ((::MessagePack::Internal::ObjectSerializationInfo*(*)(::System::Type*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_CREATEORNULL_OFFSET))(type, forceStringKey, contractless, allowPrivate);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* GetAllFields(::System::Type* type)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GETALLFIELDS_OFFSET))(type);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* GetAllProperties(::System::Type* type)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GETALLPROPERTIES_OFFSET))(type);
		}

		static ::System::Boolean TryGetNextConstructor(::System::Collections::Generic::IEnumerator_1<::System::Reflection::ConstructorInfo*>* ctorEnumerator, ::System::Reflection::ConstructorInfo*& ctor)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IEnumerator_1<::System::Reflection::ConstructorInfo*>*, ::System::Reflection::ConstructorInfo*&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_TRYGETNEXTCONSTRUCTOR_OFFSET))(ctorEnumerator, ctor);
		}
	};
}
