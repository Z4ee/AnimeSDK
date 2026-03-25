#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_0_16E4307DCC419505_375;
namespace RPG::GameCore { class ByCheckTurnCountMatch; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7C3043088B2B3050_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8ADBB0)
#define CLASS_3_7C3043088B2B3050_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB8ADC60)
#define CLASS_3_7C3043088B2B3050_METHOD_3_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xB8ADD10)
#define CLASS_3_7C3043088B2B3050_METHOD_3_FEDA61C1CFEFF6FC_OFFSET UNITYSDK_OFFSET(0xB8ADDE0)
#define CLASS_3_7C3043088B2B3050__CTOR_OFFSET UNITYSDK_OFFSET(0xB8ADAD0)
#define CLASS_3_7C3043088B2B3050___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8AE030)

inline static constexpr unsigned int Class_3_7C3043088B2B3050_TypeDefinitionIndex = 46750;

class Class_3_7C3043088B2B3050 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckTurnCountMatch*>
{
public:
	::RPG::GameCore::GameEntity* Field_3_0; // 0x28
	::System::UInt32 Field_3_1; // 0x30
	::RPG::GameCore::TeamType Field_3_2; // 0x34
	::System::UInt32 Field_3_3; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckTurnCountMatch* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckTurnCountMatch*))((::PBYTE)hIl2Cpp + CLASS_3_7C3043088B2B3050__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C3043088B2B3050_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C3043088B2B3050_EVALUATE_OFFSET))(this);
	}

	::System::Void Method_3_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C3043088B2B3050_METHOD_3_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_3_FEDA61C1CFEFF6FC(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_3_7C3043088B2B3050_METHOD_3_FEDA61C1CFEFF6FC_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C3043088B2B3050___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
