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
namespace System::Reflection { class TypeInfo; }

#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_CREATEORNULL_OFFSET UNITYSDK_OFFSET(0x173498C0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GETALLFIELDS_OFFSET UNITYSDK_OFFSET(0x1735C730)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GETALLPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1735C6D0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_BESTMATCHCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1735BBE0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_CONSTRUCTORPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1735BBF0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_ISCLASS_OFFSET UNITYSDK_OFFSET(0x1735BBB0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_ISINTKEY_OFFSET UNITYSDK_OFFSET(0x1735BBA0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_ISSTRINGKEY_OFFSET UNITYSDK_OFFSET(0x1734D530)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_ISSTRUCT_OFFSET UNITYSDK_OFFSET(0x173546F0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_MEMBERS_OFFSET UNITYSDK_OFFSET(0x1735BC00)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_SHOULDUSEFORMATTERRESOLVER_OFFSET UNITYSDK_OFFSET(0x1735BBC0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1735BB90)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_ISCLASSRECORD_OFFSET UNITYSDK_OFFSET(0x1735BFA0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_ISOPTIMIZETARGETTYPE_OFFSET UNITYSDK_OFFSET(0x17351560)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_SET_SHOULDUSEFORMATTERRESOLVER_OFFSET UNITYSDK_OFFSET(0x1735BBD0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_TRYGETNEXTCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1735C7A0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1735BC10)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ObjectSerializationInfo_TypeDefinitionIndex = 9382;

	class ObjectSerializationInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::MessagePack::Internal::ObjectSerializationInfo_EmittableMemberAndConstructorParameter*>* _ConstructorParameters_k__BackingField; // 0x10
		::Il2CppArray<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>* _Members_k__BackingField; // 0x18
		::System::Reflection::ConstructorInfo* _BestmatchConstructor_k__BackingField; // 0x20
		::System::Type* _Type_k__BackingField; // 0x28
		::System::Boolean _ShouldUseFormatterResolver_k__BackingField; // 0x30
		::System::Boolean _IsIntKey_k__BackingField; // 0x31
		::System::Boolean _IsClass_k__BackingField; // 0x32

		::System::Void _ctor(::System::Type* type, ::Il2CppArray<::MessagePack::Internal::ObjectSerializationInfo_EmittableMemberAndConstructorParameter*>* constructorParameters, ::Il2CppArray<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>* members, ::System::Boolean isClass, ::System::Reflection::ConstructorInfo* bestmatchConstructor, ::System::Boolean isIntKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::Il2CppArray<::MessagePack::Internal::ObjectSerializationInfo_EmittableMemberAndConstructorParameter*>*, ::Il2CppArray<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>*, ::System::Boolean, ::System::Reflection::ConstructorInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__CTOR_OFFSET))(this, type, constructorParameters, members, isClass, bestmatchConstructor, isIntKey);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean get_IsIntKey()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_ISINTKEY_OFFSET))(this);
		}

		::System::Boolean get_IsStringKey()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_ISSTRINGKEY_OFFSET))(this);
		}

		::System::Boolean get_IsClass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_ISCLASS_OFFSET))(this);
		}

		::System::Boolean get_IsStruct()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_ISSTRUCT_OFFSET))(this);
		}

		::System::Boolean get_ShouldUseFormatterResolver()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_SHOULDUSEFORMATTERRESOLVER_OFFSET))(this);
		}

		::System::Void set_ShouldUseFormatterResolver(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_SET_SHOULDUSEFORMATTERRESOLVER_OFFSET))(this, value);
		}

		::System::Reflection::ConstructorInfo* get_BestmatchConstructor()
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_BESTMATCHCONSTRUCTOR_OFFSET))(this);
		}

		::Il2CppArray<::MessagePack::Internal::ObjectSerializationInfo_EmittableMemberAndConstructorParameter*>* get_ConstructorParameters()
		{
			return ((::Il2CppArray<::MessagePack::Internal::ObjectSerializationInfo_EmittableMemberAndConstructorParameter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_CONSTRUCTORPARAMETERS_OFFSET))(this);
		}

		::Il2CppArray<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>* get_Members()
		{
			return ((::Il2CppArray<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_MEMBERS_OFFSET))(this);
		}

		static ::MessagePack::Internal::ObjectSerializationInfo* CreateOrNull(::System::Type* type, ::System::Boolean forceStringKey, ::System::Boolean contractless, ::System::Boolean allowPrivate)
		{
			return ((::MessagePack::Internal::ObjectSerializationInfo*(*)(::System::Type*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_CREATEORNULL_OFFSET))(type, forceStringKey, contractless, allowPrivate);
		}

		static ::System::Boolean IsOptimizeTargetType(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_ISOPTIMIZETARGETTYPE_OFFSET))(type);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* GetAllFields(::System::Type* type)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GETALLFIELDS_OFFSET))(type);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* GetAllProperties(::System::Type* type)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GETALLPROPERTIES_OFFSET))(type);
		}

		static ::System::Boolean IsClassRecord(::System::Reflection::TypeInfo* type)
		{
			return ((::System::Boolean(*)(::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_ISCLASSRECORD_OFFSET))(type);
		}

		static ::System::Boolean TryGetNextConstructor(::System::Collections::Generic::IEnumerator_1<::System::Reflection::ConstructorInfo*>* ctorEnumerator, ::System::Reflection::ConstructorInfo*& ctor)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IEnumerator_1<::System::Reflection::ConstructorInfo*>*, ::System::Reflection::ConstructorInfo*&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_TRYGETNEXTCONSTRUCTOR_OFFSET))(ctorEnumerator, ctor);
		}
	};
}
