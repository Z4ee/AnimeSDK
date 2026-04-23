#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7762931C72B79FBA_Reason.h"
#include "unitysdk/RPG/AutoReleaseReferenceState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7762931C72B79FBA_CLEAR_OFFSET UNITYSDK_OFFSET(0x91E7EC0)
#define CLASS_1_7762931C72B79FBA_GET_REFERENCESTATE_OFFSET UNITYSDK_OFFSET(0x91E7F00)
#define CLASS_1_7762931C72B79FBA_METHOD_1_2FE338807A102453_OFFSET UNITYSDK_OFFSET(0x91E7E30)
#define CLASS_1_7762931C72B79FBA_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x91E7FF0)
#define CLASS_1_7762931C72B79FBA_ONALLOC_OFFSET UNITYSDK_OFFSET(0x91E7F20)
#define CLASS_1_7762931C72B79FBA_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x91E7FA0)
#define CLASS_1_7762931C72B79FBA_SET_REFERENCESTATE_OFFSET UNITYSDK_OFFSET(0x91E7F10)
#define CLASS_1_7762931C72B79FBA__CTOR_OFFSET UNITYSDK_OFFSET(0x91E8040)

inline static constexpr unsigned int Class_1_7762931C72B79FBA_TypeDefinitionIndex = 55789;

class Class_1_7762931C72B79FBA : public ::System::Object
{
public:
	::Class_1_7762931C72B79FBA_Reason Field_1_1; // 0x10
	::RPG::AutoReleaseReferenceState _ReferenceState_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7762931C72B79FBA__CTOR_OFFSET))(this);
	}

	::Class_1_7762931C72B79FBA* Method_1_2FE338807A102453(::Class_1_7762931C72B79FBA_Reason a1)
	{
		return ((::Class_1_7762931C72B79FBA*(*)(::PVOID, ::Class_1_7762931C72B79FBA_Reason))((::PBYTE)hIl2Cpp + CLASS_1_7762931C72B79FBA_METHOD_1_2FE338807A102453_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7762931C72B79FBA_CLEAR_OFFSET))(this);
	}

	::RPG::AutoReleaseReferenceState get_ReferenceState()
	{
		return ((::RPG::AutoReleaseReferenceState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7762931C72B79FBA_GET_REFERENCESTATE_OFFSET))(this);
	}

	::System::Void set_ReferenceState(::RPG::AutoReleaseReferenceState value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AutoReleaseReferenceState))((::PBYTE)hIl2Cpp + CLASS_1_7762931C72B79FBA_SET_REFERENCESTATE_OFFSET))(this, value);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7762931C72B79FBA_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7762931C72B79FBA_ONRECYCLE_OFFSET))(this);
	}

	::Class_1_7762931C72B79FBA* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_7762931C72B79FBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7762931C72B79FBA_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}
};
