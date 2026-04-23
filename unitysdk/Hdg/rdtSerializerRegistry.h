#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Hdg/rdtTcpMessageComponents_Property.h"
#include "unitysdk/Hdg/rdtTcpMessageComponents_Property_Type.h"
#include "unitysdk/System/Object.h"

namespace Hdg { class rdtSerializerRegistry_ConvertObjectDelegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IList; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MemberInfo; }
namespace UnityEngine { class RangeAttribute; }

#define HDG_RDTSERIALIZERREGISTRY_ADDDONTREADPROPERTIES_OFFSET UNITYSDK_OFFSET(0x8C299B0)
#define HDG_RDTSERIALIZERREGISTRY_ADDFIELD_OFFSET UNITYSDK_OFFSET(0x8C24BA0)
#define HDG_RDTSERIALIZERREGISTRY_ADDINCLUDEFORTYPE_OFFSET UNITYSDK_OFFSET(0x8C29A30)
#define HDG_RDTSERIALIZERREGISTRY_ADDSKIPFORTYPE_OFFSET UNITYSDK_OFFSET(0x8C297E0)
#define HDG_RDTSERIALIZERREGISTRY_ADDUNKNOWNPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x8C181F0)
#define HDG_RDTSERIALIZERREGISTRY_CANADDMEMBER_OFFSET UNITYSDK_OFFSET(0x8C287F0)
#define HDG_RDTSERIALIZERREGISTRY_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x8C23860)
#define HDG_RDTSERIALIZERREGISTRY_HASINCLUDEPERTYPE_OFFSET UNITYSDK_OFFSET(0x8C288E0)
#define HDG_RDTSERIALIZERREGISTRY_INCLUDEMEMBER_OFFSET UNITYSDK_OFFSET(0x8C28960)
#define HDG_RDTSERIALIZERREGISTRY_INITSKIPPROPERTIES_OFFSET UNITYSDK_OFFSET(0x8C25950)
#define HDG_RDTSERIALIZERREGISTRY_MAKENEWLIST_OFFSET UNITYSDK_OFFSET(0x8C28BA0)
#define HDG_RDTSERIALIZERREGISTRY_NOTHANDLEDCONVERSION_OFFSET UNITYSDK_OFFSET(0x8C25920)
#define HDG_RDTSERIALIZERREGISTRY_READALLFIELDS_OFFSET UNITYSDK_OFFSET(0x8C209B0)
#define HDG_RDTSERIALIZERREGISTRY_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x8C232B0)
#define HDG_RDTSERIALIZERREGISTRY_SETARRAYSIZE_OFFSET UNITYSDK_OFFSET(0x8C1FBA0)
#define HDG_RDTSERIALIZERREGISTRY_SKIPMEMBER_OFFSET UNITYSDK_OFFSET(0x8C28A10)
#define HDG_RDTSERIALIZERREGISTRY_WRITEALLFIELDS_OFFSET UNITYSDK_OFFSET(0x8C1E820)
#define HDG_RDTSERIALIZERREGISTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x8C11BA0)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerRegistry_TypeDefinitionIndex = 43778;

	class rdtSerializerRegistry : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::String*>* m_skipProperties; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::Hdg::rdtSerializerRegistry_ConvertObjectDelegate*>* m_converters; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*>* m_includePropertiesPerType; // 0x20
		::System::Collections::Generic::HashSet_1<::System::Type*>* m_unknownPrimitives; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*>* m_skipPropertiesPerType; // 0x30
		::System::Collections::Generic::HashSet_1<::System::String*>* m_skipTypes; // 0x38
		::System::Collections::Generic::HashSet_1<::System::String*>* m_dontReadProperties; // 0x40
		::System::Collections::Generic::HashSet_1<::System::Type*>* m_failures; // 0x48
		::System::Collections::Generic::HashSet_1<::System::Type*>* m_referenceFailures; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY__CTOR_OFFSET))(this);
		}

		::System::Object* NotHandledConversion(::System::Object* objIn, ::Hdg::rdtSerializerRegistry* r)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_NOTHANDLEDCONVERSION_OFFSET))(this, objIn, r);
		}

		::System::Void AddUnknownPrimitive(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_ADDUNKNOWNPRIMITIVE_OFFSET))(this, type);
		}

		::System::Object* Serialize(::System::Object* obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_SERIALIZE_OFFSET))(this, obj);
		}

		::System::Object* Deserialize(::System::Object* obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_DESERIALIZE_OFFSET))(this, obj);
		}

		::System::Void AddField(::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Property>* allFields, ::System::String* name, ::System::Object* value, ::Hdg::rdtTcpMessageComponents_Property_Type type, ::UnityEngine::RangeAttribute* rangeAttribute, ::System::Boolean isArrayOrList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Property>*, ::System::String*, ::System::Object*, ::Hdg::rdtTcpMessageComponents_Property_Type, ::UnityEngine::RangeAttribute*, ::System::Boolean))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_ADDFIELD_OFFSET))(this, allFields, name, value, type, rangeAttribute, isArrayOrList);
		}

		::System::Boolean CanAddMember(::System::Object* owner, ::System::Reflection::MemberInfo* memberInfo, ::System::Type* memberType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Reflection::MemberInfo*, ::System::Type*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_CANADDMEMBER_OFFSET))(this, owner, memberInfo, memberType);
		}

		::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Property>* ReadAllFields(::System::Object* owner)
		{
			return ((::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Property>*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_READALLFIELDS_OFFSET))(this, owner);
		}

		::System::Object* MakeNewList(::System::Collections::IList* oldValue, ::System::Type* listType, ::System::Int32 arraySize)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Collections::IList*, ::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_MAKENEWLIST_OFFSET))(this, oldValue, listType, arraySize);
		}

		::System::Void SetArraySize(::System::Object* owner, ::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Property>* allFields, ::System::Int32 arraySize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Property>*, ::System::Int32))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_SETARRAYSIZE_OFFSET))(this, owner, allFields, arraySize);
		}

		::System::Void WriteAllFields(::System::Object* realOwner, ::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Property>* allFields, ::System::Int32 arrayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Property>*, ::System::Int32))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_WRITEALLFIELDS_OFFSET))(this, realOwner, allFields, arrayIndex);
		}

		::System::Void InitSkipProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_INITSKIPPROPERTIES_OFFSET))(this);
		}

		::System::Void AddDontReadProperties(::System::String* typeName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_ADDDONTREADPROPERTIES_OFFSET))(this, typeName);
		}

		::System::Void AddSkipForType(::System::String* typeName, ::Il2CppArray<::System::String*>* properties)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_ADDSKIPFORTYPE_OFFSET))(this, typeName, properties);
		}

		::System::Void AddIncludeForType(::System::String* typeName, ::Il2CppArray<::System::String*>* properties)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_ADDINCLUDEFORTYPE_OFFSET))(this, typeName, properties);
		}

		::System::Boolean HasIncludePerType(::System::String* ownerTypeName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_HASINCLUDEPERTYPE_OFFSET))(this, ownerTypeName);
		}

		::System::Boolean IncludeMember(::System::String* ownerTypeName, ::System::String* memberInfoName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_INCLUDEMEMBER_OFFSET))(this, ownerTypeName, memberInfoName);
		}

		::System::Boolean SkipMember(::System::String* ownerTypeName, ::System::String* memberInfoName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_SKIPMEMBER_OFFSET))(this, ownerTypeName, memberInfoName);
		}
	};
}
