#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightBattleEventHintType.h"

class Class_0_16E4307DCC419505_1133;
class Class_1_47C4FB84CDFFA751;
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_6FB71C8A93137451_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x17FD8FA0)
#define CLASS_2_6FB71C8A93137451_METHOD_2_471A03BE294D4FEA_OFFSET UNITYSDK_OFFSET(0x17FD8ED0)
#define CLASS_2_6FB71C8A93137451_METHOD_2_493E86E81DA8CED0_OFFSET UNITYSDK_OFFSET(0x17FD8BE0)
#define CLASS_2_6FB71C8A93137451_METHOD_2_6AC2D47E0EE3A35D_OFFSET UNITYSDK_OFFSET(0x17FD8D00)
#define CLASS_2_6FB71C8A93137451_METHOD_2_88AD2FF46F46C80C_OFFSET UNITYSDK_OFFSET(0x17FD8B90)
#define CLASS_2_6FB71C8A93137451_METHOD_2_95EBB4767E2902DE_OFFSET UNITYSDK_OFFSET(0x17FD8F50)
#define CLASS_2_6FB71C8A93137451_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x17FD9030)
#define CLASS_2_6FB71C8A93137451_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x17FD8B50)
#define CLASS_2_6FB71C8A93137451_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17FD8B10)
#define CLASS_2_6FB71C8A93137451__CTOR_OFFSET UNITYSDK_OFFSET(0x17FD90A0)
#define CLASS_2_6FB71C8A93137451__ONBIND_OFFSET UNITYSDK_OFFSET(0x17FD8820)
#define CLASS_2_6FB71C8A93137451___ONBIND_B__0_0_OFFSET UNITYSDK_OFFSET(0x17FD90D0)

inline static constexpr unsigned int Class_2_6FB71C8A93137451_TypeDefinitionIndex = 72168;

class Class_2_6FB71C8A93137451 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::String* INHDCOPAFPF; // 0x0
	// static const ::System::String* OGGNOKPOMHB; // 0x0
	// static const ::System::String* EHJFHMEKFDI; // 0x0
	::RPG::Client::RPGAnimationEvent* DDCODMNKPIP; // 0x60
	::UnityEngine::UI::Image* AFJIGEDHIPO; // 0x68
	::UnityEngine::UI::Text* GOGNOECLBFD; // 0x70
	::UnityEngine::Animation* PMOJILOJEPE; // 0x78
	::System::Action_1<::Class_0_16E4307DCC419505_1133*>* CIFOILLJFNF; // 0x80
	::RPG::GameCore::GridFightBattleEventHintType BDAGIIBEPJA; // 0x88

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

	::System::Void Method_2_88AD2FF46F46C80C(::System::Action_1<::Class_0_16E4307DCC419505_1133*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_0_16E4307DCC419505_1133*>*))((::PBYTE)hIl2Cpp + CLASS_2_6FB71C8A93137451_METHOD_2_88AD2FF46F46C80C_OFFSET))(this, a1);
	}

	::System::Void Method_2_493E86E81DA8CED0(::Class_1_47C4FB84CDFFA751* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_47C4FB84CDFFA751*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6FB71C8A93137451_METHOD_2_493E86E81DA8CED0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6AC2D47E0EE3A35D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6FB71C8A93137451_METHOD_2_6AC2D47E0EE3A35D_OFFSET))(this, a1);
	}

	::System::Void Method_2_471A03BE294D4FEA(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_6FB71C8A93137451_METHOD_2_471A03BE294D4FEA_OFFSET))(this, a1);
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
};
