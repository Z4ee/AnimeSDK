#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsDataType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_BECOMEDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1B426750)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1B426890)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_CREATEDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1B426490)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_CREATELIST_1_OFFSET UNITYSDK_OFFSET(0x1B4266F0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_CREATELIST_OFFSET UNITYSDK_OFFSET(0x1B426660)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B426C10)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B426BB0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B427340)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1B426AD0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_GET_ASDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1B426B20)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1B426AB0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_GET_ASINT64_OFFSET UNITYSDK_OFFSET(0x1B426AC0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_GET_ASLIST_OFFSET UNITYSDK_OFFSET(0x1B426B60)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_GET_ASSTRING_OFFSET UNITYSDK_OFFSET(0x1B426AE0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_GET_ISBOOL_OFFSET UNITYSDK_OFFSET(0x1B426960)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_GET_ISDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1B4269D0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_GET_ISDOUBLE_OFFSET UNITYSDK_OFFSET(0x1B4268F0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_GET_ISINT64_OFFSET UNITYSDK_OFFSET(0x1B426910)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_GET_ISLIST_OFFSET UNITYSDK_OFFSET(0x1B426A40)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x1B4268E0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_GET_ISSTRING_OFFSET UNITYSDK_OFFSET(0x1B4269B0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B426250)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B4271A0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B427240)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B426BA0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B427380)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B426390)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B4263E0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B426410)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1B426460)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1B426470)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1B426480)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B426380)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsData_TypeDefinitionIndex = 27421;

	class fsData : public ::System::Object
	{
	public:
		static ::ParadoxNotion::Serialization::FullSerializer::fsData** StaticGet_False()
		{
			return (::ParadoxNotion::Serialization::FullSerializer::fsData**)Il2CppClass::FromTypeDefinitionIndex(fsData_TypeDefinitionIndex)->GetStaticField(0x203A0);
		}
		static ::ParadoxNotion::Serialization::FullSerializer::fsData** StaticGet_Null()
		{
			return (::ParadoxNotion::Serialization::FullSerializer::fsData**)Il2CppClass::FromTypeDefinitionIndex(fsData_TypeDefinitionIndex)->GetStaticField(0x203A8);
		}
		static ::ParadoxNotion::Serialization::FullSerializer::fsData** StaticGet_True()
		{
			return (::ParadoxNotion::Serialization::FullSerializer::fsData**)Il2CppClass::FromTypeDefinitionIndex(fsData_TypeDefinitionIndex)->GetStaticField(0x203B0);
		}
		::System::Object* _value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean boolean)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA__CTOR_1_OFFSET))(this, boolean);
		}

		::System::Void _ctor_2(::System::Double f)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA__CTOR_2_OFFSET))(this, f);
		}

		::System::Void _ctor_3(::System::Int64 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA__CTOR_3_OFFSET))(this, i);
		}

		::System::Void _ctor_4(::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA__CTOR_4_OFFSET))(this, str);
		}

		::System::Void _ctor_5(::System::Collections::Generic::Dictionary_2<::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>* dict)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA__CTOR_5_OFFSET))(this, dict);
		}

		::System::Void _ctor_6(::System::Collections::Generic::List_1<::ParadoxNotion::Serialization::FullSerializer::fsData*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ParadoxNotion::Serialization::FullSerializer::fsData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA__CTOR_6_OFFSET))(this, list);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA__CCTOR_OFFSET))();
		}

		::ParadoxNotion::Serialization::FullSerializer::fsDataType get_Type()
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsDataType(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_GET_TYPE_OFFSET))(this);
		}

		static ::ParadoxNotion::Serialization::FullSerializer::fsData* CreateDictionary()
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsData*(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_CREATEDICTIONARY_OFFSET))();
		}

		static ::ParadoxNotion::Serialization::FullSerializer::fsData* CreateList()
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsData*(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_CREATELIST_OFFSET))();
		}

		static ::ParadoxNotion::Serialization::FullSerializer::fsData* CreateList_1(::System::Int32 capacity)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsData*(*)(::System::Int32))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_CREATELIST_1_OFFSET))(capacity);
		}

		::System::Void BecomeDictionary()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_BECOMEDICTIONARY_OFFSET))(this);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsData* Clone()
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsData*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_CLONE_OFFSET))(this);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_GET_ISNULL_OFFSET))(this);
		}

		::System::Boolean get_IsDouble()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_GET_ISDOUBLE_OFFSET))(this);
		}

		::System::Boolean get_IsInt64()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_GET_ISINT64_OFFSET))(this);
		}

		::System::Boolean get_IsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_GET_ISBOOL_OFFSET))(this);
		}

		::System::Boolean get_IsString()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_GET_ISSTRING_OFFSET))(this);
		}

		::System::Boolean get_IsDictionary()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_GET_ISDICTIONARY_OFFSET))(this);
		}

		::System::Boolean get_IsList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_GET_ISLIST_OFFSET))(this);
		}

		::System::Double get_AsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_GET_ASDOUBLE_OFFSET))(this);
		}

		::System::Int64 get_AsInt64()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_GET_ASINT64_OFFSET))(this);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_GET_ASBOOL_OFFSET))(this);
		}

		::System::String* get_AsString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_GET_ASSTRING_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>* get_AsDictionary()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_GET_ASDICTIONARY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::ParadoxNotion::Serialization::FullSerializer::fsData*>* get_AsList()
		{
			return ((::System::Collections::Generic::List_1<::ParadoxNotion::Serialization::FullSerializer::fsData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_GET_ASLIST_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::ParadoxNotion::Serialization::FullSerializer::fsData* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsData*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_EQUALS_1_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::ParadoxNotion::Serialization::FullSerializer::fsData* a, ::ParadoxNotion::Serialization::FullSerializer::fsData* b)
		{
			return ((::System::Boolean(*)(::ParadoxNotion::Serialization::FullSerializer::fsData*, ::ParadoxNotion::Serialization::FullSerializer::fsData*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::ParadoxNotion::Serialization::FullSerializer::fsData* a, ::ParadoxNotion::Serialization::FullSerializer::fsData* b)
		{
			return ((::System::Boolean(*)(::ParadoxNotion::Serialization::FullSerializer::fsData*, ::ParadoxNotion::Serialization::FullSerializer::fsData*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDATA_GETHASHCODE_OFFSET))(this);
		}
	};
}
