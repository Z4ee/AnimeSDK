#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ConsumeMissionItem; }
namespace RPG::GameCore { class SubMissionRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_C7512EECDA747D51_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16F857F0)
#define CLASS_2_C7512EECDA747D51_METHOD_2_20AECD44A8C53086_OFFSET UNITYSDK_OFFSET(0x16F85F40)
#define CLASS_2_C7512EECDA747D51_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16F86140)
#define CLASS_2_C7512EECDA747D51_METHOD_2_3C029C534AE1FB6B_OFFSET UNITYSDK_OFFSET(0x16F85A70)
#define CLASS_2_C7512EECDA747D51_METHOD_2_3CDD0248353333ED_OFFSET UNITYSDK_OFFSET(0x16F86690)
#define CLASS_2_C7512EECDA747D51_METHOD_2_5900F06CBD61318C_OFFSET UNITYSDK_OFFSET(0x16F86400)
#define CLASS_2_C7512EECDA747D51_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x16F86620)
#define CLASS_2_C7512EECDA747D51_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x16F86200)
#define CLASS_2_C7512EECDA747D51_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16F85900)
#define CLASS_2_C7512EECDA747D51_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16F85E90)
#define CLASS_2_C7512EECDA747D51_TICK_OFFSET UNITYSDK_OFFSET(0x16F85EE0)
#define CLASS_2_C7512EECDA747D51__CTOR_OFFSET UNITYSDK_OFFSET(0x16F857E0)

inline static constexpr unsigned int Class_2_C7512EECDA747D51_TypeDefinitionIndex = 50312;

class Class_2_C7512EECDA747D51 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::RPG::GameCore::TaskContext* Field_2_3; // 0x18
	::RPG::GameCore::ConsumeMissionItem* Field_2_4; // 0x20
	::RPG::GameCore::SubMissionRow* Field_2_5; // 0x28

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

	::System::Void Method_2_3C029C534AE1FB6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7512EECDA747D51_METHOD_2_3C029C534AE1FB6B_OFFSET))(this);
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
