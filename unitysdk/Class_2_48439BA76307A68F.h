#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_976C32A5F32B58FC.h"

namespace MoleMole { class InLevelBuddyDataItem; }

#define CLASS_2_48439BA76307A68F_METHOD_2_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x17262780)
#define CLASS_2_48439BA76307A68F_METHOD_2_C9A3013DD208C696_OFFSET UNITYSDK_OFFSET(0x17262960)
#define CLASS_2_48439BA76307A68F__CTOR_OFFSET UNITYSDK_OFFSET(0x17262770)

inline static constexpr unsigned int Class_2_48439BA76307A68F_TypeDefinitionIndex = 52482;

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

	::System::Void Method_2_C9A3013DD208C696()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48439BA76307A68F_METHOD_2_C9A3013DD208C696_OFFSET))(this);
	}
};
