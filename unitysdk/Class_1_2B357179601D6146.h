#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0814C3CA012BD292.h"
#include "unitysdk/System/Object.h"

class Class_1_8F813B9AC04644C0;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2B357179601D6146_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1000FBB0)
#define CLASS_1_2B357179601D6146_GET__SORTITEMS_OFFSET UNITYSDK_OFFSET(0x1000FD90)
#define CLASS_1_2B357179601D6146_METHOD_1_004F4F95B55C266F_OFFSET UNITYSDK_OFFSET(0x1000FBD0)
#define CLASS_1_2B357179601D6146_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1000FBC0)
#define CLASS_1_2B357179601D6146__CTOR_OFFSET UNITYSDK_OFFSET(0x1000FDA0)

inline static constexpr unsigned int Class_1_2B357179601D6146_TypeDefinitionIndex = 59775;

class Class_1_2B357179601D6146 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_8F813B9AC04644C0*>* __SortItems_k__BackingField; // 0x10
	::System::UInt32 _Index_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B357179601D6146__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_Index()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B357179601D6146_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2B357179601D6146_SET_INDEX_OFFSET))(this, value);
	}

	::System::Int32 Method_1_004F4F95B55C266F(::System::UInt32 a1, ::System::UInt32 a2, ::Struct_2_0814C3CA012BD292 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Struct_2_0814C3CA012BD292))((::PBYTE)hIl2Cpp + CLASS_1_2B357179601D6146_METHOD_1_004F4F95B55C266F_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::Class_1_8F813B9AC04644C0*>* get__SortItems()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_8F813B9AC04644C0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B357179601D6146_GET__SORTITEMS_OFFSET))(this);
	}
};
