#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A6260AB79B268324_Struct_2_CA8D3805E01DE980.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"

class Class_1_D294488719556168;
class Class_2_7EA45D2647F35CDD;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }

#define CLASS_1_A6260AB79B268324_METHOD_1_14938E70B30BB85F_OFFSET UNITYSDK_OFFSET(0x105C0D40)
#define CLASS_1_A6260AB79B268324_METHOD_1_278DE3B6BE616E54_OFFSET UNITYSDK_OFFSET(0x105C15C0)
#define CLASS_1_A6260AB79B268324_METHOD_1_35BFA211C867308B_OFFSET UNITYSDK_OFFSET(0x105C1540)
#define CLASS_1_A6260AB79B268324_METHOD_1_37D1806EE754B4F8_OFFSET UNITYSDK_OFFSET(0x105C0CB0)
#define CLASS_1_A6260AB79B268324_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x105C1EE0)
#define CLASS_1_A6260AB79B268324_METHOD_1_EDF18EDB284DEFF4_OFFSET UNITYSDK_OFFSET(0x105C1340)
#define CLASS_1_A6260AB79B268324_METHOD_1_EF297E0838BCF50E_OFFSET UNITYSDK_OFFSET(0x105C13F0)
#define CLASS_1_A6260AB79B268324__CCTOR_OFFSET UNITYSDK_OFFSET(0x105C1F00)
#define CLASS_1_A6260AB79B268324__CTOR_OFFSET UNITYSDK_OFFSET(0x105C1EF0)

inline static constexpr unsigned int Class_1_A6260AB79B268324_TypeDefinitionIndex = 61130;

class Class_1_A6260AB79B268324 : public ::System::Object
{
public:
	static ::Il2CppArray<::RPG::GameCore::TurnState>** StaticGet_BHEACGEEHAF()
	{
		return (::Il2CppArray<::RPG::GameCore::TurnState>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6260AB79B268324_TypeDefinitionIndex)->GetStaticField(0x19F80);
	}
	// static const ::System::String* FOHLNIHIBMG; // 0x0
	// static const ::System::String* KHFDLEELAKK; // 0x0
	// static const ::System::String* JLJDAJEMCMA; // 0x0
	// static const ::System::String* HCHAKNFMALH; // 0x0
	// static const ::System::String* GELCHFADPGH; // 0x0
	// static const ::System::Single MPKPILNMIIA; // 0x0
	::Class_1_A6260AB79B268324_Struct_2_CA8D3805E01DE980 IPOGJOIFCNG; // 0x10
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x30
	::Class_2_7EA45D2647F35CDD* LICMIKIFMJN; // 0x38
	::RPG::GameCore::TurnBasedGameMode* GICHGNGMBGD; // 0x40
	::System::String* JEFGLLBIGIO; // 0x48
	::System::Int32 BAOOLPLLAME; // 0x50
	::System::Int32 KHDHMKAAPGE; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6260AB79B268324__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6260AB79B268324__CCTOR_OFFSET))();
	}

	::System::Void Method_1_37D1806EE754B4F8(::RPG::GameCore::GameEntity* a1, ::Class_2_7EA45D2647F35CDD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_2_7EA45D2647F35CDD*))((::PBYTE)hIl2Cpp + CLASS_1_A6260AB79B268324_METHOD_1_37D1806EE754B4F8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EDF18EDB284DEFF4(::Class_1_D294488719556168* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D294488719556168*))((::PBYTE)hIl2Cpp + CLASS_1_A6260AB79B268324_METHOD_1_EDF18EDB284DEFF4_OFFSET))(this, a1);
	}

	::System::Void Method_1_14938E70B30BB85F(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A6260AB79B268324_METHOD_1_14938E70B30BB85F_OFFSET))(this, a1);
	}

	::System::Void Method_1_278DE3B6BE616E54(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A6260AB79B268324_METHOD_1_278DE3B6BE616E54_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_35BFA211C867308B(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A6260AB79B268324_METHOD_1_35BFA211C867308B_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_EF297E0838BCF50E(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A6260AB79B268324_METHOD_1_EF297E0838BCF50E_OFFSET))(a1);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6260AB79B268324_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}
};
