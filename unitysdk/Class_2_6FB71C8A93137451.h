#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightBattleEventHintType.h"

class Class_0_16E4307DCC419505_1034;
class Class_1_47C4FB84CDFFA751;
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_6FB71C8A93137451_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x13BD8230)
#define CLASS_2_6FB71C8A93137451_METHOD_2_493E86E81DA8CED0_OFFSET UNITYSDK_OFFSET(0x13BD7EC0)
#define CLASS_2_6FB71C8A93137451_METHOD_2_6AC2D47E0EE3A35D_OFFSET UNITYSDK_OFFSET(0x13BD7FE0)
#define CLASS_2_6FB71C8A93137451_METHOD_2_88AD2FF46F46C80C_OFFSET UNITYSDK_OFFSET(0x13BD7E70)
#define CLASS_2_6FB71C8A93137451_METHOD_2_95EBB4767E2902DE_OFFSET UNITYSDK_OFFSET(0x13BD81E0)
#define CLASS_2_6FB71C8A93137451_METHOD_2_991471FEB51C14B3_OFFSET UNITYSDK_OFFSET(0x13BD8160)
#define CLASS_2_6FB71C8A93137451_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x13BD82C0)
#define CLASS_2_6FB71C8A93137451_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x13BD7E30)
#define CLASS_2_6FB71C8A93137451_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13BD7DF0)
#define CLASS_2_6FB71C8A93137451__CTOR_OFFSET UNITYSDK_OFFSET(0x13BD8330)
#define CLASS_2_6FB71C8A93137451__ONBIND_OFFSET UNITYSDK_OFFSET(0x13BD7AF0)
#define CLASS_2_6FB71C8A93137451___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x13BD8380)
#define CLASS_2_6FB71C8A93137451___ONBIND_B__0_0_OFFSET UNITYSDK_OFFSET(0x13BD8360)

inline static constexpr unsigned int Class_2_6FB71C8A93137451_TypeDefinitionIndex = 67488;

class Class_2_6FB71C8A93137451 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	::UnityEngine::UI::Image* Field_2_4; // 0x60
	::UnityEngine::Animation* Field_2_5; // 0x68
	::System::Action_1<::Class_0_16E4307DCC419505_1034*>* Field_2_6; // 0x70
	::UnityEngine::UI::Text* Field_2_7; // 0x78
	::RPG::Client::RPGAnimationEvent* Field_2_8; // 0x80
	::RPG::GameCore::GridFightBattleEventHintType Field_2_9; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FB71C8A93137451__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FB71C8A93137451__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FB71C8A93137451_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FB71C8A93137451_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_88AD2FF46F46C80C(::System::Action_1<::Class_0_16E4307DCC419505_1034*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_0_16E4307DCC419505_1034*>*))((::PBYTE)hIl2Cpp + CLASS_2_6FB71C8A93137451_METHOD_2_88AD2FF46F46C80C_OFFSET))(this, a1);
	}

	::System::Void Method_2_493E86E81DA8CED0(::Class_1_47C4FB84CDFFA751* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_47C4FB84CDFFA751*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6FB71C8A93137451_METHOD_2_493E86E81DA8CED0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6AC2D47E0EE3A35D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6FB71C8A93137451_METHOD_2_6AC2D47E0EE3A35D_OFFSET))(this, a1);
	}

	::System::Void Method_2_991471FEB51C14B3(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_6FB71C8A93137451_METHOD_2_991471FEB51C14B3_OFFSET))(this, a1);
	}

	::System::Void Method_2_95EBB4767E2902DE(::RPG::GameCore::GridFightBattleEventHintType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightBattleEventHintType))((::PBYTE)hIl2Cpp + CLASS_2_6FB71C8A93137451_METHOD_2_95EBB4767E2902DE_OFFSET))(this, a1);
	}

	::System::Void Method_2_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FB71C8A93137451_METHOD_2_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FB71C8A93137451_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void __OnBind_b__0_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FB71C8A93137451___ONBIND_B__0_0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FB71C8A93137451___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
