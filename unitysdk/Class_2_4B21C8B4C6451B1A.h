#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AutoReleaseReferenceState.h"
#include "unitysdk/System/Collections/Generic/HashSet_1.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_4B21C8B4C6451B1A_GET_REFERENCESTATE_OFFSET UNITYSDK_OFFSET(0x10942AE0)
#define CLASS_2_4B21C8B4C6451B1A_METHOD_2_457717A0CF438A7C_OFFSET UNITYSDK_OFFSET(0x10942BB0)
#define CLASS_2_4B21C8B4C6451B1A_ONALLOC_OFFSET UNITYSDK_OFFSET(0x10942B00)
#define CLASS_2_4B21C8B4C6451B1A_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x10942B60)
#define CLASS_2_4B21C8B4C6451B1A_SET_REFERENCESTATE_OFFSET UNITYSDK_OFFSET(0x10942AF0)
#define CLASS_2_4B21C8B4C6451B1A__CTOR_OFFSET UNITYSDK_OFFSET(0x10942C00)

inline static constexpr unsigned int Class_2_4B21C8B4C6451B1A_TypeDefinitionIndex = 47852;

class Class_2_4B21C8B4C6451B1A : public ::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>
{
public:
	::RPG::AutoReleaseReferenceState _ReferenceState_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B21C8B4C6451B1A__CTOR_OFFSET))(this);
	}

	::RPG::AutoReleaseReferenceState get_ReferenceState()
	{
		return ((::RPG::AutoReleaseReferenceState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B21C8B4C6451B1A_GET_REFERENCESTATE_OFFSET))(this);
	}

	::System::Void set_ReferenceState(::RPG::AutoReleaseReferenceState value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AutoReleaseReferenceState))((::PBYTE)hIl2Cpp + CLASS_2_4B21C8B4C6451B1A_SET_REFERENCESTATE_OFFSET))(this, value);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B21C8B4C6451B1A_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B21C8B4C6451B1A_ONRECYCLE_OFFSET))(this);
	}

	::Class_2_4B21C8B4C6451B1A* Method_2_457717A0CF438A7C()
	{
		return ((::Class_2_4B21C8B4C6451B1A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B21C8B4C6451B1A_METHOD_2_457717A0CF438A7C_OFFSET))(this);
	}
};
