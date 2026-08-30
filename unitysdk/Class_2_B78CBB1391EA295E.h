#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerAndWaitMonopolyEvent; }
namespace System { class Object; }

#define CLASS_2_B78CBB1391EA295E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157B2620)
#define CLASS_2_B78CBB1391EA295E_METHOD_2_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0x157B2160)
#define CLASS_2_B78CBB1391EA295E_METHOD_2_7C37160BCCE68784_OFFSET UNITYSDK_OFFSET(0x157B2850)
#define CLASS_2_B78CBB1391EA295E_METHOD_2_A7E8B52E9ABB8DB9_OFFSET UNITYSDK_OFFSET(0x157B2A40)
#define CLASS_2_B78CBB1391EA295E_METHOD_2_B2AF81294D9C69C7_OFFSET UNITYSDK_OFFSET(0x157B27C0)
#define CLASS_2_B78CBB1391EA295E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157B2110)
#define CLASS_2_B78CBB1391EA295E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x157B2570)
#define CLASS_2_B78CBB1391EA295E_TICK_OFFSET UNITYSDK_OFFSET(0x157B2510)
#define CLASS_2_B78CBB1391EA295E__CTOR_OFFSET UNITYSDK_OFFSET(0x157B2100)

inline static constexpr unsigned int Class_2_B78CBB1391EA295E_TypeDefinitionIndex = 58917;

class Class_2_B78CBB1391EA295E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::TriggerAndWaitMonopolyEvent* OFKGLJOAMLD; // 0x20
	::RPG::Client::LuaUIController* CPIIOIPAAKK; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerAndWaitMonopolyEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerAndWaitMonopolyEvent*))((::PBYTE)hIl2Cpp + CLASS_2_B78CBB1391EA295E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B78CBB1391EA295E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B78CBB1391EA295E_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B78CBB1391EA295E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B78CBB1391EA295E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_B2AF81294D9C69C7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B78CBB1391EA295E_METHOD_2_B2AF81294D9C69C7_OFFSET))(this);
	}

	::System::Void Method_2_1947BC35B7A7FCB8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B78CBB1391EA295E_METHOD_2_1947BC35B7A7FCB8_OFFSET))(this);
	}

	::System::Void Method_2_A7E8B52E9ABB8DB9(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B78CBB1391EA295E_METHOD_2_A7E8B52E9ABB8DB9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7C37160BCCE68784(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_B78CBB1391EA295E_METHOD_2_7C37160BCCE68784_OFFSET))(this, a1);
	}
};
