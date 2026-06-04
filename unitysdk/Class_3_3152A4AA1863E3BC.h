#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_0_16E4307DCC419505_401;
namespace RPG::GameCore { class ByWaitCustomString; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3152A4AA1863E3BC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x138A8070)
#define CLASS_3_3152A4AA1863E3BC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x138A7F10)
#define CLASS_3_3152A4AA1863E3BC_METHOD_3_019A694B80821E6A_OFFSET UNITYSDK_OFFSET(0x138A8370)
#define CLASS_3_3152A4AA1863E3BC_METHOD_3_0EF345F8F1CF4181_OFFSET UNITYSDK_OFFSET(0x138A7FE0)
#define CLASS_3_3152A4AA1863E3BC_METHOD_3_C74639398F739FDA_OFFSET UNITYSDK_OFFSET(0x138A8250)
#define CLASS_3_3152A4AA1863E3BC__CTOR_OFFSET UNITYSDK_OFFSET(0x138A7D50)
#define CLASS_3_3152A4AA1863E3BC___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x138A8450)

inline static constexpr unsigned int Class_3_3152A4AA1863E3BC_TypeDefinitionIndex = 51163;

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

	::System::Void Method_3_0EF345F8F1CF4181(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_3_3152A4AA1863E3BC_METHOD_3_0EF345F8F1CF4181_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3152A4AA1863E3BC_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_C74639398F739FDA(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_3_3152A4AA1863E3BC_METHOD_3_C74639398F739FDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_019A694B80821E6A(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_3_3152A4AA1863E3BC_METHOD_3_019A694B80821E6A_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3152A4AA1863E3BC___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
