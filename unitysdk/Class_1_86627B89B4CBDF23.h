#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

class Class_1_1C30CE192ABE4C54;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_86627B89B4CBDF23_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1845EBE0)
#define CLASS_1_86627B89B4CBDF23_GET_CURSHIELD_OFFSET UNITYSDK_OFFSET(0x1845F360)
#define CLASS_1_86627B89B4CBDF23_GET_MAXSHIELD_OFFSET UNITYSDK_OFFSET(0x1845F380)
#define CLASS_1_86627B89B4CBDF23_GET_MAXSTACK_OFFSET UNITYSDK_OFFSET(0x1845F3A0)
#define CLASS_1_86627B89B4CBDF23_GET_MODIFIER_OFFSET UNITYSDK_OFFSET(0x1845F3C0)
#define CLASS_1_86627B89B4CBDF23_METHOD_1_0E4B4E70FDC3A697_OFFSET UNITYSDK_OFFSET(0x1845EEB0)
#define CLASS_1_86627B89B4CBDF23_METHOD_1_27AE10F7AE16E9F6_OFFSET UNITYSDK_OFFSET(0x1845F1F0)
#define CLASS_1_86627B89B4CBDF23_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1845EAC0)
#define CLASS_1_86627B89B4CBDF23_METHOD_1_3F11847C8244AFD2_OFFSET UNITYSDK_OFFSET(0x1845EC30)
#define CLASS_1_86627B89B4CBDF23_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0x1845F340)
#define CLASS_1_86627B89B4CBDF23_METHOD_1_8DB93C3B593370EE_OFFSET UNITYSDK_OFFSET(0x1845EFD0)
#define CLASS_1_86627B89B4CBDF23_METHOD_1_ED39AB839DE0E899_OFFSET UNITYSDK_OFFSET(0x1845EE30)
#define CLASS_1_86627B89B4CBDF23_SET_CURSHIELD_OFFSET UNITYSDK_OFFSET(0x1845F370)
#define CLASS_1_86627B89B4CBDF23_SET_MAXSHIELD_OFFSET UNITYSDK_OFFSET(0x1845F390)
#define CLASS_1_86627B89B4CBDF23_SET_MAXSTACK_OFFSET UNITYSDK_OFFSET(0x1845F3B0)
#define CLASS_1_86627B89B4CBDF23_SET_MODIFIER_OFFSET UNITYSDK_OFFSET(0x1845F3D0)
#define CLASS_1_86627B89B4CBDF23__CTOR_OFFSET UNITYSDK_OFFSET(0x1845EA40)

inline static constexpr unsigned int Class_1_86627B89B4CBDF23_TypeDefinitionIndex = 51972;

class Class_1_86627B89B4CBDF23 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedModifierInstance* _Modifier_k__BackingField; // 0x10
	::RPG::GameCore::StringHash Field_1_1; // 0x18
	::RPG::GameCore::StringHash Field_1_2; // 0x1C
	::RPG::GameCore::FixPoint _MaxShield_k__BackingField; // 0x20
	::RPG::GameCore::FixPoint _CurShield_k__BackingField; // 0x28
	::RPG::GameCore::FixPoint _MaxStack_k__BackingField; // 0x30

	::System::Void _ctor(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_86627B89B4CBDF23__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86627B89B4CBDF23_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_3F11847C8244AFD2(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_86627B89B4CBDF23_METHOD_1_3F11847C8244AFD2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8DB93C3B593370EE(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_86627B89B4CBDF23_METHOD_1_8DB93C3B593370EE_OFFSET))(this, a1);
	}

	::System::Void Method_1_27AE10F7AE16E9F6(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_86627B89B4CBDF23_METHOD_1_27AE10F7AE16E9F6_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86627B89B4CBDF23_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_0E4B4E70FDC3A697(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_86627B89B4CBDF23_METHOD_1_0E4B4E70FDC3A697_OFFSET))(this, a1);
	}

	::System::Void Method_1_ED39AB839DE0E899(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_86627B89B4CBDF23_METHOD_1_ED39AB839DE0E899_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_CurShield()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86627B89B4CBDF23_GET_CURSHIELD_OFFSET))(this);
	}

	::System::Void set_CurShield(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_86627B89B4CBDF23_SET_CURSHIELD_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_MaxShield()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86627B89B4CBDF23_GET_MAXSHIELD_OFFSET))(this);
	}

	::System::Void set_MaxShield(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_86627B89B4CBDF23_SET_MAXSHIELD_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_MaxStack()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86627B89B4CBDF23_GET_MAXSTACK_OFFSET))(this);
	}

	::System::Void set_MaxStack(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_86627B89B4CBDF23_SET_MAXSTACK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TurnBasedModifierInstance* get_Modifier()
	{
		return ((::RPG::GameCore::TurnBasedModifierInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86627B89B4CBDF23_GET_MODIFIER_OFFSET))(this);
	}

	::System::Void set_Modifier(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_86627B89B4CBDF23_SET_MODIFIER_OFFSET))(this, a1);
	}

	::Class_1_1C30CE192ABE4C54* Method_1_528BD4865C714C5C()
	{
		return ((::Class_1_1C30CE192ABE4C54*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86627B89B4CBDF23_METHOD_1_528BD4865C714C5C_OFFSET))(this);
	}
};
