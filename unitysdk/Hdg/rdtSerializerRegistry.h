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

#define HDG_RDTSERIALIZERREGISTRY_ADDDONTREADPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA1303E0)
#define HDG_RDTSERIALIZERREGISTRY_ADDFIELD_OFFSET UNITYSDK_OFFSET(0xA12C670)
#define HDG_RDTSERIALIZERREGISTRY_ADDINCLUDEFORTYPE_OFFSET UNITYSDK_OFFSET(0xA130430)
#define HDG_RDTSERIALIZERREGISTRY_ADDSKIPFORTYPE_OFFSET UNITYSDK_OFFSET(0xA130220)
#define HDG_RDTSERIALIZERREGISTRY_ADDUNKNOWNPRIMITIVE_OFFSET UNITYSDK_OFFSET(0xA11F600)
#define HDG_RDTSERIALIZERREGISTRY_CANADDMEMBER_OFFSET UNITYSDK_OFFSET(0xA12F250)
#define HDG_RDTSERIALIZERREGISTRY_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA12B300)
#define HDG_RDTSERIALIZERREGISTRY_HASINCLUDEPERTYPE_OFFSET UNITYSDK_OFFSET(0xA12F330)
#define HDG_RDTSERIALIZERREGISTRY_INCLUDEMEMBER_OFFSET UNITYSDK_OFFSET(0xA12F3B0)
#define HDG_RDTSERIALIZERREGISTRY_INITSKIPPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA12D390)
#define HDG_RDTSERIALIZERREGISTRY_MAKENEWLIST_OFFSET UNITYSDK_OFFSET(0xA12F5D0)
#define HDG_RDTSERIALIZERREGISTRY_NOTHANDLEDCONVERSION_OFFSET UNITYSDK_OFFSET(0xA12D380)
#define HDG_RDTSERIALIZERREGISTRY_READALLFIELDS_OFFSET UNITYSDK_OFFSET(0xA128390)
#define HDG_RDTSERIALIZERREGISTRY_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xA12AD70)
#define HDG_RDTSERIALIZERREGISTRY_SETARRAYSIZE_OFFSET UNITYSDK_OFFSET(0xA1274A0)
#define HDG_RDTSERIALIZERREGISTRY_SKIPMEMBER_OFFSET UNITYSDK_OFFSET(0xA12F450)
#define HDG_RDTSERIALIZERREGISTRY_WRITEALLFIELDS_OFFSET UNITYSDK_OFFSET(0xA126170)
#define HDG_RDTSERIALIZERREGISTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xA11C2D0)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerRegistry_TypeDefinitionIndex = 44320;

	class rdtSerializerRegistry : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*>* m_skipPropertiesPerType; // 0x10
		::System::Collections::Generic::HashSet_1<::System::String*>* m_skipTypes; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::Hdg::rdtSerializerRegistry_ConvertObjectDelegate*>* m_converters; // 0x20
		::System::Collections::Generic::HashSet_1<::System::Type*>* m_unknownPrimitives; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*>* m_includePropertiesPerType; // 0x30
		::System::Collections::Generic::HashSet_1<::System::String*>* m_skipProperties; // 0x38
		::System::Collections::Generic::HashSet_1<::System::Type*>* m_referenceFailures; // 0x40
		::System::Collections::Generic::HashSet_1<::System::Type*>* m_failures; // 0x48
		::System::Collections::Generic::HashSet_1<::System::String*>* m_dontReadProperties; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY__CTOR_OFFSET))(this);
		}

		::System::Object* NotHandledConversion(::System::Object* a1, ::Hdg::rdtSerializerRegistry* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_NOTHANDLEDCONVERSION_OFFSET))(this, a1, a2);
		}

		::System::Void AddUnknownPrimitive(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_ADDUNKNOWNPRIMITIVE_OFFSET))(this, a1);
		}

		::System::Object* Serialize(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_SERIALIZE_OFFSET))(this, a1);
		}

		::System::Object* Deserialize(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_DESERIALIZE_OFFSET))(this, a1);
		}

		::System::Void AddField(::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Property>* a1, ::System::String* a2, ::System::Object* a3, ::Hdg::rdtTcpMessageComponents_Property_Type a4, ::UnityEngine::RangeAttribute* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Property>*, ::System::String*, ::System::Object*, ::Hdg::rdtTcpMessageComponents_Property_Type, ::UnityEngine::RangeAttribute*, ::System::Boolean))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_ADDFIELD_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean CanAddMember(::System::Object* a1, ::System::Reflection::MemberInfo* a2, ::System::Type* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Reflection::MemberInfo*, ::System::Type*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_CANADDMEMBER_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Property>* ReadAllFields(::System::Object* a1)
		{
			return ((::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Property>*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_READALLFIELDS_OFFSET))(this, a1);
		}

		::System::Object* MakeNewList(::System::Collections::IList* a1, ::System::Type* a2, ::System::Int32 a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Collections::IList*, ::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_MAKENEWLIST_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetArraySize(::System::Object* a1, ::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Property>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Property>*, ::System::Int32))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_SETARRAYSIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteAllFields(::System::Object* a1, ::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Property>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Property>*, ::System::Int32))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_WRITEALLFIELDS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InitSkipProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_INITSKIPPROPERTIES_OFFSET))(this);
		}

		::System::Void AddDontReadProperties(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_ADDDONTREADPROPERTIES_OFFSET))(this, a1);
		}

		::System::Void AddSkipForType(::System::String* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_ADDSKIPFORTYPE_OFFSET))(this, a1, a2);
		}

		::System::Void AddIncludeForType(::System::String* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_ADDINCLUDEFORTYPE_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasIncludePerType(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_HASINCLUDEPERTYPE_OFFSET))(this, a1);
		}

		::System::Boolean IncludeMember(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_INCLUDEMEMBER_OFFSET))(this, a1, a2);
		}

		::System::Boolean SkipMember(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_SKIPMEMBER_OFFSET))(this, a1, a2);
		}
	};
}
