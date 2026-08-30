#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_0_16E4307DCC419505_460;
namespace RPG::GameCore { class ByWaitCustomString; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A3B55402136741DB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156D8090)
#define CLASS_3_A3B55402136741DB_EVALUATE_OFFSET UNITYSDK_OFFSET(0x156D7F20)
#define CLASS_3_A3B55402136741DB_METHOD_3_019A694B80821E6A_OFFSET UNITYSDK_OFFSET(0x156D83B0)
#define CLASS_3_A3B55402136741DB_METHOD_3_0EF345F8F1CF4181_OFFSET UNITYSDK_OFFSET(0x156D8000)
#define CLASS_3_A3B55402136741DB_METHOD_3_C74639398F739FDA_OFFSET UNITYSDK_OFFSET(0x156D8290)
#define CLASS_3_A3B55402136741DB__CTOR_OFFSET UNITYSDK_OFFSET(0x156D7D30)

inline static constexpr unsigned int Class_3_A3B55402136741DB_TypeDefinitionIndex = 54941;

class Class_3_A3B55402136741DB : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByWaitCustomString*>
{
public:
	::System::Boolean CCIIKMPBJDM; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByWaitCustomString* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByWaitCustomString*))((::PBYTE)hIl2Cpp + CLASS_3_A3B55402136741DB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3B55402136741DB_EVALUATE_OFFSET))(this);
	}

	::System::Void Method_3_0EF345F8F1CF4181(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_3_A3B55402136741DB_METHOD_3_0EF345F8F1CF4181_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3B55402136741DB_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_C74639398F739FDA(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_3_A3B55402136741DB_METHOD_3_C74639398F739FDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_019A694B80821E6A(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_3_A3B55402136741DB_METHOD_3_019A694B80821E6A_OFFSET))(this, a1);
	}
};
