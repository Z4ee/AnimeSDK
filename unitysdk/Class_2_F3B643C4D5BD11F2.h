#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A2D8E5AB4B623162.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_2_24193089A4D2255F;
class Class_2_49E3DBB7B28FBCCD;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class AbilityComponent; }
namespace RPG::GameCore { class RtAbilityConfig; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_F3B643C4D5BD11F2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8FA8100)
#define CLASS_2_F3B643C4D5BD11F2_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x8FA81A0)
#define CLASS_2_F3B643C4D5BD11F2_METHOD_2_2D66ED3EC42BE65E_OFFSET UNITYSDK_OFFSET(0x8FA89D0)
#define CLASS_2_F3B643C4D5BD11F2_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x8FA8950)
#define CLASS_2_F3B643C4D5BD11F2_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x8FA8940)
#define CLASS_2_F3B643C4D5BD11F2_METHOD_2_8EDB7FE5AA37C50F_1_OFFSET UNITYSDK_OFFSET(0x8FA8910)
#define CLASS_2_F3B643C4D5BD11F2_METHOD_2_8EDB7FE5AA37C50F_OFFSET UNITYSDK_OFFSET(0x8FA8900)
#define CLASS_2_F3B643C4D5BD11F2_METHOD_2_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x8FA8340)
#define CLASS_2_F3B643C4D5BD11F2_METHOD_2_AF3CCBABC25F48C0_OFFSET UNITYSDK_OFFSET(0x8FA8920)
#define CLASS_2_F3B643C4D5BD11F2_METHOD_2_B2AD84864732E90A_OFFSET UNITYSDK_OFFSET(0x8FA8580)
#define CLASS_2_F3B643C4D5BD11F2_METHOD_2_D8B3AC54FF6C5D53_OFFSET UNITYSDK_OFFSET(0x8FA8790)
#define CLASS_2_F3B643C4D5BD11F2_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x8FA8250)
#define CLASS_2_F3B643C4D5BD11F2__CTOR_OFFSET UNITYSDK_OFFSET(0x8FA8000)
#define CLASS_2_F3B643C4D5BD11F2___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8FA8930)

inline static constexpr unsigned int Class_2_F3B643C4D5BD11F2_TypeDefinitionIndex = 49556;

class Class_2_F3B643C4D5BD11F2 : public ::Class_1_A2D8E5AB4B623162
{
public:
	// static const ::System::String* Field_2_10; // 0x0
	::System::Action_1<::Class_2_F3B643C4D5BD11F2*>* Field_2_1; // 0x90
	::RPG::GameCore::RtAbilityConfig* Field_2_0; // 0x98
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0xA0
	::System::Action_1<::Class_2_F3B643C4D5BD11F2*>* Field_2_2; // 0xA8
	::Class_2_49E3DBB7B28FBCCD* Field_2_6; // 0xB0
	::Class_2_24193089A4D2255F* Field_2_9; // 0xB8
	::RPG::GameCore::FixPoint Field_2_4; // 0xC0
	::RPG::GameCore::FixPoint Field_2_5; // 0xC8
	::System::Boolean Field_2_8; // 0xD0
	::System::Boolean Field_2_7; // 0xD1

	::System::Void _ctor(::RPG::GameCore::AbilityComponent* a1, ::RPG::GameCore::RtAbilityConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityComponent*, ::RPG::GameCore::RtAbilityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_F3B643C4D5BD11F2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3B643C4D5BD11F2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3B643C4D5BD11F2_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3B643C4D5BD11F2_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_2_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3B643C4D5BD11F2_METHOD_2_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void Method_2_B2AD84864732E90A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F3B643C4D5BD11F2_METHOD_2_B2AD84864732E90A_OFFSET))(this, a1);
	}

	::Class_2_24193089A4D2255F* Method_2_D8B3AC54FF6C5D53(::System::Boolean a1)
	{
		return ((::Class_2_24193089A4D2255F*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F3B643C4D5BD11F2_METHOD_2_D8B3AC54FF6C5D53_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_2_8EDB7FE5AA37C50F()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3B643C4D5BD11F2_METHOD_2_8EDB7FE5AA37C50F_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_8EDB7FE5AA37C50F_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3B643C4D5BD11F2_METHOD_2_8EDB7FE5AA37C50F_1_OFFSET))(this);
	}

	::System::Void Method_2_AF3CCBABC25F48C0(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_F3B643C4D5BD11F2_METHOD_2_AF3CCBABC25F48C0_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3B643C4D5BD11F2___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3B643C4D5BD11F2_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3B643C4D5BD11F2_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_2D66ED3EC42BE65E(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F3B643C4D5BD11F2_METHOD_2_2D66ED3EC42BE65E_OFFSET))(this, P0);
	}
};
