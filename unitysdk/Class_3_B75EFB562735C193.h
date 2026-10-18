#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_0_16E4307DCC419505_547;
namespace RPG::GameCore { class ByCheckTrialCharacterDie; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B75EFB562735C193_EVALUATE_OFFSET UNITYSDK_OFFSET(0xCF296C0)
#define CLASS_3_B75EFB562735C193_METHOD_3_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0xCF29850)
#define CLASS_3_B75EFB562735C193_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xCF297F0)
#define CLASS_3_B75EFB562735C193_METHOD_3_AD3A707BFE72AA71_OFFSET UNITYSDK_OFFSET(0xCF29A30)
#define CLASS_3_B75EFB562735C193_METHOD_3_BD44A061ECFA4250_OFFSET UNITYSDK_OFFSET(0xCF29C40)
#define CLASS_3_B75EFB562735C193_METHOD_3_EDB0D8DA4A269034_OFFSET UNITYSDK_OFFSET(0xCF29B90)
#define CLASS_3_B75EFB562735C193__CTOR_OFFSET UNITYSDK_OFFSET(0xCF29500)

inline static constexpr unsigned int Class_3_B75EFB562735C193_TypeDefinitionIndex = 57973;

class Class_3_B75EFB562735C193 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckTrialCharacterDie*>
{
public:
	::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckTrialCharacterDie* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckTrialCharacterDie*))((::PBYTE)hIl2Cpp + CLASS_3_B75EFB562735C193__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B75EFB562735C193_EVALUATE_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B75EFB562735C193_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_3_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B75EFB562735C193_METHOD_3_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_3_AD3A707BFE72AA71(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_3_B75EFB562735C193_METHOD_3_AD3A707BFE72AA71_OFFSET))(this, a1);
	}

	::System::Void Method_3_EDB0D8DA4A269034(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_3_B75EFB562735C193_METHOD_3_EDB0D8DA4A269034_OFFSET))(this, a1);
	}

	::System::Void Method_3_BD44A061ECFA4250(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_3_B75EFB562735C193_METHOD_3_BD44A061ECFA4250_OFFSET))(this, a1);
	}
};
