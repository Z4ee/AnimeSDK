#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/StackingType.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5C1B37413D7CD0F5_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA2ADC0)
#define CLASS_1_5C1B37413D7CD0F5_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1CA2B8B0)
#define CLASS_1_5C1B37413D7CD0F5_METHOD_1_32843F0289E680DD_OFFSET UNITYSDK_OFFSET(0x1CA2B160)
#define CLASS_1_5C1B37413D7CD0F5_METHOD_1_60FDCB9BB232132D_OFFSET UNITYSDK_OFFSET(0x1CA2B740)
#define CLASS_1_5C1B37413D7CD0F5_METHOD_1_8EBD1A95681F8CEF_OFFSET UNITYSDK_OFFSET(0x1CA2B470)
#define CLASS_1_5C1B37413D7CD0F5_METHOD_1_9D8544DE57479A1F_OFFSET UNITYSDK_OFFSET(0x1CA2AE70)
#define CLASS_1_5C1B37413D7CD0F5_METHOD_1_9FE4AB7E2BDAE9CB_OFFSET UNITYSDK_OFFSET(0x1CA2B280)
#define CLASS_1_5C1B37413D7CD0F5_METHOD_1_C677E2A78BD47B82_OFFSET UNITYSDK_OFFSET(0x1CA2AC00)
#define CLASS_1_5C1B37413D7CD0F5_METHOD_1_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x1CA2B0E0)
#define CLASS_1_5C1B37413D7CD0F5_METHOD_1_F252605622176BEE_OFFSET UNITYSDK_OFFSET(0x1CA2B300)
#define CLASS_1_5C1B37413D7CD0F5_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CA2ACE0)
#define CLASS_1_5C1B37413D7CD0F5_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CA2AE30)
#define CLASS_1_5C1B37413D7CD0F5_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1CA2B8C0)
#define CLASS_1_5C1B37413D7CD0F5__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA2B8D0)

inline static constexpr unsigned int Class_1_5C1B37413D7CD0F5_TypeDefinitionIndex = 42132;

class Class_1_5C1B37413D7CD0F5 : public ::System::Object
{
public:
	::RPG::PoolList_1<::System::Single>* MBNNBJKFLIL; // 0x10
	::RPG::PoolList_1<::System::Boolean>* ILLGNFNKKME; // 0x18
	::System::Single NDOGICGCDIP; // 0x20
	::System::Int32 JMCEABGIEGA; // 0x24
	::System::Single POJFJHOJEKI; // 0x28
	::RPG::Client::LittleGame::StackingType BMAIKHNKEJD; // 0x2C
	::System::Single _Value_k__BackingField; // 0x30
	::System::Int32 COEMCOBPMKD; // 0x34
	::System::Single BFLNNOEKIGE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C1B37413D7CD0F5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C677E2A78BD47B82(::RPG::Client::LittleGame::StackingType a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::StackingType, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5C1B37413D7CD0F5_METHOD_1_C677E2A78BD47B82_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C1B37413D7CD0F5_ONALLOC_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C1B37413D7CD0F5_CLEAR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C1B37413D7CD0F5_ONRECYCLE_OFFSET))(this);
	}

	::System::Int32 Method_1_9D8544DE57479A1F(::System::Single a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5C1B37413D7CD0F5_METHOD_1_9D8544DE57479A1F_OFFSET))(this, a1);
	}

	::System::Void Method_1_32843F0289E680DD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5C1B37413D7CD0F5_METHOD_1_32843F0289E680DD_OFFSET))(this, a1);
	}

	::System::Single Method_1_9FE4AB7E2BDAE9CB(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5C1B37413D7CD0F5_METHOD_1_9FE4AB7E2BDAE9CB_OFFSET))(this, a1);
	}

	::System::Void Method_1_F252605622176BEE(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5C1B37413D7CD0F5_METHOD_1_F252605622176BEE_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_8EBD1A95681F8CEF(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_5C1B37413D7CD0F5_METHOD_1_8EBD1A95681F8CEF_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C1B37413D7CD0F5_METHOD_1_D0CD9A971CA3B1CF_OFFSET))(this);
	}

	::System::Single Method_1_60FDCB9BB232132D()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C1B37413D7CD0F5_METHOD_1_60FDCB9BB232132D_OFFSET))(this);
	}

	::System::Single get_Value()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C1B37413D7CD0F5_GET_VALUE_OFFSET))(this);
	}

	::System::Void set_Value(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5C1B37413D7CD0F5_SET_VALUE_OFFSET))(this, a1);
	}
};
