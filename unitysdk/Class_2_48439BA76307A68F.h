#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_976C32A5F32B58FC.h"

namespace MoleMole { class InLevelBuddyDataItem; }

#define CLASS_2_48439BA76307A68F_METHOD_2_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x13EDD230)
#define CLASS_2_48439BA76307A68F_METHOD_2_ECA33935490AF2E4_OFFSET UNITYSDK_OFFSET(0x13EDD410)
#define CLASS_2_48439BA76307A68F__CTOR_OFFSET UNITYSDK_OFFSET(0x13EDD220)

inline static constexpr unsigned int Class_2_48439BA76307A68F_TypeDefinitionIndex = 81648;

class Class_2_48439BA76307A68F : public ::Class_1_976C32A5F32B58FC
{
public:
	::MoleMole::InLevelBuddyDataItem* Field_2_0; // 0x28

	::System::Void _ctor(::MoleMole::InLevelBuddyDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelBuddyDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_48439BA76307A68F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48439BA76307A68F_METHOD_2_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Void Method_2_ECA33935490AF2E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48439BA76307A68F_METHOD_2_ECA33935490AF2E4_OFFSET))(this);
	}
};
