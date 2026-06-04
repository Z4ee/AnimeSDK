#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0297570DE15B35AE;
namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_CB93BA65C1FA482A_CLEAR_OFFSET UNITYSDK_OFFSET(0x18CFD980)
#define CLASS_1_CB93BA65C1FA482A_ONALLOC_OFFSET UNITYSDK_OFFSET(0x18CFDA10)
#define CLASS_1_CB93BA65C1FA482A_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x18CFDB00)
#define CLASS_1_CB93BA65C1FA482A__CTOR_OFFSET UNITYSDK_OFFSET(0x18CFDB40)

inline static constexpr unsigned int Class_1_CB93BA65C1FA482A_TypeDefinitionIndex = 40152;

class Class_1_CB93BA65C1FA482A : public ::System::Object
{
public:
	::RPG::PoolList_1<::System::UInt32>* Field_1_0; // 0x10
	::Class_1_0297570DE15B35AE* Field_1_1; // 0x18
	::RPG::PoolList_1<::System::UInt32>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB93BA65C1FA482A__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB93BA65C1FA482A_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB93BA65C1FA482A_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB93BA65C1FA482A_ONRECYCLE_OFFSET))(this);
	}
};
