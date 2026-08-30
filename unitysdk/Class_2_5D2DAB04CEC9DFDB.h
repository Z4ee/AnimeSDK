#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_151.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState.h"

class Class_1_B040C6AB11F70C95;
class Class_1_F236C4DB0600E05D;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_5D2DAB04CEC9DFDB_METHOD_2_AC4316562DA73BB5_OFFSET UNITYSDK_OFFSET(0x177DC2D0)
#define CLASS_2_5D2DAB04CEC9DFDB_METHOD_2_D146709AEC7342B9_OFFSET UNITYSDK_OFFSET(0x177DC950)
#define CLASS_2_5D2DAB04CEC9DFDB__CTOR_OFFSET UNITYSDK_OFFSET(0x177DCB30)

inline static constexpr unsigned int Class_2_5D2DAB04CEC9DFDB_TypeDefinitionIndex = 62130;

class Class_2_5D2DAB04CEC9DFDB : public ::Class_1_43BD383C98B4C0C5_151
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* NHJLHHCJKEL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2DAB04CEC9DFDB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_AC4316562DA73BB5(::Class_1_F236C4DB0600E05D* a1, ::Class_1_B040C6AB11F70C95* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F236C4DB0600E05D*, ::Class_1_B040C6AB11F70C95*))((::PBYTE)hIl2Cpp + CLASS_2_5D2DAB04CEC9DFDB_METHOD_2_AC4316562DA73BB5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D146709AEC7342B9(::Class_1_F236C4DB0600E05D* a1, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F236C4DB0600E05D*, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState))((::PBYTE)hIl2Cpp + CLASS_2_5D2DAB04CEC9DFDB_METHOD_2_D146709AEC7342B9_OFFSET))(this, a1, a2);
	}
};
