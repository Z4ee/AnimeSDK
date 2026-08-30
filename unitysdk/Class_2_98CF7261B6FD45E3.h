#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class ConsumeMissionItemPerformance; }
namespace RPG::GameCore { class SubMissionRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_98CF7261B6FD45E3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16907600)
#define CLASS_2_98CF7261B6FD45E3_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x16908100)
#define CLASS_2_98CF7261B6FD45E3_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x16907F50)
#define CLASS_2_98CF7261B6FD45E3_METHOD_2_9D0688AE2E08E349_OFFSET UNITYSDK_OFFSET(0x169078E0)
#define CLASS_2_98CF7261B6FD45E3_METHOD_2_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0x16907BB0)
#define CLASS_2_98CF7261B6FD45E3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x169077F0)
#define CLASS_2_98CF7261B6FD45E3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16907D30)
#define CLASS_2_98CF7261B6FD45E3_TICK_OFFSET UNITYSDK_OFFSET(0x16907E10)
#define CLASS_2_98CF7261B6FD45E3__CTOR_OFFSET UNITYSDK_OFFSET(0x16907510)

inline static constexpr unsigned int Class_2_98CF7261B6FD45E3_TypeDefinitionIndex = 52974;

class Class_2_98CF7261B6FD45E3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* HKBOGHBKDCN; // 0x0
	// static const ::System::String* KICKKGGMKMO; // 0x0
	// static const ::System::String* LCOMCFLABDK; // 0x0
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::ConsumeMissionItemPerformance* OFKGLJOAMLD; // 0x20
	::Class_3_07C3C4D2990C49EE* KPHGLEKEALH; // 0x28
	::Class_3_07C3C4D2990C49EE* IKNPCLDDCDI; // 0x30
	::Class_3_07C3C4D2990C49EE* JOABCNLPPGI; // 0x38
	::RPG::GameCore::SubMissionRow* EFLMIIAAEGP; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConsumeMissionItemPerformance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConsumeMissionItemPerformance*))((::PBYTE)hIl2Cpp + CLASS_2_98CF7261B6FD45E3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CF7261B6FD45E3_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CF7261B6FD45E3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CF7261B6FD45E3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_98CF7261B6FD45E3_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_9D0688AE2E08E349()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CF7261B6FD45E3_METHOD_2_9D0688AE2E08E349_OFFSET))(this);
	}

	::System::Void Method_2_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_98CF7261B6FD45E3_METHOD_2_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_2_E52129E82CD2D7F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CF7261B6FD45E3_METHOD_2_E52129E82CD2D7F8_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CF7261B6FD45E3_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}
};
