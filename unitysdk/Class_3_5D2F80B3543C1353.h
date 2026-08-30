#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D989B1C7FBBB8318.h"
#include "unitysdk/RPG/GameCore/TaskState.h"

class Class_1_198C3C5F8B64ECE7;
class Class_2_17148030AA2B3E1D;
class Class_2_E2910CE9CBBA0DE5;
namespace RPG::GameCore { class StateTreeReactionStateConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_5D2F80B3543C1353_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x15200DB0)
#define CLASS_3_5D2F80B3543C1353_METHOD_3_686221D5DF498040_OFFSET UNITYSDK_OFFSET(0x152005E0)
#define CLASS_3_5D2F80B3543C1353_METHOD_3_770E95E365DB2B6B_OFFSET UNITYSDK_OFFSET(0x15200D30)
#define CLASS_3_5D2F80B3543C1353_METHOD_3_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0x15200860)
#define CLASS_3_5D2F80B3543C1353__CTOR_OFFSET UNITYSDK_OFFSET(0x15200420)

inline static constexpr unsigned int Class_3_5D2F80B3543C1353_TypeDefinitionIndex = 53846;

class Class_3_5D2F80B3543C1353 : public ::Class_2_D989B1C7FBBB8318
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_E2910CE9CBBA0DE5*>* FFFLIDJBKBI; // 0x70
	::Class_2_17148030AA2B3E1D* PKEILLOHGFC; // 0x78

	::System::Void _ctor(::RPG::GameCore::StateTreeReactionStateConfig* a1, ::RPG::GameCore::TaskContext* a2, ::Class_1_198C3C5F8B64ECE7* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StateTreeReactionStateConfig*, ::RPG::GameCore::TaskContext*, ::Class_1_198C3C5F8B64ECE7*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5D2F80B3543C1353__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_686221D5DF498040()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5D2F80B3543C1353_METHOD_3_686221D5DF498040_OFFSET))(this);
	}

	::System::Void Method_3_FA58824BA12F6F62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5D2F80B3543C1353_METHOD_3_FA58824BA12F6F62_OFFSET))(this);
	}

	::RPG::GameCore::TaskState Method_3_770E95E365DB2B6B(::System::Single a1)
	{
		return ((::RPG::GameCore::TaskState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5D2F80B3543C1353_METHOD_3_770E95E365DB2B6B_OFFSET))(this, a1);
	}

	::System::Void Method_3_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5D2F80B3543C1353_METHOD_3_151E25A63D14DDB0_OFFSET))(this);
	}
};
