#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/StackingType.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B9D33AA6E3F531F5_CLEAR_OFFSET UNITYSDK_OFFSET(0x16A3E1A0)
#define CLASS_1_B9D33AA6E3F531F5_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x16A3EB60)
#define CLASS_1_B9D33AA6E3F531F5_METHOD_1_6B47CDE3B34D5A39_OFFSET UNITYSDK_OFFSET(0x16A3E5F0)
#define CLASS_1_B9D33AA6E3F531F5_METHOD_1_8EE4E274F72660ED_OFFSET UNITYSDK_OFFSET(0x16A3E7E0)
#define CLASS_1_B9D33AA6E3F531F5_METHOD_1_9C2D14D99300BAF7_OFFSET UNITYSDK_OFFSET(0x16A3E660)
#define CLASS_1_B9D33AA6E3F531F5_METHOD_1_A82425A3090F730C_OFFSET UNITYSDK_OFFSET(0x16A3E4D0)
#define CLASS_1_B9D33AA6E3F531F5_METHOD_1_BAFD0B2DAD699DB8_OFFSET UNITYSDK_OFFSET(0x16A3EA90)
#define CLASS_1_B9D33AA6E3F531F5_METHOD_1_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x16A3E450)
#define CLASS_1_B9D33AA6E3F531F5_METHOD_1_E3EE893AA22489F0_OFFSET UNITYSDK_OFFSET(0x16A3E010)
#define CLASS_1_B9D33AA6E3F531F5_METHOD_1_E6CBE96CDC7253DC_OFFSET UNITYSDK_OFFSET(0x16A3E250)
#define CLASS_1_B9D33AA6E3F531F5_ONALLOC_OFFSET UNITYSDK_OFFSET(0x16A3E0D0)
#define CLASS_1_B9D33AA6E3F531F5_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x16A3E210)
#define CLASS_1_B9D33AA6E3F531F5_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x16A3EB70)
#define CLASS_1_B9D33AA6E3F531F5__CTOR_OFFSET UNITYSDK_OFFSET(0x16A3EB80)

inline static constexpr unsigned int Class_1_B9D33AA6E3F531F5_TypeDefinitionIndex = 32386;

class Class_1_B9D33AA6E3F531F5 : public ::System::Object
{
public:
	::RPG::PoolList_1<::System::Boolean>* Field_1_7; // 0x10
	::RPG::PoolList_1<::System::Single>* Field_1_6; // 0x18
	::System::Single Field_1_1; // 0x20
	::System::Int32 Field_1_5; // 0x24
	::System::Single Field_1_3; // 0x28
	::System::Int32 Field_1_4; // 0x2C
	::System::Single _Value_k__BackingField; // 0x30
	::RPG::Client::LittleGame::StackingType Field_1_0; // 0x34
	::System::Single Field_1_2; // 0x38

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

	::System::Int32 Method_1_E6CBE96CDC7253DC(::System::Single a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B9D33AA6E3F531F5_METHOD_1_E6CBE96CDC7253DC_OFFSET))(this, a1);
	}

	::System::Void Method_1_A82425A3090F730C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B9D33AA6E3F531F5_METHOD_1_A82425A3090F730C_OFFSET))(this, a1);
	}

	::System::Single Method_1_6B47CDE3B34D5A39(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B9D33AA6E3F531F5_METHOD_1_6B47CDE3B34D5A39_OFFSET))(this, a1);
	}

	::System::Void Method_1_9C2D14D99300BAF7(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B9D33AA6E3F531F5_METHOD_1_9C2D14D99300BAF7_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_8EE4E274F72660ED(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_B9D33AA6E3F531F5_METHOD_1_8EE4E274F72660ED_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D33AA6E3F531F5_METHOD_1_D0CD9A971CA3B1CF_OFFSET))(this);
	}

	::System::Single Method_1_BAFD0B2DAD699DB8()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D33AA6E3F531F5_METHOD_1_BAFD0B2DAD699DB8_OFFSET))(this);
	}

	::System::Single get_Value()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D33AA6E3F531F5_GET_VALUE_OFFSET))(this);
	}

	::System::Void set_Value(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B9D33AA6E3F531F5_SET_VALUE_OFFSET))(this, value);
	}
};
