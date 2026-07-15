#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/StackingType.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B9D33AA6E3F531F5_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A9006A0)
#define CLASS_1_B9D33AA6E3F531F5_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A901160)
#define CLASS_1_B9D33AA6E3F531F5_METHOD_1_60FDCB9BB232132D_OFFSET UNITYSDK_OFFSET(0x1A900FF0)
#define CLASS_1_B9D33AA6E3F531F5_METHOD_1_8EBD1A95681F8CEF_OFFSET UNITYSDK_OFFSET(0x1A900D20)
#define CLASS_1_B9D33AA6E3F531F5_METHOD_1_9C2D14D99300BAF7_OFFSET UNITYSDK_OFFSET(0x1A900BC0)
#define CLASS_1_B9D33AA6E3F531F5_METHOD_1_9FE4AB7E2BDAE9CB_OFFSET UNITYSDK_OFFSET(0x1A900B40)
#define CLASS_1_B9D33AA6E3F531F5_METHOD_1_A82425A3090F730C_OFFSET UNITYSDK_OFFSET(0x1A900A30)
#define CLASS_1_B9D33AA6E3F531F5_METHOD_1_B6F16E66140D228B_OFFSET UNITYSDK_OFFSET(0x1A900750)
#define CLASS_1_B9D33AA6E3F531F5_METHOD_1_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x1A9009B0)
#define CLASS_1_B9D33AA6E3F531F5_METHOD_1_E3EE893AA22489F0_OFFSET UNITYSDK_OFFSET(0x1A900500)
#define CLASS_1_B9D33AA6E3F531F5_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1A9005C0)
#define CLASS_1_B9D33AA6E3F531F5_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1A900710)
#define CLASS_1_B9D33AA6E3F531F5_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A901170)
#define CLASS_1_B9D33AA6E3F531F5__CTOR_OFFSET UNITYSDK_OFFSET(0x1A901180)

inline static constexpr unsigned int Class_1_B9D33AA6E3F531F5_TypeDefinitionIndex = 39657;

class Class_1_B9D33AA6E3F531F5 : public ::System::Object
{
public:
	::RPG::PoolList_1<::System::Boolean>* Field_1_0; // 0x10
	::RPG::PoolList_1<::System::Single>* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x24
	::System::Int32 Field_1_4; // 0x28
	::System::Single _Value_k__BackingField; // 0x2C
	::System::Int32 Field_1_6; // 0x30
	::RPG::Client::LittleGame::StackingType Field_1_7; // 0x34
	::System::Single Field_1_8; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D33AA6E3F531F5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E3EE893AA22489F0(::RPG::Client::LittleGame::StackingType a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::StackingType, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B9D33AA6E3F531F5_METHOD_1_E3EE893AA22489F0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D33AA6E3F531F5_ONALLOC_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D33AA6E3F531F5_CLEAR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D33AA6E3F531F5_ONRECYCLE_OFFSET))(this);
	}

	::System::Int32 Method_1_B6F16E66140D228B(::System::Single a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B9D33AA6E3F531F5_METHOD_1_B6F16E66140D228B_OFFSET))(this, a1);
	}

	::System::Void Method_1_A82425A3090F730C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B9D33AA6E3F531F5_METHOD_1_A82425A3090F730C_OFFSET))(this, a1);
	}

	::System::Single Method_1_9FE4AB7E2BDAE9CB(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B9D33AA6E3F531F5_METHOD_1_9FE4AB7E2BDAE9CB_OFFSET))(this, a1);
	}

	::System::Void Method_1_9C2D14D99300BAF7(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B9D33AA6E3F531F5_METHOD_1_9C2D14D99300BAF7_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_8EBD1A95681F8CEF(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_B9D33AA6E3F531F5_METHOD_1_8EBD1A95681F8CEF_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D33AA6E3F531F5_METHOD_1_D0CD9A971CA3B1CF_OFFSET))(this);
	}

	::System::Single Method_1_60FDCB9BB232132D()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D33AA6E3F531F5_METHOD_1_60FDCB9BB232132D_OFFSET))(this);
	}

	::System::Single get_Value()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D33AA6E3F531F5_GET_VALUE_OFFSET))(this);
	}

	::System::Void set_Value(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B9D33AA6E3F531F5_SET_VALUE_OFFSET))(this, a1);
	}
};
