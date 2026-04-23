#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4E0C8860CC2DF441;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace UnityEngine { class Animator; }

#define CLASS_1_BC2F8C4174D2127C_CLEAR_OFFSET UNITYSDK_OFFSET(0x17F5B4D0)
#define CLASS_1_BC2F8C4174D2127C_METHOD_1_54D5641F697957EE_OFFSET UNITYSDK_OFFSET(0x17F5B870)
#define CLASS_1_BC2F8C4174D2127C_ONALLOC_OFFSET UNITYSDK_OFFSET(0x17F5B400)
#define CLASS_1_BC2F8C4174D2127C_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x17F5B490)
#define CLASS_1_BC2F8C4174D2127C__CTOR_OFFSET UNITYSDK_OFFSET(0x17F5BB60)

inline static constexpr unsigned int Class_1_BC2F8C4174D2127C_TypeDefinitionIndex = 38021;

class Class_1_BC2F8C4174D2127C : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::System::Int32, ::Class_1_4E0C8860CC2DF441*>* Field_1_1; // 0x10
	::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolList_1<::System::Int32>*>* Field_1_2; // 0x18
	::RPG::PoolDictionary_2<::System::Int32, ::Class_1_4E0C8860CC2DF441*>* Field_1_0; // 0x20
	::System::Boolean Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC2F8C4174D2127C__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC2F8C4174D2127C_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC2F8C4174D2127C_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC2F8C4174D2127C_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_54D5641F697957EE(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_BC2F8C4174D2127C_METHOD_1_54D5641F697957EE_OFFSET))(this, a1);
	}
};
