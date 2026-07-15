#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_A474572029D08468;
class Class_2_B71FA21BC121C2FA;
namespace RPG::Client { class LongPressEvent; }
namespace RPG::Client { class MonoInControlButton; }
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_3734AABE8A85B17F_METHOD_2_1669B98FB8A207E7_OFFSET UNITYSDK_OFFSET(0x17637C10)
#define CLASS_2_3734AABE8A85B17F_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x17638140)
#define CLASS_2_3734AABE8A85B17F_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x17637FF0)
#define CLASS_2_3734AABE8A85B17F_METHOD_2_3BAF09B652485A73_OFFSET UNITYSDK_OFFSET(0x176383D0)
#define CLASS_2_3734AABE8A85B17F_METHOD_2_47C4B239AE738315_OFFSET UNITYSDK_OFFSET(0x176382F0)
#define CLASS_2_3734AABE8A85B17F_METHOD_2_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x17638280)
#define CLASS_2_3734AABE8A85B17F_METHOD_2_494458CA7765DC42_OFFSET UNITYSDK_OFFSET(0x176381B0)
#define CLASS_2_3734AABE8A85B17F_METHOD_2_8D23095999914104_OFFSET UNITYSDK_OFFSET(0x17637DE0)
#define CLASS_2_3734AABE8A85B17F_METHOD_2_A93E2DF739E86EB0_OFFSET UNITYSDK_OFFSET(0x176380E0)
#define CLASS_2_3734AABE8A85B17F_METHOD_2_AE1E3DA677D21BF0_OFFSET UNITYSDK_OFFSET(0x17638360)
#define CLASS_2_3734AABE8A85B17F_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x17637B90)
#define CLASS_2_3734AABE8A85B17F_METHOD_2_CD37BA088172EEF7_OFFSET UNITYSDK_OFFSET(0x17638220)
#define CLASS_2_3734AABE8A85B17F_METHOD_2_EDE104A2956E181A_OFFSET UNITYSDK_OFFSET(0x17638060)
#define CLASS_2_3734AABE8A85B17F__CTOR_OFFSET UNITYSDK_OFFSET(0x17638440)
#define CLASS_2_3734AABE8A85B17F__ONBIND_OFFSET UNITYSDK_OFFSET(0x17637AA0)

inline static constexpr unsigned int Class_2_3734AABE8A85B17F_TypeDefinitionIndex = 68664;

class Class_2_3734AABE8A85B17F : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::Animation* Field_2_1; // 0x60
	::Class_2_B71FA21BC121C2FA* Field_2_2; // 0x68
	::Class_1_A474572029D08468* Field_2_3; // 0x70
	::RPG::GameCore::BattleInstance* Field_2_4; // 0x78
	::UnityEngine::Transform* Field_2_5; // 0x80
	::Struct_2_96F8F0A04B900A9E Field_2_6; // 0x88
	::System::Boolean Field_2_7; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3734AABE8A85B17F__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3734AABE8A85B17F__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_3734AABE8A85B17F_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_1669B98FB8A207E7(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_3734AABE8A85B17F_METHOD_2_1669B98FB8A207E7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3734AABE8A85B17F_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDE104A2956E181A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3734AABE8A85B17F_METHOD_2_EDE104A2956E181A_OFFSET))(this, a1);
	}

	::System::Void Method_2_A93E2DF739E86EB0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3734AABE8A85B17F_METHOD_2_A93E2DF739E86EB0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3734AABE8A85B17F_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::UnityEngine::RectTransform* Method_2_494458CA7765DC42()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3734AABE8A85B17F_METHOD_2_494458CA7765DC42_OFFSET))(this);
	}

	::System::Void Method_2_CD37BA088172EEF7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3734AABE8A85B17F_METHOD_2_CD37BA088172EEF7_OFFSET))(this, a1);
	}

	::Class_1_CA217ABF4E3B4F3F* Method_2_47FCE72550F759BF()
	{
		return ((::Class_1_CA217ABF4E3B4F3F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3734AABE8A85B17F_METHOD_2_47FCE72550F759BF_OFFSET))(this);
	}

	::RPG::Client::MonoInControlButton* Method_2_47C4B239AE738315()
	{
		return ((::RPG::Client::MonoInControlButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3734AABE8A85B17F_METHOD_2_47C4B239AE738315_OFFSET))(this);
	}

	::RPG::Client::MonoInControlTip* Method_2_AE1E3DA677D21BF0()
	{
		return ((::RPG::Client::MonoInControlTip*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3734AABE8A85B17F_METHOD_2_AE1E3DA677D21BF0_OFFSET))(this);
	}

	::RPG::Client::LongPressEvent* Method_2_3BAF09B652485A73()
	{
		return ((::RPG::Client::LongPressEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3734AABE8A85B17F_METHOD_2_3BAF09B652485A73_OFFSET))(this);
	}

	::System::Void Method_2_8D23095999914104(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_3734AABE8A85B17F_METHOD_2_8D23095999914104_OFFSET))(this, a1, a2);
	}
};
