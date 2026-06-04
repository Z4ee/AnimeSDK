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

#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_CREATEORNULL_OFFSET UNITYSDK_OFFSET(0x18157640)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GETALLFIELDS_OFFSET UNITYSDK_OFFSET(0x18169A90)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GETALLPROPERTIES_OFFSET UNITYSDK_OFFSET(0x18169A30)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_BESTMATCHCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x18168F20)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_CONSTRUCTORPARAMETERS_OFFSET UNITYSDK_OFFSET(0x18168F30)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_ISCLASS_OFFSET UNITYSDK_OFFSET(0x18168EF0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_ISINTKEY_OFFSET UNITYSDK_OFFSET(0x18168EE0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_ISSTRINGKEY_OFFSET UNITYSDK_OFFSET(0x1815B470)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_ISSTRUCT_OFFSET UNITYSDK_OFFSET(0x181623A0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_MEMBERS_OFFSET UNITYSDK_OFFSET(0x18168F40)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_SHOULDUSEFORMATTERRESOLVER_OFFSET UNITYSDK_OFFSET(0x18168F00)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x18168ED0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_ISCLASSRECORD_OFFSET UNITYSDK_OFFSET(0x18169340)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_ISOPTIMIZETARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1815F380)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_SET_SHOULDUSEFORMATTERRESOLVER_OFFSET UNITYSDK_OFFSET(0x18168F10)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_TRYGETNEXTCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x18169B00)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18168F50)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ObjectSerializationInfo_TypeDefinitionIndex = 7285;

	class ObjectSerializationInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::MessagePack::Internal::ObjectSerializationInfo_EmittableMemberAndConstructorParameter*>* _ConstructorParameters_k__BackingField; // 0x10
		::Il2CppArray<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>* _Members_k__BackingField; // 0x18
		::System::Reflection::ConstructorInfo* _BestmatchConstructor_k__BackingField; // 0x20
		::System::Type* _Type_k__BackingField; // 0x28
		::System::Boolean _IsIntKey_k__BackingField; // 0x30
		::System::Boolean _IsClass_k__BackingField; // 0x31
		::System::Boolean _ShouldUseFormatterResolver_k__BackingField; // 0x32

		::System::Void _ctor(::System::Type* a1, ::Il2CppArray<::MessagePack::Internal::ObjectSerializationInfo_EmittableMemberAndConstructorParameter*>* a2, ::Il2CppArray<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>* a3, ::System::Boolean a4, ::System::Reflection::ConstructorInfo* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::Il2CppArray<::MessagePack::Internal::ObjectSerializationInfo_EmittableMemberAndConstructorParameter*>*, ::Il2CppArray<::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>*, ::System::Boolean, ::System::Reflection::ConstructorInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
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

		::System::Void set_ShouldUseFormatterResolver(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_SET_SHOULDUSEFORMATTERRESOLVER_OFFSET))(this, a1);
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

		static ::MessagePack::Internal::ObjectSerializationInfo* CreateOrNull(::System::Type* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::MessagePack::Internal::ObjectSerializationInfo*(*)(::System::Type*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_CREATEORNULL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean IsOptimizeTargetType(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_ISOPTIMIZETARGETTYPE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* GetAllFields(::System::Type* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GETALLFIELDS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* GetAllProperties(::System::Type* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_GETALLPROPERTIES_OFFSET))(a1);
		}

		static ::System::Boolean IsClassRecord(::System::Reflection::TypeInfo* a1)
		{
			return ((::System::Boolean(*)(::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_ISCLASSRECORD_OFFSET))(a1);
		}

		static ::System::Boolean TryGetNextConstructor(::System::Collections::Generic::IEnumerator_1<::System::Reflection::ConstructorInfo*>* a1, ::System::Reflection::ConstructorInfo*& a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IEnumerator_1<::System::Reflection::ConstructorInfo*>*, ::System::Reflection::ConstructorInfo*&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_TRYGETNEXTCONSTRUCTOR_OFFSET))(a1, a2);
		}
	};
}
