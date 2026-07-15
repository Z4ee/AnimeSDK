#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_0_16E4307DCC419505_425;
namespace RPG::GameCore { class ByWaitCustomString; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3152A4AA1863E3BC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1634CEE0)
#define CLASS_3_3152A4AA1863E3BC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1634CD60)
#define CLASS_3_3152A4AA1863E3BC_METHOD_3_019A694B80821E6A_OFFSET UNITYSDK_OFFSET(0x1634D1E0)
#define CLASS_3_3152A4AA1863E3BC_METHOD_3_0EF345F8F1CF4181_OFFSET UNITYSDK_OFFSET(0x1634CE40)
#define CLASS_3_3152A4AA1863E3BC_METHOD_3_C74639398F739FDA_OFFSET UNITYSDK_OFFSET(0x1634D0C0)
#define CLASS_3_3152A4AA1863E3BC__CTOR_OFFSET UNITYSDK_OFFSET(0x1634CBA0)

inline static constexpr unsigned int Class_3_3152A4AA1863E3BC_TypeDefinitionIndex = 52254;

class Class_3_3152A4AA1863E3BC : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByWaitCustomString*>
{
public:
	::System::Boolean Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByWaitCustomString* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByWaitCustomString*))((::PBYTE)hIl2Cpp + CLASS_3_3152A4AA1863E3BC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3152A4AA1863E3BC_EVALUATE_OFFSET))(this);
	}

	::System::Void Method_3_0EF345F8F1CF4181(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_3_3152A4AA1863E3BC_METHOD_3_0EF345F8F1CF4181_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3152A4AA1863E3BC_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_C74639398F739FDA(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_3_3152A4AA1863E3BC_METHOD_3_C74639398F739FDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_019A694B80821E6A(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_3_3152A4AA1863E3BC_METHOD_3_019A694B80821E6A_OFFSET))(this, a1);
	}
};
