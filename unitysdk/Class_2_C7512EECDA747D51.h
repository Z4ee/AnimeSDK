#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ConsumeMissionItem; }
namespace RPG::GameCore { class SubMissionRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_C7512EECDA747D51_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B430E70)
#define CLASS_2_C7512EECDA747D51_METHOD_2_20AECD44A8C53086_OFFSET UNITYSDK_OFFSET(0x1B431630)
#define CLASS_2_C7512EECDA747D51_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1B431830)
#define CLASS_2_C7512EECDA747D51_METHOD_2_3BCF0226A6CDC13B_OFFSET UNITYSDK_OFFSET(0x1B4310F0)
#define CLASS_2_C7512EECDA747D51_METHOD_2_3CDD0248353333ED_OFFSET UNITYSDK_OFFSET(0x1B431DE0)
#define CLASS_2_C7512EECDA747D51_METHOD_2_5900F06CBD61318C_OFFSET UNITYSDK_OFFSET(0x1B431B50)
#define CLASS_2_C7512EECDA747D51_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1B431D70)
#define CLASS_2_C7512EECDA747D51_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x1B4318F0)
#define CLASS_2_C7512EECDA747D51_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B430F80)
#define CLASS_2_C7512EECDA747D51_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B431580)
#define CLASS_2_C7512EECDA747D51_TICK_OFFSET UNITYSDK_OFFSET(0x1B4315D0)
#define CLASS_2_C7512EECDA747D51__CTOR_OFFSET UNITYSDK_OFFSET(0x1B430E60)

inline static constexpr unsigned int Class_2_C7512EECDA747D51_TypeDefinitionIndex = 52975;

class Class_2_C7512EECDA747D51 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* HKBOGHBKDCN; // 0x0
	// static const ::System::String* KICKKGGMKMO; // 0x0
	// static const ::System::String* LCOMCFLABDK; // 0x0
	::RPG::GameCore::ConsumeMissionItem* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::GameCore::SubMissionRow* EFLMIIAAEGP; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConsumeMissionItem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConsumeMissionItem*))((::PBYTE)hIl2Cpp + CLASS_2_C7512EECDA747D51__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7512EECDA747D51_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7512EECDA747D51_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7512EECDA747D51_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C7512EECDA747D51_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_3BCF0226A6CDC13B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7512EECDA747D51_METHOD_2_3BCF0226A6CDC13B_OFFSET))(this);
	}

	::System::Boolean Method_2_20AECD44A8C53086()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7512EECDA747D51_METHOD_2_20AECD44A8C53086_OFFSET))(this);
	}

	::System::Void Method_2_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C7512EECDA747D51_METHOD_2_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_2_5900F06CBD61318C(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C7512EECDA747D51_METHOD_2_5900F06CBD61318C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7512EECDA747D51_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7512EECDA747D51_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_3CDD0248353333ED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C7512EECDA747D51_METHOD_2_3CDD0248353333ED_OFFSET))(this, a1);
	}
};
