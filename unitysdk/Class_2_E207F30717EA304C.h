#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class ChimeraTriggerPerformanceByPhase; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_E207F30717EA304C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x175FA890)
#define CLASS_2_E207F30717EA304C_METHOD_2_9871B2ED609502A4_OFFSET UNITYSDK_OFFSET(0x175FAF30)
#define CLASS_2_E207F30717EA304C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x175FA9B0)
#define CLASS_2_E207F30717EA304C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x175FAD10)
#define CLASS_2_E207F30717EA304C_TICK_OFFSET UNITYSDK_OFFSET(0x175FAE30)
#define CLASS_2_E207F30717EA304C__CTOR_OFFSET UNITYSDK_OFFSET(0x175FA880)

inline static constexpr unsigned int Class_2_E207F30717EA304C_TypeDefinitionIndex = 51157;

class Class_2_E207F30717EA304C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::RPG::GameCore::ChimeraTriggerPerformanceByPhase* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChimeraTriggerPerformanceByPhase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChimeraTriggerPerformanceByPhase*))((::PBYTE)hIl2Cpp + CLASS_2_E207F30717EA304C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E207F30717EA304C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E207F30717EA304C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E207F30717EA304C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E207F30717EA304C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_9871B2ED609502A4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E207F30717EA304C_METHOD_2_9871B2ED609502A4_OFFSET))(this, a1);
	}
};
