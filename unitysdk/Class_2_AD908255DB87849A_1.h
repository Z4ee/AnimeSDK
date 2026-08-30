#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AutoReleaseReferenceState.h"
#include "unitysdk/System/Collections/Generic/List_1.h"

namespace RPG::Client { class MonoEffect; }

#define CLASS_2_AD908255DB87849A_1_GET_REFERENCESTATE_OFFSET UNITYSDK_OFFSET(0x1A7F6770)
#define CLASS_2_AD908255DB87849A_1_METHOD_2_457717A0CF438A7C_OFFSET UNITYSDK_OFFSET(0x1A7F6840)
#define CLASS_2_AD908255DB87849A_1_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1A7F6790)
#define CLASS_2_AD908255DB87849A_1_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1A7F67F0)
#define CLASS_2_AD908255DB87849A_1_SET_REFERENCESTATE_OFFSET UNITYSDK_OFFSET(0x1A7F6780)
#define CLASS_2_AD908255DB87849A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7F6890)

inline static constexpr unsigned int Class_2_AD908255DB87849A_1_TypeDefinitionIndex = 69889;

class Class_2_AD908255DB87849A_1 : public ::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>
{
public:
	::RPG::AutoReleaseReferenceState _ReferenceState_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD908255DB87849A_1__CTOR_OFFSET))(this);
	}

	::RPG::AutoReleaseReferenceState get_ReferenceState()
	{
		return ((::RPG::AutoReleaseReferenceState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD908255DB87849A_1_GET_REFERENCESTATE_OFFSET))(this);
	}

	::System::Void set_ReferenceState(::RPG::AutoReleaseReferenceState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AutoReleaseReferenceState))((::PBYTE)hIl2Cpp + CLASS_2_AD908255DB87849A_1_SET_REFERENCESTATE_OFFSET))(this, a1);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD908255DB87849A_1_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD908255DB87849A_1_ONRECYCLE_OFFSET))(this);
	}

	::Class_2_AD908255DB87849A_1* Method_2_457717A0CF438A7C()
	{
		return ((::Class_2_AD908255DB87849A_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD908255DB87849A_1_METHOD_2_457717A0CF438A7C_OFFSET))(this);
	}
};
