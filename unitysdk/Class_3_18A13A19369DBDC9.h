#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_338357941C502196.h"
#include "unitysdk/RPG/GameCore/TaskState.h"

class Class_1_198C3C5F8B64ECE7;
class Class_2_C6C3225495E5A2D1;
class Class_2_E2910CE9CBBA0DE5;
namespace RPG::GameCore { class StateTreeReactionStateConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_18A13A19369DBDC9_METHOD_3_0581090195E9C81F_OFFSET UNITYSDK_OFFSET(0x911B230)
#define CLASS_3_18A13A19369DBDC9_METHOD_3_0A7C75AE549C5CCF_OFFSET UNITYSDK_OFFSET(0x911AAA0)
#define CLASS_3_18A13A19369DBDC9_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x911B150)
#define CLASS_3_18A13A19369DBDC9_METHOD_3_4A17C0F4A08BBA38_OFFSET UNITYSDK_OFFSET(0x911B220)
#define CLASS_3_18A13A19369DBDC9_METHOD_3_5AB04F3484BD322E_OFFSET UNITYSDK_OFFSET(0x911B240)
#define CLASS_3_18A13A19369DBDC9_METHOD_3_770E95E365DB2B6B_OFFSET UNITYSDK_OFFSET(0x911B0D0)
#define CLASS_3_18A13A19369DBDC9_METHOD_3_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x911B2E0)
#define CLASS_3_18A13A19369DBDC9_METHOD_3_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0x911ACC0)
#define CLASS_3_18A13A19369DBDC9__CTOR_OFFSET UNITYSDK_OFFSET(0x911A900)

inline static constexpr unsigned int Class_3_18A13A19369DBDC9_TypeDefinitionIndex = 49413;

class Class_3_18A13A19369DBDC9 : public ::Class_2_338357941C502196
{
public:
	::Class_2_C6C3225495E5A2D1* Field_3_0; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_E2910CE9CBBA0DE5*>* Field_3_1; // 0x78

	::System::Void _ctor(::RPG::GameCore::StateTreeReactionStateConfig* a1, ::RPG::GameCore::TaskContext* a2, ::Class_1_198C3C5F8B64ECE7* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StateTreeReactionStateConfig*, ::RPG::GameCore::TaskContext*, ::Class_1_198C3C5F8B64ECE7*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_18A13A19369DBDC9__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_0A7C75AE549C5CCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18A13A19369DBDC9_METHOD_3_0A7C75AE549C5CCF_OFFSET))(this);
	}

	::System::Void Method_3_FA58824BA12F6F62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18A13A19369DBDC9_METHOD_3_FA58824BA12F6F62_OFFSET))(this);
	}

	::RPG::GameCore::TaskState Method_3_770E95E365DB2B6B(::System::Single a1)
	{
		return ((::RPG::GameCore::TaskState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_18A13A19369DBDC9_METHOD_3_770E95E365DB2B6B_OFFSET))(this, a1);
	}

	::System::Void Method_3_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18A13A19369DBDC9_METHOD_3_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_3_4A17C0F4A08BBA38()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18A13A19369DBDC9_METHOD_3_4A17C0F4A08BBA38_OFFSET))(this);
	}

	::System::Void Method_3_0581090195E9C81F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18A13A19369DBDC9_METHOD_3_0581090195E9C81F_OFFSET))(this);
	}

	::RPG::GameCore::TaskState Method_3_5AB04F3484BD322E(::System::Single P0)
	{
		return ((::RPG::GameCore::TaskState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_18A13A19369DBDC9_METHOD_3_5AB04F3484BD322E_OFFSET))(this, P0);
	}

	::System::Void Method_3_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18A13A19369DBDC9_METHOD_3_C561FF611C07A44C_OFFSET))(this);
	}
};
