#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AutoReleaseReferenceState.h"
#include "unitysdk/System/Collections/Generic/List_1.h"

class Class_1_83D980B81C9B9AFA;

#define CLASS_2_8F285BFA404E1032_GET_REFERENCESTATE_OFFSET UNITYSDK_OFFSET(0x1177F6A0)
#define CLASS_2_8F285BFA404E1032_METHOD_2_457717A0CF438A7C_OFFSET UNITYSDK_OFFSET(0x1177F770)
#define CLASS_2_8F285BFA404E1032_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1177F6C0)
#define CLASS_2_8F285BFA404E1032_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1177F720)
#define CLASS_2_8F285BFA404E1032_SET_REFERENCESTATE_OFFSET UNITYSDK_OFFSET(0x1177F6B0)
#define CLASS_2_8F285BFA404E1032__CTOR_OFFSET UNITYSDK_OFFSET(0x1177F7C0)

inline static constexpr unsigned int Class_2_8F285BFA404E1032_TypeDefinitionIndex = 53163;

class Class_2_8F285BFA404E1032 : public ::System::Collections::Generic::List_1<::Class_1_83D980B81C9B9AFA*>
{
public:
	::RPG::AutoReleaseReferenceState _ReferenceState_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F285BFA404E1032__CTOR_OFFSET))(this);
	}

	::RPG::AutoReleaseReferenceState get_ReferenceState()
	{
		return ((::RPG::AutoReleaseReferenceState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F285BFA404E1032_GET_REFERENCESTATE_OFFSET))(this);
	}

	::System::Void set_ReferenceState(::RPG::AutoReleaseReferenceState value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AutoReleaseReferenceState))((::PBYTE)hIl2Cpp + CLASS_2_8F285BFA404E1032_SET_REFERENCESTATE_OFFSET))(this, value);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F285BFA404E1032_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F285BFA404E1032_ONRECYCLE_OFFSET))(this);
	}

	::Class_2_8F285BFA404E1032* Method_2_457717A0CF438A7C()
	{
		return ((::Class_2_8F285BFA404E1032*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F285BFA404E1032_METHOD_2_457717A0CF438A7C_OFFSET))(this);
	}
};
