#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/SkillUISpecialButtonType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_D994353E21027540;
namespace RPG::Client { class LongPressEvent; }
namespace RPG::Client { class MonoInControlButton; }
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_379FA7AC0ADB1CA1_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1445BDB0)
#define CLASS_2_379FA7AC0ADB1CA1_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1445BEA0)
#define CLASS_2_379FA7AC0ADB1CA1_METHOD_2_06D4ACB7CA6782D6_OFFSET UNITYSDK_OFFSET(0x1445B130)
#define CLASS_2_379FA7AC0ADB1CA1_METHOD_2_0FA063FFC416D56A_OFFSET UNITYSDK_OFFSET(0x1445BA50)
#define CLASS_2_379FA7AC0ADB1CA1_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1445B6D0)
#define CLASS_2_379FA7AC0ADB1CA1_METHOD_2_3F07804D8892197E_OFFSET UNITYSDK_OFFSET(0x1445BAB0)
#define CLASS_2_379FA7AC0ADB1CA1_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1445BC80)
#define CLASS_2_379FA7AC0ADB1CA1_METHOD_2_494458CA7765DC42_OFFSET UNITYSDK_OFFSET(0x1445B790)
#define CLASS_2_379FA7AC0ADB1CA1_METHOD_2_5A742CF4066D32B9_OFFSET UNITYSDK_OFFSET(0x1445BA00)
#define CLASS_2_379FA7AC0ADB1CA1_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0x1445C0A0)
#define CLASS_2_379FA7AC0ADB1CA1_METHOD_2_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x1445AE60)
#define CLASS_2_379FA7AC0ADB1CA1_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x1445AB90)
#define CLASS_2_379FA7AC0ADB1CA1_METHOD_2_99A0188C01FF2EFD_OFFSET UNITYSDK_OFFSET(0x1445ABE0)
#define CLASS_2_379FA7AC0ADB1CA1_METHOD_2_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x1445B940)
#define CLASS_2_379FA7AC0ADB1CA1_METHOD_2_9CF2C1E159D9A44C_OFFSET UNITYSDK_OFFSET(0x1445B9A0)
#define CLASS_2_379FA7AC0ADB1CA1_METHOD_2_A93E2DF739E86EB0_OFFSET UNITYSDK_OFFSET(0x1445B4F0)
#define CLASS_2_379FA7AC0ADB1CA1_METHOD_2_C1C0CB2C8B6124DE_OFFSET UNITYSDK_OFFSET(0x1445BCE0)
#define CLASS_2_379FA7AC0ADB1CA1_METHOD_2_D824C9FF720EB29B_OFFSET UNITYSDK_OFFSET(0x1445B0A0)
#define CLASS_2_379FA7AC0ADB1CA1_METHOD_2_E6E0E86A3E0935A0_OFFSET UNITYSDK_OFFSET(0x1445BB80)
#define CLASS_2_379FA7AC0ADB1CA1_METHOD_2_EADDF1782C977BCA_OFFSET UNITYSDK_OFFSET(0x1445B310)
#define CLASS_2_379FA7AC0ADB1CA1_METHOD_2_EDE104A2956E181A_1_OFFSET UNITYSDK_OFFSET(0x1445B850)
#define CLASS_2_379FA7AC0ADB1CA1_METHOD_2_EDE104A2956E181A_OFFSET UNITYSDK_OFFSET(0x1445B410)
#define CLASS_2_379FA7AC0ADB1CA1__CTOR_OFFSET UNITYSDK_OFFSET(0x1445BF70)
#define CLASS_2_379FA7AC0ADB1CA1__ONBIND_OFFSET UNITYSDK_OFFSET(0x1445A890)
#define CLASS_2_379FA7AC0ADB1CA1___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1445C100)
#define CLASS_2_379FA7AC0ADB1CA1___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1445C160)
#define CLASS_2_379FA7AC0ADB1CA1___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x1445C040)

inline static constexpr unsigned int Class_2_379FA7AC0ADB1CA1_TypeDefinitionIndex = 67222;

class Class_2_379FA7AC0ADB1CA1 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::Class_2_D994353E21027540* Field_2_2; // 0x60
	::UnityEngine::Animator* Field_2_3; // 0x68
	::Il2CppArray<::UnityEngine::UI::Image*>* Field_2_4; // 0x70
	::Struct_2_96F8F0A04B900A9E Field_2_5; // 0x78
	::Il2CppArray<::UnityEngine::UI::Image*>* Field_2_6; // 0x80
	::System::Int32 Field_2_7; // 0x88
	::System::Int32 Field_2_8; // 0x8C
	::System::Int32 Field_2_9; // 0x90
	::System::Int32 Field_2_10; // 0x94
	::RPG::GameCore::SkillUISpecialButtonType Field_2_11; // 0x98
	::System::Boolean Field_2_12; // 0x9C
	::System::Boolean Field_2_13; // 0x9D
	::System::Boolean Field_2_14; // 0x9E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_379FA7AC0ADB1CA1__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_379FA7AC0ADB1CA1__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_379FA7AC0ADB1CA1_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_99A0188C01FF2EFD(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_379FA7AC0ADB1CA1_METHOD_2_99A0188C01FF2EFD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EADDF1782C977BCA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_379FA7AC0ADB1CA1_METHOD_2_EADDF1782C977BCA_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDE104A2956E181A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_379FA7AC0ADB1CA1_METHOD_2_EDE104A2956E181A_OFFSET))(this, a1);
	}

	::System::Void Method_2_A93E2DF739E86EB0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_379FA7AC0ADB1CA1_METHOD_2_A93E2DF739E86EB0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_379FA7AC0ADB1CA1_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::UnityEngine::RectTransform* Method_2_494458CA7765DC42()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_379FA7AC0ADB1CA1_METHOD_2_494458CA7765DC42_OFFSET))(this);
	}

	::System::Void Method_2_EDE104A2956E181A_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_379FA7AC0ADB1CA1_METHOD_2_EDE104A2956E181A_1_OFFSET))(this, a1);
	}

	::Class_1_CA217ABF4E3B4F3F* Method_2_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_CA217ABF4E3B4F3F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_379FA7AC0ADB1CA1_METHOD_2_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	::RPG::Client::MonoInControlButton* Method_2_9CF2C1E159D9A44C()
	{
		return ((::RPG::Client::MonoInControlButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_379FA7AC0ADB1CA1_METHOD_2_9CF2C1E159D9A44C_OFFSET))(this);
	}

	::RPG::Client::MonoInControlTip* Method_2_5A742CF4066D32B9()
	{
		return ((::RPG::Client::MonoInControlTip*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_379FA7AC0ADB1CA1_METHOD_2_5A742CF4066D32B9_OFFSET))(this);
	}

	::RPG::Client::LongPressEvent* Method_2_0FA063FFC416D56A()
	{
		return ((::RPG::Client::LongPressEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_379FA7AC0ADB1CA1_METHOD_2_0FA063FFC416D56A_OFFSET))(this);
	}

	::System::Void Method_2_D824C9FF720EB29B(::RPG::GameCore::SkillUISpecialButtonType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillUISpecialButtonType))((::PBYTE)hIl2Cpp + CLASS_2_379FA7AC0ADB1CA1_METHOD_2_D824C9FF720EB29B_OFFSET))(this, a1);
	}

	::System::Void Method_2_06D4ACB7CA6782D6(::RPG::GameCore::SkillUISpecialButtonType a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillUISpecialButtonType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_379FA7AC0ADB1CA1_METHOD_2_06D4ACB7CA6782D6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E6E0E86A3E0935A0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_379FA7AC0ADB1CA1_METHOD_2_E6E0E86A3E0935A0_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_379FA7AC0ADB1CA1_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_379FA7AC0ADB1CA1_METHOD_2_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_2_3F07804D8892197E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_379FA7AC0ADB1CA1_METHOD_2_3F07804D8892197E_OFFSET))(this, a1);
	}

	::System::Void Method_2_C1C0CB2C8B6124DE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_379FA7AC0ADB1CA1_METHOD_2_C1C0CB2C8B6124DE_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_379FA7AC0ADB1CA1_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_379FA7AC0ADB1CA1_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_379FA7AC0ADB1CA1___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_379FA7AC0ADB1CA1_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_379FA7AC0ADB1CA1___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_379FA7AC0ADB1CA1___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
