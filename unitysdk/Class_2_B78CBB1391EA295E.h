#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerAndWaitMonopolyEvent; }
namespace System { class Object; }

#define CLASS_2_B78CBB1391EA295E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x139B7320)
#define CLASS_2_B78CBB1391EA295E_METHOD_2_1266C0B90690EC46_OFFSET UNITYSDK_OFFSET(0x139B7550)
#define CLASS_2_B78CBB1391EA295E_METHOD_2_A7E8B52E9ABB8DB9_OFFSET UNITYSDK_OFFSET(0x139B7740)
#define CLASS_2_B78CBB1391EA295E_METHOD_2_D460587695D41831_OFFSET UNITYSDK_OFFSET(0x139B6F50)
#define CLASS_2_B78CBB1391EA295E_METHOD_2_EAC2737A96E071C9_OFFSET UNITYSDK_OFFSET(0x139B74C0)
#define CLASS_2_B78CBB1391EA295E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x139B6F00)
#define CLASS_2_B78CBB1391EA295E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x139B7270)
#define CLASS_2_B78CBB1391EA295E_TICK_OFFSET UNITYSDK_OFFSET(0x139B7210)
#define CLASS_2_B78CBB1391EA295E__CTOR_OFFSET UNITYSDK_OFFSET(0x139B6EF0)

inline static constexpr unsigned int Class_2_B78CBB1391EA295E_TypeDefinitionIndex = 54908;

class Class_2_B78CBB1391EA295E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TriggerAndWaitMonopolyEvent* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::Client::LuaUIController* Field_2_2; // 0x28

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

	::System::Void Method_2_EAC2737A96E071C9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B78CBB1391EA295E_METHOD_2_EAC2737A96E071C9_OFFSET))(this);
	}

	::System::Void Method_2_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B78CBB1391EA295E_METHOD_2_D460587695D41831_OFFSET))(this);
	}

	::System::Void Method_2_A7E8B52E9ABB8DB9(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B78CBB1391EA295E_METHOD_2_A7E8B52E9ABB8DB9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1266C0B90690EC46(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_B78CBB1391EA295E_METHOD_2_1266C0B90690EC46_OFFSET))(this, a1);
	}
};
