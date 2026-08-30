#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_A474572029D08468;
class Class_2_B71FA21BC121C2FA;
namespace RPG::Client { class LongPressEvent; }
namespace RPG::Client { class MonoInControlButton; }
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_5A90AF44F94B079E_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1A7C7B40)
#define CLASS_2_5A90AF44F94B079E_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x1A7C79E0)
#define CLASS_2_5A90AF44F94B079E_METHOD_2_3BAF09B652485A73_OFFSET UNITYSDK_OFFSET(0x1A7C7E80)
#define CLASS_2_5A90AF44F94B079E_METHOD_2_47C4B239AE738315_OFFSET UNITYSDK_OFFSET(0x1A7C7D80)
#define CLASS_2_5A90AF44F94B079E_METHOD_2_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x1A7C7D10)
#define CLASS_2_5A90AF44F94B079E_METHOD_2_494458CA7765DC42_OFFSET UNITYSDK_OFFSET(0x1A7C7BC0)
#define CLASS_2_5A90AF44F94B079E_METHOD_2_4D048E895C608EDE_OFFSET UNITYSDK_OFFSET(0x1A7C7F00)
#define CLASS_2_5A90AF44F94B079E_METHOD_2_8D3F89FEBDE33F8D_OFFSET UNITYSDK_OFFSET(0x1A7C77A0)
#define CLASS_2_5A90AF44F94B079E_METHOD_2_A2B3D7171C323DE3_OFFSET UNITYSDK_OFFSET(0x1A7C75D0)
#define CLASS_2_5A90AF44F94B079E_METHOD_2_A93E2DF739E86EB0_OFFSET UNITYSDK_OFFSET(0x1A7C7AE0)
#define CLASS_2_5A90AF44F94B079E_METHOD_2_AE1E3DA677D21BF0_OFFSET UNITYSDK_OFFSET(0x1A7C7E00)
#define CLASS_2_5A90AF44F94B079E_METHOD_2_AEA938E393CB58B0_OFFSET UNITYSDK_OFFSET(0x1A7C7C30)
#define CLASS_2_5A90AF44F94B079E_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x1A7C7550)
#define CLASS_2_5A90AF44F94B079E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A7C8040)
#define CLASS_2_5A90AF44F94B079E_METHOD_2_EDE104A2956E181A_OFFSET UNITYSDK_OFFSET(0x1A7C7A60)
#define CLASS_2_5A90AF44F94B079E__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7C8090)
#define CLASS_2_5A90AF44F94B079E__ONBIND_OFFSET UNITYSDK_OFFSET(0x1A7C7430)

inline static constexpr unsigned int Class_2_5A90AF44F94B079E_TypeDefinitionIndex = 71862;

class Class_2_5A90AF44F94B079E : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::String* DADAJKEHPGC; // 0x0
	::Struct_2_96F8F0A04B900A9E PMECLILMEDH; // 0x60
	::Class_1_A474572029D08468* ABOBEBEOHPA; // 0x68
	::UnityEngine::Animation* GPOEFFELJPG; // 0x70
	::RPG::Client::RPGAnimationEvent* DDCODMNKPIP; // 0x78
	::UnityEngine::Transform* COGOPBJHLME; // 0x80
	::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x88
	::Class_2_B71FA21BC121C2FA* HPADAGJIHAO; // 0x90
	::System::Boolean AIJFMOBBACL; // 0x98
	::System::Boolean NDMHHIAJCFP; // 0x99

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A90AF44F94B079E__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A90AF44F94B079E__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_5A90AF44F94B079E_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_A2B3D7171C323DE3(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_5A90AF44F94B079E_METHOD_2_A2B3D7171C323DE3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5A90AF44F94B079E_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDE104A2956E181A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5A90AF44F94B079E_METHOD_2_EDE104A2956E181A_OFFSET))(this, a1);
	}

	::System::Void Method_2_A93E2DF739E86EB0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5A90AF44F94B079E_METHOD_2_A93E2DF739E86EB0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A90AF44F94B079E_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::UnityEngine::RectTransform* Method_2_494458CA7765DC42()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A90AF44F94B079E_METHOD_2_494458CA7765DC42_OFFSET))(this);
	}

	::System::Void Method_2_AEA938E393CB58B0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5A90AF44F94B079E_METHOD_2_AEA938E393CB58B0_OFFSET))(this, a1);
	}

	::Class_1_34917908B7833130* Method_2_47FCE72550F759BF()
	{
		return ((::Class_1_34917908B7833130*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A90AF44F94B079E_METHOD_2_47FCE72550F759BF_OFFSET))(this);
	}

	::RPG::Client::MonoInControlButton* Method_2_47C4B239AE738315()
	{
		return ((::RPG::Client::MonoInControlButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A90AF44F94B079E_METHOD_2_47C4B239AE738315_OFFSET))(this);
	}

	::RPG::Client::MonoInControlTip* Method_2_AE1E3DA677D21BF0()
	{
		return ((::RPG::Client::MonoInControlTip*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A90AF44F94B079E_METHOD_2_AE1E3DA677D21BF0_OFFSET))(this);
	}

	::RPG::Client::LongPressEvent* Method_2_3BAF09B652485A73()
	{
		return ((::RPG::Client::LongPressEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A90AF44F94B079E_METHOD_2_3BAF09B652485A73_OFFSET))(this);
	}

	::System::Void Method_2_4D048E895C608EDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A90AF44F94B079E_METHOD_2_4D048E895C608EDE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A90AF44F94B079E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_8D3F89FEBDE33F8D(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_5A90AF44F94B079E_METHOD_2_8D3F89FEBDE33F8D_OFFSET))(this, a1, a2);
	}
};
