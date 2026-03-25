#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A2D8E5AB4B623162.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_0_16E4307DCC419505_420;
namespace RPG::GameCore { class AbilityComponent; }
namespace RPG::GameCore { class ChessAbilityConfig; }

#define CLASS_2_1826750844BBDC76_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11109D30)
#define CLASS_2_1826750844BBDC76_METHOD_2_2FA22A822BDD19EE_OFFSET UNITYSDK_OFFSET(0x11109E30)
#define CLASS_2_1826750844BBDC76_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x11109D80)
#define CLASS_2_1826750844BBDC76_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x1110A100)
#define CLASS_2_1826750844BBDC76_METHOD_2_8EDB7FE5AA37C50F_1_OFFSET UNITYSDK_OFFSET(0x1110A0D0)
#define CLASS_2_1826750844BBDC76_METHOD_2_8EDB7FE5AA37C50F_OFFSET UNITYSDK_OFFSET(0x1110A0C0)
#define CLASS_2_1826750844BBDC76_METHOD_2_9D1D6215626AC7FE_OFFSET UNITYSDK_OFFSET(0x1110A110)
#define CLASS_2_1826750844BBDC76_METHOD_2_AF3CCBABC25F48C0_OFFSET UNITYSDK_OFFSET(0x1110A0E0)
#define CLASS_2_1826750844BBDC76__CTOR_OFFSET UNITYSDK_OFFSET(0x11109C60)
#define CLASS_2_1826750844BBDC76___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1110A0F0)

inline static constexpr unsigned int Class_2_1826750844BBDC76_TypeDefinitionIndex = 45183;

class Class_2_1826750844BBDC76 : public ::Class_1_A2D8E5AB4B623162
{
public:
	::RPG::GameCore::ChessAbilityConfig* Field_2_0; // 0x90
	::Class_0_16E4307DCC419505_420* Field_2_1; // 0x98
	::RPG::GameCore::FixPoint Field_2_2; // 0xA0
	::RPG::GameCore::FixPoint Field_2_3; // 0xA8

	::System::Void _ctor(::RPG::GameCore::AbilityComponent* a1, ::RPG::GameCore::ChessAbilityConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityComponent*, ::RPG::GameCore::ChessAbilityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_1826750844BBDC76__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1826750844BBDC76_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1826750844BBDC76_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_2FA22A822BDD19EE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1826750844BBDC76_METHOD_2_2FA22A822BDD19EE_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_2_8EDB7FE5AA37C50F()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1826750844BBDC76_METHOD_2_8EDB7FE5AA37C50F_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_8EDB7FE5AA37C50F_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1826750844BBDC76_METHOD_2_8EDB7FE5AA37C50F_1_OFFSET))(this);
	}

	::System::Void Method_2_AF3CCBABC25F48C0(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_1826750844BBDC76_METHOD_2_AF3CCBABC25F48C0_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1826750844BBDC76___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1826750844BBDC76_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_9D1D6215626AC7FE(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1826750844BBDC76_METHOD_2_9D1D6215626AC7FE_OFFSET))(this, P0);
	}
};
