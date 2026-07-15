#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0814C3CA012BD292.h"
#include "unitysdk/System/Object.h"

class Class_1_229B74AAA4ABB8C3;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B0665B42245E17DA_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x19351820)
#define CLASS_1_B0665B42245E17DA_GET__SORTITEMS_OFFSET UNITYSDK_OFFSET(0x19351A80)
#define CLASS_1_B0665B42245E17DA_METHOD_1_9470EA53FC5AD1F1_OFFSET UNITYSDK_OFFSET(0x19351840)
#define CLASS_1_B0665B42245E17DA_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x19351830)
#define CLASS_1_B0665B42245E17DA__CTOR_OFFSET UNITYSDK_OFFSET(0x19351A90)

inline static constexpr unsigned int Class_1_B0665B42245E17DA_TypeDefinitionIndex = 62002;

class Class_1_B0665B42245E17DA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_229B74AAA4ABB8C3*>* __SortItems_k__BackingField; // 0x10
	::System::UInt32 _Index_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0665B42245E17DA__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_Index()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0665B42245E17DA_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B0665B42245E17DA_SET_INDEX_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_9470EA53FC5AD1F1(::System::UInt32 a1, ::System::UInt32 a2, ::Struct_2_0814C3CA012BD292 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Struct_2_0814C3CA012BD292))((::PBYTE)hIl2Cpp + CLASS_1_B0665B42245E17DA_METHOD_1_9470EA53FC5AD1F1_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::Class_1_229B74AAA4ABB8C3*>* get__SortItems()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_229B74AAA4ABB8C3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0665B42245E17DA_GET__SORTITEMS_OFFSET))(this);
	}
};
