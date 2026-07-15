#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class MissionItemConfigList; }
namespace RPG::GameCore { class SelectMissionItem; }
namespace RPG::GameCore { class SelectMissionItemConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_C8268140796417CB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17604430)
#define CLASS_2_C8268140796417CB_METHOD_2_00BCBB7CCA52B0F9_OFFSET UNITYSDK_OFFSET(0x176053E0)
#define CLASS_2_C8268140796417CB_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x17604900)
#define CLASS_2_C8268140796417CB_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x17605310)
#define CLASS_2_C8268140796417CB_METHOD_2_3D93676A6C74538B_OFFSET UNITYSDK_OFFSET(0x17605010)
#define CLASS_2_C8268140796417CB_METHOD_2_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0x17605A80)
#define CLASS_2_C8268140796417CB_METHOD_2_723F040120376E52_OFFSET UNITYSDK_OFFSET(0x17605220)
#define CLASS_2_C8268140796417CB_METHOD_2_7744894CEC41BF06_1_OFFSET UNITYSDK_OFFSET(0x176059D0)
#define CLASS_2_C8268140796417CB_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x17605760)
#define CLASS_2_C8268140796417CB_METHOD_2_A10DADB5B6A4C8AC_OFFSET UNITYSDK_OFFSET(0x17605810)
#define CLASS_2_C8268140796417CB_METHOD_2_FC27F62E1756DC9B_OFFSET UNITYSDK_OFFSET(0x17604CC0)
#define CLASS_2_C8268140796417CB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17604750)
#define CLASS_2_C8268140796417CB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17604A40)
#define CLASS_2_C8268140796417CB_TICK_OFFSET UNITYSDK_OFFSET(0x17604B80)
#define CLASS_2_C8268140796417CB__CTOR_OFFSET UNITYSDK_OFFSET(0x176042D0)

inline static constexpr unsigned int Class_2_C8268140796417CB_TypeDefinitionIndex = 50787;

class Class_2_C8268140796417CB : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_3; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_2_4; // 0x30
	::RPG::GameCore::TaskContext* Field_2_5; // 0x38
	::RPG::GameCore::MissionItemConfigList* Field_2_6; // 0x40
	::RPG::GameCore::SelectMissionItem* Field_2_7; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SelectMissionItem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SelectMissionItem*))((::PBYTE)hIl2Cpp + CLASS_2_C8268140796417CB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8268140796417CB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8268140796417CB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8268140796417CB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C8268140796417CB_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_FC27F62E1756DC9B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C8268140796417CB_METHOD_2_FC27F62E1756DC9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_00BCBB7CCA52B0F9(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C8268140796417CB_METHOD_2_00BCBB7CCA52B0F9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_723F040120376E52(::RPG::GameCore::SelectMissionItemConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SelectMissionItemConfig*))((::PBYTE)hIl2Cpp + CLASS_2_C8268140796417CB_METHOD_2_723F040120376E52_OFFSET))(this, a1);
	}

	::System::Void Method_2_A10DADB5B6A4C8AC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C8268140796417CB_METHOD_2_A10DADB5B6A4C8AC_OFFSET))(this, a1);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8268140796417CB_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8268140796417CB_METHOD_2_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8268140796417CB_METHOD_2_7744894CEC41BF06_1_OFFSET))(this);
	}

	::System::Void Method_2_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8268140796417CB_METHOD_2_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Boolean Method_2_3D93676A6C74538B(::RPG::GameCore::MissionItemConfigList* a1, ::RPG::GameCore::SelectMissionItemConfig* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MissionItemConfigList*, ::RPG::GameCore::SelectMissionItemConfig*))((::PBYTE)hIl2Cpp + CLASS_2_C8268140796417CB_METHOD_2_3D93676A6C74538B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8268140796417CB_METHOD_2_5F08B426ADF31FF5_OFFSET))(this);
	}
};
