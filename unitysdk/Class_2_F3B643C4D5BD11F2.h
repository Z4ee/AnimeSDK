#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A2D8E5AB4B623162.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_2_079CFDB940F77F49;
class Class_2_291F7DA21A504FC4;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AbilityComponent; }
namespace RPG::GameCore { class RtAbilityConfig; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_F3B643C4D5BD11F2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1575EAE0)
#define CLASS_2_F3B643C4D5BD11F2_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x1575EBE0)
#define CLASS_2_F3B643C4D5BD11F2_METHOD_2_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0x1575ED80)
#define CLASS_2_F3B643C4D5BD11F2_METHOD_2_8EDB7FE5AA37C50F_1_OFFSET UNITYSDK_OFFSET(0x1575F230)
#define CLASS_2_F3B643C4D5BD11F2_METHOD_2_8EDB7FE5AA37C50F_OFFSET UNITYSDK_OFFSET(0x1575F220)
#define CLASS_2_F3B643C4D5BD11F2_METHOD_2_8F38B972A97F5B9C_OFFSET UNITYSDK_OFFSET(0x1575F0B0)
#define CLASS_2_F3B643C4D5BD11F2_METHOD_2_AF3CCBABC25F48C0_OFFSET UNITYSDK_OFFSET(0x1575F240)
#define CLASS_2_F3B643C4D5BD11F2_METHOD_2_D6471432079351DB_OFFSET UNITYSDK_OFFSET(0x1575EFC0)
#define CLASS_2_F3B643C4D5BD11F2_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x1575EC90)
#define CLASS_2_F3B643C4D5BD11F2__CTOR_OFFSET UNITYSDK_OFFSET(0x1575E9E0)

inline static constexpr unsigned int Class_2_F3B643C4D5BD11F2_TypeDefinitionIndex = 53775;

class Class_2_F3B643C4D5BD11F2 : public ::Class_1_A2D8E5AB4B623162
{
public:
	// static const ::System::String* NLPFFBDADEK; // 0x0
	::Class_2_291F7DA21A504FC4* FGPFEPMDIJJ; // 0x90
	::System::Action_1<::Class_2_F3B643C4D5BD11F2*>* DMDFMAJACHI; // 0x98
	::Class_2_079CFDB940F77F49* LNLOEIICNMO; // 0xA0
	::Class_3_07C3C4D2990C49EE* CKOEPEAPNAC; // 0xA8
	::RPG::GameCore::RtAbilityConfig* EABKOHGCHFP; // 0xB0
	::System::Action_1<::Class_2_F3B643C4D5BD11F2*>* BDGNIIHBGDD; // 0xB8
	::RPG::GameCore::FixPoint CMMOELKNAKK; // 0xC0
	::System::Boolean EMODOHCJFCD; // 0xC8
	::System::Boolean BCAAEMLPLML; // 0xC9
	::RPG::GameCore::FixPoint EHMBINDHOEI; // 0xD0

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

	::System::Void Method_2_809094DEBF13B21A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3B643C4D5BD11F2_METHOD_2_809094DEBF13B21A_OFFSET))(this);
	}

	::System::Void Method_2_D6471432079351DB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F3B643C4D5BD11F2_METHOD_2_D6471432079351DB_OFFSET))(this, a1);
	}

	::Class_2_291F7DA21A504FC4* Method_2_8F38B972A97F5B9C(::System::Boolean a1)
	{
		return ((::Class_2_291F7DA21A504FC4*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F3B643C4D5BD11F2_METHOD_2_8F38B972A97F5B9C_OFFSET))(this, a1);
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
};
