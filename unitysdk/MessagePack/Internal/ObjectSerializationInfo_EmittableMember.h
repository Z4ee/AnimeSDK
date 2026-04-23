#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackFormatterAttribute; }
namespace System { class Delegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class PropertyInfo; }
namespace System::Reflection { class TypeInfo; }
namespace System::Reflection::Emit { class FieldBuilder; }
namespace System::Reflection::Emit { class ILGenerator; }
namespace System::Reflection::Emit { class LocalBuilder; }
namespace System::Reflection::Emit { class TypeBuilder; }
namespace System::Runtime::Serialization { class DataMemberAttribute; }

#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_EMITLOADVALUE_OFFSET UNITYSDK_OFFSET(0x17351410)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_EMITPRESTOREVALUE_OFFSET UNITYSDK_OFFSET(0x17354F90)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_EMITSTOREVALUE_OFFSET UNITYSDK_OFFSET(0x17354090)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GETDATAMEMBERATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1735CCC0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GETMESSAGEPACKFORMATTERATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x173506F0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GET_FIELDINFO_OFFSET UNITYSDK_OFFSET(0x1735C0A0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GET_INTKEY_OFFSET UNITYSDK_OFFSET(0x1735E0E0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GET_ISEXPLICITCONTRACT_OFFSET UNITYSDK_OFFSET(0x1735E130)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GET_ISINITONLY_OFFSET UNITYSDK_OFFSET(0x1735BDE0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GET_ISPROBLEMATICINITPROPERTY_OFFSET UNITYSDK_OFFSET(0x1735E150)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GET_ISPROPERTY_OFFSET UNITYSDK_OFFSET(0x173509F0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GET_ISREADABLE_OFFSET UNITYSDK_OFFSET(0x1735E0C0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GET_ISVALUETYPE_OFFSET UNITYSDK_OFFSET(0x17354350)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GET_ISWRITABLE_OFFSET UNITYSDK_OFFSET(0x1735E080)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GET_ISWRITTENBYCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1735E0A0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GET_MEMBERINFO_OFFSET UNITYSDK_OFFSET(0x1735E120)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x173507A0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GET_PROPERTYINFO_OFFSET UNITYSDK_OFFSET(0x1735BF50)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GET_STRINGKEY_OFFSET UNITYSDK_OFFSET(0x1735E100)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x17350860)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_ONTYPECREATED_OFFSET UNITYSDK_OFFSET(0x173502F0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_SET_INTKEY_OFFSET UNITYSDK_OFFSET(0x1735E0F0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_SET_ISEXPLICITCONTRACT_OFFSET UNITYSDK_OFFSET(0x1735E140)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_SET_ISPROBLEMATICINITPROPERTY_OFFSET UNITYSDK_OFFSET(0x1735E160)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_SET_ISREADABLE_OFFSET UNITYSDK_OFFSET(0x1735E0D0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_SET_ISWRITABLE_OFFSET UNITYSDK_OFFSET(0x1735E090)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_SET_ISWRITTENBYCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1735E0B0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_SET_STRINGKEY_OFFSET UNITYSDK_OFFSET(0x1735E110)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1735D170)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ObjectSerializationInfo_EmittableMember_TypeDefinitionIndex = 9384;

	class ObjectSerializationInfo_EmittableMember : public ::System::Object
	{
	public:
		::System::String* _StringKey_k__BackingField; // 0x10
		::System::Reflection::MemberInfo* _MemberInfo_k__BackingField; // 0x18
		::System::Reflection::Emit::FieldBuilder* setterHelperField; // 0x20
		::System::Delegate* setterHelperDelegate; // 0x28
		::System::Int32 _IntKey_k__BackingField; // 0x30
		::System::Boolean _IsWritable_k__BackingField; // 0x34
		::System::Boolean _IsExplicitContract_k__BackingField; // 0x35
		::System::Boolean _IsWrittenByConstructor_k__BackingField; // 0x36
		::System::Boolean _IsReadable_k__BackingField; // 0x37
		::System::Boolean _IsProblematicInitProperty_k__BackingField; // 0x38

		::System::Void _ctor(::System::Reflection::MemberInfo* memberInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER__CTOR_OFFSET))(this, memberInfo);
		}

		::System::Boolean get_IsProperty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GET_ISPROPERTY_OFFSET))(this);
		}

		::System::Boolean get_IsWritable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GET_ISWRITABLE_OFFSET))(this);
		}

		::System::Void set_IsWritable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_SET_ISWRITABLE_OFFSET))(this, value);
		}

		::System::Boolean get_IsWrittenByConstructor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GET_ISWRITTENBYCONSTRUCTOR_OFFSET))(this);
		}

		::System::Void set_IsWrittenByConstructor(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_SET_ISWRITTENBYCONSTRUCTOR_OFFSET))(this, value);
		}

		::System::Boolean get_IsInitOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GET_ISINITONLY_OFFSET))(this);
		}

		::System::Boolean get_IsReadable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GET_ISREADABLE_OFFSET))(this);
		}

		::System::Void set_IsReadable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_SET_ISREADABLE_OFFSET))(this, value);
		}

		::System::Int32 get_IntKey()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GET_INTKEY_OFFSET))(this);
		}

		::System::Void set_IntKey(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_SET_INTKEY_OFFSET))(this, value);
		}

		::System::String* get_StringKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GET_STRINGKEY_OFFSET))(this);
		}

		::System::Void set_StringKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_SET_STRINGKEY_OFFSET))(this, value);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GET_TYPE_OFFSET))(this);
		}

		::System::Reflection::MemberInfo* get_MemberInfo()
		{
			return ((::System::Reflection::MemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GET_MEMBERINFO_OFFSET))(this);
		}

		::System::Reflection::FieldInfo* get_FieldInfo()
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GET_FIELDINFO_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GET_NAME_OFFSET))(this);
		}

		::System::Reflection::PropertyInfo* get_PropertyInfo()
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GET_PROPERTYINFO_OFFSET))(this);
		}

		::System::Boolean get_IsValueType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GET_ISVALUETYPE_OFFSET))(this);
		}

		::System::Boolean get_IsExplicitContract()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GET_ISEXPLICITCONTRACT_OFFSET))(this);
		}

		::System::Void set_IsExplicitContract(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_SET_ISEXPLICITCONTRACT_OFFSET))(this, value);
		}

		::System::Boolean get_IsProblematicInitProperty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GET_ISPROBLEMATICINITPROPERTY_OFFSET))(this);
		}

		::System::Void set_IsProblematicInitProperty(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_SET_ISPROBLEMATICINITPROPERTY_OFFSET))(this, value);
		}

		::MessagePack::MessagePackFormatterAttribute* GetMessagePackFormatterAttribute()
		{
			return ((::MessagePack::MessagePackFormatterAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GETMESSAGEPACKFORMATTERATTRIBUTE_OFFSET))(this);
		}

		::System::Runtime::Serialization::DataMemberAttribute* GetDataMemberAttribute()
		{
			return ((::System::Runtime::Serialization::DataMemberAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_GETDATAMEMBERATTRIBUTE_OFFSET))(this);
		}

		::System::Void EmitLoadValue(::System::Reflection::Emit::ILGenerator* il)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_EMITLOADVALUE_OFFSET))(this, il);
		}

		::System::Void OnTypeCreated(::System::Reflection::TypeInfo* formatterType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_ONTYPECREATED_OFFSET))(this, formatterType);
		}

		::System::Void EmitPreStoreValue(::System::Reflection::Emit::TypeBuilder* typeBuilder, ::System::Reflection::Emit::ILGenerator* il, ::System::Reflection::Emit::LocalBuilder* localResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::TypeBuilder*, ::System::Reflection::Emit::ILGenerator*, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_EMITPRESTOREVALUE_OFFSET))(this, typeBuilder, il, localResult);
		}

		::System::Void EmitStoreValue(::System::Reflection::Emit::ILGenerator* il, ::System::Reflection::Emit::TypeBuilder* typeBuilder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::ILGenerator*, ::System::Reflection::Emit::TypeBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER_EMITSTOREVALUE_OFFSET))(this, il, typeBuilder);
		}
	};
}
