#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/TurnbasedPluginBase_1.h"

class Class_1_C39BA4C2B7A442A2;
class Class_2_1DB6C02CA182EEBA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelBattleEventCreate; }
namespace RPG::GameCore { class LevelCharacterCreate; }
namespace RPG::GameCore { class LevelPlayerCreateFnishAdv; }
namespace System { class String; }

#define CLASS_2_511CDFCB0C002552_METHOD_2_05E18E3D0B7CB7FC_OFFSET UNITYSDK_OFFSET(0xC7D1720)
#define CLASS_2_511CDFCB0C002552_METHOD_2_17ED2F1403285A08_OFFSET UNITYSDK_OFFSET(0xC7D15A0)
#define CLASS_2_511CDFCB0C002552_METHOD_2_26530F32A1882401_OFFSET UNITYSDK_OFFSET(0xC7D19E0)
#define CLASS_2_511CDFCB0C002552_METHOD_2_33D5F885A0F4310C_OFFSET UNITYSDK_OFFSET(0xC7D0590)
#define CLASS_2_511CDFCB0C002552_METHOD_2_34CE3C18E37353AC_OFFSET UNITYSDK_OFFSET(0xC7D17C0)
#define CLASS_2_511CDFCB0C002552_METHOD_2_3894A263CC234BE3_OFFSET UNITYSDK_OFFSET(0xC7D16B0)
#define CLASS_2_511CDFCB0C002552_METHOD_2_41A4A9AAA0B617DB_OFFSET UNITYSDK_OFFSET(0xC7D00D0)
#define CLASS_2_511CDFCB0C002552_METHOD_2_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0xC7D1D80)
#define CLASS_2_511CDFCB0C002552_METHOD_2_AA00497B6A1ACCC6_OFFSET UNITYSDK_OFFSET(0xC7D1650)
#define CLASS_2_511CDFCB0C002552_METHOD_2_B41BA821E1AB097D_OFFSET UNITYSDK_OFFSET(0xC7D1480)
#define CLASS_2_511CDFCB0C002552_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xC7D1DE0)
#define CLASS_2_511CDFCB0C002552_METHOD_2_DC8AA765E2AFD1B6_OFFSET UNITYSDK_OFFSET(0xC7D1D10)
#define CLASS_2_511CDFCB0C002552_METHOD_2_E50D6FA513150889_OFFSET UNITYSDK_OFFSET(0xC7D1B60)
#define CLASS_2_511CDFCB0C002552_METHOD_2_EA0BA3E4AF50C583_OFFSET UNITYSDK_OFFSET(0xC7D0710)
#define CLASS_2_511CDFCB0C002552_METHOD_2_EC16FE6CBA0D86EC_OFFSET UNITYSDK_OFFSET(0xC7D15F0)
#define CLASS_2_511CDFCB0C002552_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xC7CFEF0)
#define CLASS_2_511CDFCB0C002552_ONUNINITIALIZE_OFFSET UNITYSDK_OFFSET(0xC7CFFE0)
#define CLASS_2_511CDFCB0C002552__CTOR_OFFSET UNITYSDK_OFFSET(0xC7D1DF0)

inline static constexpr unsigned int Class_2_511CDFCB0C002552_TypeDefinitionIndex = 56427;

class Class_2_511CDFCB0C002552 : public ::RPG::GameCore::TurnbasedPluginBase_1<::Class_2_511CDFCB0C002552*>
{
public:
	// static const ::System::String* KGALHDAJCPP; // 0x0
	::Il2CppArray<::Class_1_C39BA4C2B7A442A2*>* LCIPKDKMGHO; // 0x28
	::Class_2_1DB6C02CA182EEBA* CLPDFLKFBPO; // 0x30
	::System::Int32 MMBPPCEMDNN; // 0x38
	::System::Boolean PHCJFBMEAGM; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552__CTOR_OFFSET))(this);
	}

	::System::Void OnInitialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_ONINITIALIZE_OFFSET))(this);
	}

	::System::Void OnUninitialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_ONUNINITIALIZE_OFFSET))(this);
	}

	::System::Void Method_2_41A4A9AAA0B617DB(::Class_2_1DB6C02CA182EEBA* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1DB6C02CA182EEBA*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_METHOD_2_41A4A9AAA0B617DB_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_17ED2F1403285A08(::RPG::GameCore::LevelPlayerCreateFnishAdv* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPlayerCreateFnishAdv*))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_METHOD_2_17ED2F1403285A08_OFFSET))(this, a1);
	}

	::System::Void Method_2_EC16FE6CBA0D86EC(::RPG::GameCore::LevelCharacterCreate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterCreate*))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_METHOD_2_EC16FE6CBA0D86EC_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA00497B6A1ACCC6(::RPG::GameCore::LevelBattleEventCreate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventCreate*))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_METHOD_2_AA00497B6A1ACCC6_OFFSET))(this, a1);
	}

	::System::Void Method_2_3894A263CC234BE3(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AliveState a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_METHOD_2_3894A263CC234BE3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B41BA821E1AB097D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_METHOD_2_B41BA821E1AB097D_OFFSET))(this, a1);
	}

	::System::Void Method_2_05E18E3D0B7CB7FC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_METHOD_2_05E18E3D0B7CB7FC_OFFSET))(this, a1);
	}

	::System::Void Method_2_EA0BA3E4AF50C583()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_METHOD_2_EA0BA3E4AF50C583_OFFSET))(this);
	}

	::System::Void Method_2_34CE3C18E37353AC(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_METHOD_2_34CE3C18E37353AC_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_26530F32A1882401(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_METHOD_2_26530F32A1882401_OFFSET))(this, a1);
	}

	::System::Void Method_2_E50D6FA513150889(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_METHOD_2_E50D6FA513150889_OFFSET))(this, a1);
	}

	::System::Void Method_2_33D5F885A0F4310C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_METHOD_2_33D5F885A0F4310C_OFFSET))(this, a1);
	}

	::Class_1_C39BA4C2B7A442A2* Method_2_DC8AA765E2AFD1B6(::System::Int32 a1)
	{
		return ((::Class_1_C39BA4C2B7A442A2*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_METHOD_2_DC8AA765E2AFD1B6_OFFSET))(this, a1);
	}

	::Class_1_C39BA4C2B7A442A2* Method_2_47FCE72550F759BF()
	{
		return ((::Class_1_C39BA4C2B7A442A2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_METHOD_2_47FCE72550F759BF_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}
};
