#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A2D8E5AB4B623162.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_2_291F7DA21A504FC4;
class Class_2_9DD431650B13FF78;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AbilityComponent; }
namespace RPG::GameCore { class RtAbilityConfig; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_F3B643C4D5BD11F2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16EBDE40)
#define CLASS_2_F3B643C4D5BD11F2_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x16EBDF40)
#define CLASS_2_F3B643C4D5BD11F2_METHOD_2_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0x16EBE0E0)
#define CLASS_2_F3B643C4D5BD11F2_METHOD_2_8EDB7FE5AA37C50F_1_OFFSET UNITYSDK_OFFSET(0x16EBE590)
#define CLASS_2_F3B643C4D5BD11F2_METHOD_2_8EDB7FE5AA37C50F_OFFSET UNITYSDK_OFFSET(0x16EBE580)
#define CLASS_2_F3B643C4D5BD11F2_METHOD_2_8F38B972A97F5B9C_OFFSET UNITYSDK_OFFSET(0x16EBE410)
#define CLASS_2_F3B643C4D5BD11F2_METHOD_2_AF3CCBABC25F48C0_OFFSET UNITYSDK_OFFSET(0x16EBE5A0)
#define CLASS_2_F3B643C4D5BD11F2_METHOD_2_D6471432079351DB_OFFSET UNITYSDK_OFFSET(0x16EBE320)
#define CLASS_2_F3B643C4D5BD11F2_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x16EBDFF0)
#define CLASS_2_F3B643C4D5BD11F2__CTOR_OFFSET UNITYSDK_OFFSET(0x16EBDD40)

inline static constexpr unsigned int Class_2_F3B643C4D5BD11F2_TypeDefinitionIndex = 51305;

class Class_2_F3B643C4D5BD11F2 : public ::Class_1_A2D8E5AB4B623162
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::RtAbilityConfig* Field_2_1; // 0x90
	::System::Action_1<::Class_2_F3B643C4D5BD11F2*>* Field_2_2; // 0x98
	::Class_2_9DD431650B13FF78* Field_2_3; // 0xA0
	::Class_3_07C3C4D2990C49EE* Field_2_4; // 0xA8
	::Class_2_291F7DA21A504FC4* Field_2_5; // 0xB0
	::System::Action_1<::Class_2_F3B643C4D5BD11F2*>* Field_2_6; // 0xB8
	::System::Boolean Field_2_7; // 0xC0
	::System::Boolean Field_2_8; // 0xC1
	::RPG::GameCore::FixPoint Field_2_9; // 0xC8
	::RPG::GameCore::FixPoint Field_2_10; // 0xD0

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
