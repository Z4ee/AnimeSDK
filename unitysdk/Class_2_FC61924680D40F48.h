#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_A474572029D08468;
class Class_2_6E0B9E69D0FC929E;
class Class_2_B71FA21BC121C2FA;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_FC61924680D40F48_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1640F500)
#define CLASS_2_FC61924680D40F48_METHOD_2_193C90E4C6892FC2_OFFSET UNITYSDK_OFFSET(0x1640F4A0)
#define CLASS_2_FC61924680D40F48_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x1640F320)
#define CLASS_2_FC61924680D40F48_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1640ECB0)
#define CLASS_2_FC61924680D40F48_METHOD_2_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x1640ED10)
#define CLASS_2_FC61924680D40F48_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1640EFE0)
#define CLASS_2_FC61924680D40F48_METHOD_2_494458CA7765DC42_OFFSET UNITYSDK_OFFSET(0x1640F580)
#define CLASS_2_FC61924680D40F48_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x1640EE00)
#define CLASS_2_FC61924680D40F48_METHOD_2_7AFC74ADCC2A9C7A_1_OFFSET UNITYSDK_OFFSET(0x1640F440)
#define CLASS_2_FC61924680D40F48_METHOD_2_7AFC74ADCC2A9C7A_OFFSET UNITYSDK_OFFSET(0x1640EF70)
#define CLASS_2_FC61924680D40F48_METHOD_2_7B6EC255F45D034F_OFFSET UNITYSDK_OFFSET(0x1640EBA0)
#define CLASS_2_FC61924680D40F48_METHOD_2_86738FBA5954F142_OFFSET UNITYSDK_OFFSET(0x1640EEC0)
#define CLASS_2_FC61924680D40F48_METHOD_2_ACC01D4A7A73EC9E_OFFSET UNITYSDK_OFFSET(0x1640F030)
#define CLASS_2_FC61924680D40F48_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x1640EAC0)
#define CLASS_2_FC61924680D40F48_METHOD_2_D5999BF4C232F1C9_OFFSET UNITYSDK_OFFSET(0x1640F3A0)
#define CLASS_2_FC61924680D40F48_METHOD_2_EDE104A2956E181A_OFFSET UNITYSDK_OFFSET(0x1640EC20)
#define CLASS_2_FC61924680D40F48_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0x1640EB40)
#define CLASS_2_FC61924680D40F48__CTOR_OFFSET UNITYSDK_OFFSET(0x1640F600)
#define CLASS_2_FC61924680D40F48__ONBIND_OFFSET UNITYSDK_OFFSET(0x1640E8A0)

inline static constexpr unsigned int Class_2_FC61924680D40F48_TypeDefinitionIndex = 71991;

class Class_2_FC61924680D40F48 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* GGOHHHPLNEK; // 0x0
	// static const ::System::String* CALMIPOMOKI; // 0x0
	::Struct_2_96F8F0A04B900A9E PMECLILMEDH; // 0x60
	::UnityEngine::Transform* NEFFAGOFKKD; // 0x68
	::Class_2_6E0B9E69D0FC929E* MNONMJBHKKG; // 0x70
	::RPG::Client::AnimatorButton* DKECLDPHDAB; // 0x78
	::Class_1_A474572029D08468* ABOBEBEOHPA; // 0x80
	::UnityEngine::Transform* AIDIMEHEEMI; // 0x88
	::Class_2_B71FA21BC121C2FA* HPADAGJIHAO; // 0x90
	::UnityEngine::Animator* APPGGMLEPLN; // 0x98
	::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0xA0
	::RPG::GameCore::SkillData* OCOIDGHBAEH; // 0xA8
	::System::Boolean FHBNNGCEPFD; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC61924680D40F48__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC61924680D40F48__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_FC61924680D40F48_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_F07808AF19FA033A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FC61924680D40F48_METHOD_2_F07808AF19FA033A_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B6EC255F45D034F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FC61924680D40F48_METHOD_2_7B6EC255F45D034F_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDE104A2956E181A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FC61924680D40F48_METHOD_2_EDE104A2956E181A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC61924680D40F48_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FC61924680D40F48_METHOD_2_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC61924680D40F48_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_2_86738FBA5954F142(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FC61924680D40F48_METHOD_2_86738FBA5954F142_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FC61924680D40F48_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_ACC01D4A7A73EC9E(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_FC61924680D40F48_METHOD_2_ACC01D4A7A73EC9E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FC61924680D40F48_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_2_7AFC74ADCC2A9C7A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FC61924680D40F48_METHOD_2_7AFC74ADCC2A9C7A_OFFSET))(this, a1);
	}

	::System::Void Method_2_D5999BF4C232F1C9(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_FC61924680D40F48_METHOD_2_D5999BF4C232F1C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_7AFC74ADCC2A9C7A_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FC61924680D40F48_METHOD_2_7AFC74ADCC2A9C7A_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_193C90E4C6892FC2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FC61924680D40F48_METHOD_2_193C90E4C6892FC2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC61924680D40F48_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::UnityEngine::RectTransform* Method_2_494458CA7765DC42()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC61924680D40F48_METHOD_2_494458CA7765DC42_OFFSET))(this);
	}
};
