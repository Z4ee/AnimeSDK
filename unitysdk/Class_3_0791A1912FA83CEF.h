#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_0_16E4307DCC419505_382;
namespace RPG::GameCore { class ByCheckTrialCharacterDie; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0791A1912FA83CEF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x8F62BD0)
#define CLASS_3_0791A1912FA83CEF_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x8F62CF0)
#define CLASS_3_0791A1912FA83CEF_METHOD_3_5A6E6A9E8375DF48_OFFSET UNITYSDK_OFFSET(0x8F62EF0)
#define CLASS_3_0791A1912FA83CEF_METHOD_3_BD44A061ECFA4250_OFFSET UNITYSDK_OFFSET(0x8F63100)
#define CLASS_3_0791A1912FA83CEF_METHOD_3_E21AC6EE08DC160A_OFFSET UNITYSDK_OFFSET(0x8F62D50)
#define CLASS_3_0791A1912FA83CEF_METHOD_3_E9A65FEB3BB1873E_OFFSET UNITYSDK_OFFSET(0x8F63050)
#define CLASS_3_0791A1912FA83CEF__CTOR_OFFSET UNITYSDK_OFFSET(0x8F62A50)

inline static constexpr unsigned int Class_3_0791A1912FA83CEF_TypeDefinitionIndex = 53458;

class Class_3_0791A1912FA83CEF : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckTrialCharacterDie*>
{
public:
	::RPG::GameCore::GameEntity* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckTrialCharacterDie* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckTrialCharacterDie*))((::PBYTE)hIl2Cpp + CLASS_3_0791A1912FA83CEF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0791A1912FA83CEF_EVALUATE_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0791A1912FA83CEF_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_3_E21AC6EE08DC160A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0791A1912FA83CEF_METHOD_3_E21AC6EE08DC160A_OFFSET))(this);
	}

	::System::Void Method_3_5A6E6A9E8375DF48(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_3_0791A1912FA83CEF_METHOD_3_5A6E6A9E8375DF48_OFFSET))(this, a1);
	}

	::System::Void Method_3_E9A65FEB3BB1873E(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_3_0791A1912FA83CEF_METHOD_3_E9A65FEB3BB1873E_OFFSET))(this, a1);
	}

	::System::Void Method_3_BD44A061ECFA4250(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_3_0791A1912FA83CEF_METHOD_3_BD44A061ECFA4250_OFFSET))(this, a1);
	}
};
