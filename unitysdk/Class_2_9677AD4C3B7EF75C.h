#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_142.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState.h"

class Class_1_B040C6AB11F70C95;
class Class_1_F236C4DB0600E05D;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_9677AD4C3B7EF75C_METHOD_2_5228D02FC8E07C8E_OFFSET UNITYSDK_OFFSET(0x155775C0)
#define CLASS_2_9677AD4C3B7EF75C_METHOD_2_D146709AEC7342B9_OFFSET UNITYSDK_OFFSET(0x15577DB0)
#define CLASS_2_9677AD4C3B7EF75C__CTOR_OFFSET UNITYSDK_OFFSET(0x15577F90)

inline static constexpr unsigned int Class_2_9677AD4C3B7EF75C_TypeDefinitionIndex = 59295;

class Class_2_9677AD4C3B7EF75C : public ::Class_1_43BD383C98B4C0C5_142
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9677AD4C3B7EF75C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5228D02FC8E07C8E(::Class_1_F236C4DB0600E05D* a1, ::Class_1_B040C6AB11F70C95* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F236C4DB0600E05D*, ::Class_1_B040C6AB11F70C95*))((::PBYTE)hIl2Cpp + CLASS_2_9677AD4C3B7EF75C_METHOD_2_5228D02FC8E07C8E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D146709AEC7342B9(::Class_1_F236C4DB0600E05D* a1, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F236C4DB0600E05D*, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState))((::PBYTE)hIl2Cpp + CLASS_2_9677AD4C3B7EF75C_METHOD_2_D146709AEC7342B9_OFFSET))(this, a1, a2);
	}
};
