#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
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

#define CLASS_2_FC61924680D40F48_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1865ED20)
#define CLASS_2_FC61924680D40F48_METHOD_2_193C90E4C6892FC2_OFFSET UNITYSDK_OFFSET(0x1865ECC0)
#define CLASS_2_FC61924680D40F48_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x1865EB40)
#define CLASS_2_FC61924680D40F48_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1865E4D0)
#define CLASS_2_FC61924680D40F48_METHOD_2_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x1865E530)
#define CLASS_2_FC61924680D40F48_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1865E800)
#define CLASS_2_FC61924680D40F48_METHOD_2_494458CA7765DC42_OFFSET UNITYSDK_OFFSET(0x1865EDA0)
#define CLASS_2_FC61924680D40F48_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x1865E620)
#define CLASS_2_FC61924680D40F48_METHOD_2_7AFC74ADCC2A9C7A_1_OFFSET UNITYSDK_OFFSET(0x1865EC60)
#define CLASS_2_FC61924680D40F48_METHOD_2_7AFC74ADCC2A9C7A_OFFSET UNITYSDK_OFFSET(0x1865E790)
#define CLASS_2_FC61924680D40F48_METHOD_2_7B6EC255F45D034F_OFFSET UNITYSDK_OFFSET(0x1865E3C0)
#define CLASS_2_FC61924680D40F48_METHOD_2_86738FBA5954F142_OFFSET UNITYSDK_OFFSET(0x1865E6E0)
#define CLASS_2_FC61924680D40F48_METHOD_2_ACC01D4A7A73EC9E_OFFSET UNITYSDK_OFFSET(0x1865E850)
#define CLASS_2_FC61924680D40F48_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x1865E2E0)
#define CLASS_2_FC61924680D40F48_METHOD_2_D5999BF4C232F1C9_OFFSET UNITYSDK_OFFSET(0x1865EBC0)
#define CLASS_2_FC61924680D40F48_METHOD_2_EDE104A2956E181A_OFFSET UNITYSDK_OFFSET(0x1865E440)
#define CLASS_2_FC61924680D40F48_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0x1865E360)
#define CLASS_2_FC61924680D40F48__CTOR_OFFSET UNITYSDK_OFFSET(0x1865EE20)
#define CLASS_2_FC61924680D40F48__ONBIND_OFFSET UNITYSDK_OFFSET(0x1865E0C0)

inline static constexpr unsigned int Class_2_FC61924680D40F48_TypeDefinitionIndex = 68727;

class Class_2_FC61924680D40F48 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::Class_1_A474572029D08468* Field_2_2; // 0x60
	::RPG::GameCore::SkillData* Field_2_3; // 0x68
	::UnityEngine::Transform* Field_2_4; // 0x70
	::Class_2_6E0B9E69D0FC929E* Field_2_5; // 0x78
	::Struct_2_96F8F0A04B900A9E Field_2_6; // 0x80
	::RPG::GameCore::BattleInstance* Field_2_7; // 0x88
	::UnityEngine::Animator* Field_2_8; // 0x90
	::UnityEngine::Transform* Field_2_9; // 0x98
	::Class_2_B71FA21BC121C2FA* Field_2_10; // 0xA0
	::RPG::Client::AnimatorButton* Field_2_11; // 0xA8
	::System::Boolean Field_2_12; // 0xB0

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
