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

#define CLASS_2_C8268140796417CB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE2CD290)
#define CLASS_2_C8268140796417CB_METHOD_2_00BCBB7CCA52B0F9_OFFSET UNITYSDK_OFFSET(0xE2CE270)
#define CLASS_2_C8268140796417CB_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xE2CD760)
#define CLASS_2_C8268140796417CB_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xE2CE1A0)
#define CLASS_2_C8268140796417CB_METHOD_2_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0xE2CE910)
#define CLASS_2_C8268140796417CB_METHOD_2_723F040120376E52_OFFSET UNITYSDK_OFFSET(0xE2CE0B0)
#define CLASS_2_C8268140796417CB_METHOD_2_7744894CEC41BF06_1_OFFSET UNITYSDK_OFFSET(0xE2CE860)
#define CLASS_2_C8268140796417CB_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0xE2CE5F0)
#define CLASS_2_C8268140796417CB_METHOD_2_A10DADB5B6A4C8AC_OFFSET UNITYSDK_OFFSET(0xE2CE6A0)
#define CLASS_2_C8268140796417CB_METHOD_2_AE415B014D1F5508_OFFSET UNITYSDK_OFFSET(0xE2CDE70)
#define CLASS_2_C8268140796417CB_METHOD_2_FC27F62E1756DC9B_OFFSET UNITYSDK_OFFSET(0xE2CDB20)
#define CLASS_2_C8268140796417CB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE2CD5B0)
#define CLASS_2_C8268140796417CB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE2CD8A0)
#define CLASS_2_C8268140796417CB_TICK_OFFSET UNITYSDK_OFFSET(0xE2CD9E0)
#define CLASS_2_C8268140796417CB__CTOR_OFFSET UNITYSDK_OFFSET(0xE2CD130)

inline static constexpr unsigned int Class_2_C8268140796417CB_TypeDefinitionIndex = 53469;

class Class_2_C8268140796417CB : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* PAEPCIMJPGM; // 0x0
	::Class_3_07C3C4D2990C49EE* BEHIGGIDIIK; // 0x18
	::Class_3_07C3C4D2990C49EE* IKNPCLDDCDI; // 0x20
	::Class_3_07C3C4D2990C49EE* LEPBEGLNCDE; // 0x28
	::RPG::GameCore::MissionItemConfigList* ENLBIHNPGOD; // 0x30
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
	::RPG::GameCore::SelectMissionItem* OFKGLJOAMLD; // 0x40
	::Class_3_07C3C4D2990C49EE* JOABCNLPPGI; // 0x48

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

	::System::Boolean Method_2_AE415B014D1F5508(::RPG::GameCore::MissionItemConfigList* a1, ::RPG::GameCore::SelectMissionItemConfig* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MissionItemConfigList*, ::RPG::GameCore::SelectMissionItemConfig*))((::PBYTE)hIl2Cpp + CLASS_2_C8268140796417CB_METHOD_2_AE415B014D1F5508_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8268140796417CB_METHOD_2_5F08B426ADF31FF5_OFFSET))(this);
	}
};
