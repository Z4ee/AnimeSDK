#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AutoReleaseReferenceState.h"
#include "unitysdk/System/Collections/Generic/List_1.h"

class Class_1_83D980B81C9B9AFA;

#define CLASS_2_AD908255DB87849A_GET_REFERENCESTATE_OFFSET UNITYSDK_OFFSET(0x15DB5AE0)
#define CLASS_2_AD908255DB87849A_METHOD_2_457717A0CF438A7C_OFFSET UNITYSDK_OFFSET(0x15DB5BB0)
#define CLASS_2_AD908255DB87849A_ONALLOC_OFFSET UNITYSDK_OFFSET(0x15DB5B00)
#define CLASS_2_AD908255DB87849A_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x15DB5B60)
#define CLASS_2_AD908255DB87849A_SET_REFERENCESTATE_OFFSET UNITYSDK_OFFSET(0x15DB5AF0)
#define CLASS_2_AD908255DB87849A__CTOR_OFFSET UNITYSDK_OFFSET(0x15DB5C00)

inline static constexpr unsigned int Class_2_AD908255DB87849A_TypeDefinitionIndex = 57665;

class Class_2_AD908255DB87849A : public ::System::Collections::Generic::List_1<::Class_1_83D980B81C9B9AFA*>
{
public:
	::RPG::AutoReleaseReferenceState _ReferenceState_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD908255DB87849A__CTOR_OFFSET))(this);
	}

	::RPG::AutoReleaseReferenceState get_ReferenceState()
	{
		return ((::RPG::AutoReleaseReferenceState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD908255DB87849A_GET_REFERENCESTATE_OFFSET))(this);
	}

	::System::Void set_ReferenceState(::RPG::AutoReleaseReferenceState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AutoReleaseReferenceState))((::PBYTE)hIl2Cpp + CLASS_2_AD908255DB87849A_SET_REFERENCESTATE_OFFSET))(this, a1);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD908255DB87849A_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD908255DB87849A_ONRECYCLE_OFFSET))(this);
	}

	::Class_2_AD908255DB87849A* Method_2_457717A0CF438A7C()
	{
		return ((::Class_2_AD908255DB87849A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD908255DB87849A_METHOD_2_457717A0CF438A7C_OFFSET))(this);
	}
};
