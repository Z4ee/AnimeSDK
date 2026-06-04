#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_138.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState.h"

class Class_1_B040C6AB11F70C95;
class Class_1_F236C4DB0600E05D;

#define CLASS_2_2208CCE77FE35788_METHOD_2_45C099F7690BA6C1_OFFSET UNITYSDK_OFFSET(0xB513610)
#define CLASS_2_2208CCE77FE35788_METHOD_2_80BFDEA582AB58EF_OFFSET UNITYSDK_OFFSET(0xB5133A0)
#define CLASS_2_2208CCE77FE35788__CTOR_OFFSET UNITYSDK_OFFSET(0xB513750)

inline static constexpr unsigned int Class_2_2208CCE77FE35788_TypeDefinitionIndex = 58029;

class Class_2_2208CCE77FE35788 : public ::Class_1_43BD383C98B4C0C5_138
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2208CCE77FE35788__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_80BFDEA582AB58EF(::Class_1_F236C4DB0600E05D* a1, ::Class_1_B040C6AB11F70C95* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F236C4DB0600E05D*, ::Class_1_B040C6AB11F70C95*))((::PBYTE)hIl2Cpp + CLASS_2_2208CCE77FE35788_METHOD_2_80BFDEA582AB58EF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_45C099F7690BA6C1(::Class_1_F236C4DB0600E05D* a1, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F236C4DB0600E05D*, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState))((::PBYTE)hIl2Cpp + CLASS_2_2208CCE77FE35788_METHOD_2_45C099F7690BA6C1_OFFSET))(this, a1, a2);
	}
};
