#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_338357941C502196.h"
#include "unitysdk/RPG/GameCore/TaskState.h"

class Class_1_198C3C5F8B64ECE7;
class Class_2_17148030AA2B3E1D;
class Class_2_E2910CE9CBBA0DE5;
namespace RPG::GameCore { class StateTreeReactionStateConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_18A13A19369DBDC9_METHOD_3_0581090195E9C81F_OFFSET UNITYSDK_OFFSET(0xAF4BB90)
#define CLASS_3_18A13A19369DBDC9_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xAF4BAB0)
#define CLASS_3_18A13A19369DBDC9_METHOD_3_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0xAF4B3B0)
#define CLASS_3_18A13A19369DBDC9_METHOD_3_5A94436233800AC6_OFFSET UNITYSDK_OFFSET(0xAF4BB80)
#define CLASS_3_18A13A19369DBDC9_METHOD_3_770E95E365DB2B6B_OFFSET UNITYSDK_OFFSET(0xAF4BA30)
#define CLASS_3_18A13A19369DBDC9_METHOD_3_92B7DAF00A0105B2_OFFSET UNITYSDK_OFFSET(0xAF4BBA0)
#define CLASS_3_18A13A19369DBDC9_METHOD_3_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0xAF4BC30)
#define CLASS_3_18A13A19369DBDC9_METHOD_3_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0xAF4B630)
#define CLASS_3_18A13A19369DBDC9__CTOR_OFFSET UNITYSDK_OFFSET(0xAF4B210)

inline static constexpr unsigned int Class_3_18A13A19369DBDC9_TypeDefinitionIndex = 50080;

class Class_3_18A13A19369DBDC9 : public ::Class_2_338357941C502196
{
public:
	::Class_2_17148030AA2B3E1D* Field_3_0; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_E2910CE9CBBA0DE5*>* Field_3_1; // 0x78

	::System::Void _ctor(::RPG::GameCore::StateTreeReactionStateConfig* a1, ::RPG::GameCore::TaskContext* a2, ::Class_1_198C3C5F8B64ECE7* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StateTreeReactionStateConfig*, ::RPG::GameCore::TaskContext*, ::Class_1_198C3C5F8B64ECE7*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_18A13A19369DBDC9__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_3B7145E79424FB75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18A13A19369DBDC9_METHOD_3_3B7145E79424FB75_OFFSET))(this);
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

	::System::Void Method_3_5A94436233800AC6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18A13A19369DBDC9_METHOD_3_5A94436233800AC6_OFFSET))(this);
	}

	::System::Void Method_3_0581090195E9C81F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18A13A19369DBDC9_METHOD_3_0581090195E9C81F_OFFSET))(this);
	}

	::RPG::GameCore::TaskState Method_3_92B7DAF00A0105B2(::System::Single a1)
	{
		return ((::RPG::GameCore::TaskState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_18A13A19369DBDC9_METHOD_3_92B7DAF00A0105B2_OFFSET))(this, a1);
	}

	::System::Void Method_3_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18A13A19369DBDC9_METHOD_3_C561FF611C07A44C_OFFSET))(this);
	}
};
