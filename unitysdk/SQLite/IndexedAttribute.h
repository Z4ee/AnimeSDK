#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SQLITE_INDEXEDATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D633320)
#define SQLITE_INDEXEDATTRIBUTE_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1D633340)
#define SQLITE_INDEXEDATTRIBUTE_GET_UNIQUE_OFFSET UNITYSDK_OFFSET(0x1D633360)
#define SQLITE_INDEXEDATTRIBUTE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1D633330)
#define SQLITE_INDEXEDATTRIBUTE_SET_ORDER_OFFSET UNITYSDK_OFFSET(0x1D633350)
#define SQLITE_INDEXEDATTRIBUTE_SET_UNIQUE_OFFSET UNITYSDK_OFFSET(0x1D633370)
#define SQLITE_INDEXEDATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D633390)
#define SQLITE_INDEXEDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D633380)

namespace SQLite
{
	inline static constexpr unsigned int IndexedAttribute_TypeDefinitionIndex = 38383;

	class IndexedAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Int32 _Order_k__BackingField; // 0x18
		::System::Boolean _Unique_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_INDEXEDATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name, ::System::Int32 order)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SQLITE_INDEXEDATTRIBUTE__CTOR_1_OFFSET))(this, name, order);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_INDEXEDATTRIBUTE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_INDEXEDATTRIBUTE_SET_NAME_OFFSET))(this, value);
		}

		::System::Int32 get_Order()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_INDEXEDATTRIBUTE_GET_ORDER_OFFSET))(this);
		}

		::System::Void set_Order(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SQLITE_INDEXEDATTRIBUTE_SET_ORDER_OFFSET))(this, value);
		}

		::System::Boolean get_Unique()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_INDEXEDATTRIBUTE_GET_UNIQUE_OFFSET))(this);
		}

		::System::Void set_Unique(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_INDEXEDATTRIBUTE_SET_UNIQUE_OFFSET))(this, value);
		}
	};
}
