#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_D1797279B49332E9;
class Class_2_D994353E21027540;
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

#define CLASS_2_1FC5D5AA0673F529_METHOD_2_0FA063FFC416D56A_OFFSET UNITYSDK_OFFSET(0xA8199E0)
#define CLASS_2_1FC5D5AA0673F529_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xA8197A0)
#define CLASS_2_1FC5D5AA0673F529_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xA819650)
#define CLASS_2_1FC5D5AA0673F529_METHOD_2_494458CA7765DC42_OFFSET UNITYSDK_OFFSET(0xA819810)
#define CLASS_2_1FC5D5AA0673F529_METHOD_2_5A742CF4066D32B9_OFFSET UNITYSDK_OFFSET(0xA819990)
#define CLASS_2_1FC5D5AA0673F529_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0xA819AD0)
#define CLASS_2_1FC5D5AA0673F529_METHOD_2_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0xA8198E0)
#define CLASS_2_1FC5D5AA0673F529_METHOD_2_9CF2C1E159D9A44C_OFFSET UNITYSDK_OFFSET(0xA819930)
#define CLASS_2_1FC5D5AA0673F529_METHOD_2_A93E2DF739E86EB0_OFFSET UNITYSDK_OFFSET(0xA819740)
#define CLASS_2_1FC5D5AA0673F529_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0xA819290)
#define CLASS_2_1FC5D5AA0673F529_METHOD_2_CD37BA088172EEF7_OFFSET UNITYSDK_OFFSET(0xA819880)
#define CLASS_2_1FC5D5AA0673F529_METHOD_2_DA1AA61543EB049D_OFFSET UNITYSDK_OFFSET(0xA8194A0)
#define CLASS_2_1FC5D5AA0673F529_METHOD_2_EDE104A2956E181A_OFFSET UNITYSDK_OFFSET(0xA8196C0)
#define CLASS_2_1FC5D5AA0673F529_METHOD_2_FE59A4592DF79007_OFFSET UNITYSDK_OFFSET(0xA819310)
#define CLASS_2_1FC5D5AA0673F529__CTOR_OFFSET UNITYSDK_OFFSET(0xA819A40)
#define CLASS_2_1FC5D5AA0673F529__ONBIND_OFFSET UNITYSDK_OFFSET(0xA8191D0)
#define CLASS_2_1FC5D5AA0673F529___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA819A70)

inline static constexpr unsigned int Class_2_1FC5D5AA0673F529_TypeDefinitionIndex = 67211;

class Class_2_1FC5D5AA0673F529 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::Animation* Field_2_1; // 0x60
	::Struct_2_96F8F0A04B900A9E Field_2_2; // 0x68
	::Class_2_D994353E21027540* Field_2_3; // 0x70
	::UnityEngine::Transform* Field_2_4; // 0x78
	::Class_1_D1797279B49332E9* Field_2_5; // 0x80
	::RPG::GameCore::BattleInstance* Field_2_6; // 0x88
	::System::Boolean Field_2_7; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FC5D5AA0673F529__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FC5D5AA0673F529__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_1FC5D5AA0673F529_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_FE59A4592DF79007(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_1FC5D5AA0673F529_METHOD_2_FE59A4592DF79007_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1FC5D5AA0673F529_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDE104A2956E181A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1FC5D5AA0673F529_METHOD_2_EDE104A2956E181A_OFFSET))(this, a1);
	}

	::System::Void Method_2_A93E2DF739E86EB0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1FC5D5AA0673F529_METHOD_2_A93E2DF739E86EB0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FC5D5AA0673F529_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::UnityEngine::RectTransform* Method_2_494458CA7765DC42()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FC5D5AA0673F529_METHOD_2_494458CA7765DC42_OFFSET))(this);
	}

	::System::Void Method_2_CD37BA088172EEF7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1FC5D5AA0673F529_METHOD_2_CD37BA088172EEF7_OFFSET))(this, a1);
	}

	::Class_1_CA217ABF4E3B4F3F* Method_2_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_CA217ABF4E3B4F3F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FC5D5AA0673F529_METHOD_2_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	::RPG::Client::MonoInControlButton* Method_2_9CF2C1E159D9A44C()
	{
		return ((::RPG::Client::MonoInControlButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FC5D5AA0673F529_METHOD_2_9CF2C1E159D9A44C_OFFSET))(this);
	}

	::RPG::Client::MonoInControlTip* Method_2_5A742CF4066D32B9()
	{
		return ((::RPG::Client::MonoInControlTip*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FC5D5AA0673F529_METHOD_2_5A742CF4066D32B9_OFFSET))(this);
	}

	::RPG::Client::LongPressEvent* Method_2_0FA063FFC416D56A()
	{
		return ((::RPG::Client::LongPressEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FC5D5AA0673F529_METHOD_2_0FA063FFC416D56A_OFFSET))(this);
	}

	::System::Void Method_2_DA1AA61543EB049D(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_1FC5D5AA0673F529_METHOD_2_DA1AA61543EB049D_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FC5D5AA0673F529___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_1FC5D5AA0673F529_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}
};
