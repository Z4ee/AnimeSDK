#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FA49C91DF77C981E_Reason.h"
#include "unitysdk/RPG/AutoReleaseReferenceState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FA49C91DF77C981E_CLEAR_OFFSET UNITYSDK_OFFSET(0x116743A0)
#define CLASS_1_FA49C91DF77C981E_GET_REFERENCESTATE_OFFSET UNITYSDK_OFFSET(0x116743E0)
#define CLASS_1_FA49C91DF77C981E_METHOD_1_2FE338807A102453_OFFSET UNITYSDK_OFFSET(0x11674350)
#define CLASS_1_FA49C91DF77C981E_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x116744D0)
#define CLASS_1_FA49C91DF77C981E_ONALLOC_OFFSET UNITYSDK_OFFSET(0x11674400)
#define CLASS_1_FA49C91DF77C981E_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x11674480)
#define CLASS_1_FA49C91DF77C981E_SET_REFERENCESTATE_OFFSET UNITYSDK_OFFSET(0x116743F0)
#define CLASS_1_FA49C91DF77C981E__CTOR_OFFSET UNITYSDK_OFFSET(0x11674520)

inline static constexpr unsigned int Class_1_FA49C91DF77C981E_TypeDefinitionIndex = 57784;

class Class_1_FA49C91DF77C981E : public ::System::Object
{
public:
	::Class_1_FA49C91DF77C981E_Reason Field_1_0; // 0x10
	::RPG::AutoReleaseReferenceState _ReferenceState_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA49C91DF77C981E__CTOR_OFFSET))(this);
	}

	::Class_1_FA49C91DF77C981E* Method_1_2FE338807A102453(::Class_1_FA49C91DF77C981E_Reason a1)
	{
		return ((::Class_1_FA49C91DF77C981E*(*)(::PVOID, ::Class_1_FA49C91DF77C981E_Reason))((::PBYTE)hIl2Cpp + CLASS_1_FA49C91DF77C981E_METHOD_1_2FE338807A102453_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA49C91DF77C981E_CLEAR_OFFSET))(this);
	}

	::RPG::AutoReleaseReferenceState get_ReferenceState()
	{
		return ((::RPG::AutoReleaseReferenceState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA49C91DF77C981E_GET_REFERENCESTATE_OFFSET))(this);
	}

	::System::Void set_ReferenceState(::RPG::AutoReleaseReferenceState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AutoReleaseReferenceState))((::PBYTE)hIl2Cpp + CLASS_1_FA49C91DF77C981E_SET_REFERENCESTATE_OFFSET))(this, a1);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA49C91DF77C981E_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA49C91DF77C981E_ONRECYCLE_OFFSET))(this);
	}

	::Class_1_FA49C91DF77C981E* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_FA49C91DF77C981E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA49C91DF77C981E_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}
};
