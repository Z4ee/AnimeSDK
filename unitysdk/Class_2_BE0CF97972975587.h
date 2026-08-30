#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightBattleEventHintType.h"

class Class_0_16E4307DCC419505_1133;
class Class_1_47C4FB84CDFFA751;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_BE0CF97972975587_METHOD_2_3D984DE00664D584_OFFSET UNITYSDK_OFFSET(0x1A034C50)
#define CLASS_2_BE0CF97972975587_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1A035170)
#define CLASS_2_BE0CF97972975587_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1A0350C0)
#define CLASS_2_BE0CF97972975587_METHOD_2_88AD2FF46F46C80C_OFFSET UNITYSDK_OFFSET(0x1A034C00)
#define CLASS_2_BE0CF97972975587_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x1A034F80)
#define CLASS_2_BE0CF97972975587_METHOD_2_C9558C8A9125AC29_OFFSET UNITYSDK_OFFSET(0x1A034E80)
#define CLASS_2_BE0CF97972975587_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1A0348B0)
#define CLASS_2_BE0CF97972975587_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A034870)
#define CLASS_2_BE0CF97972975587_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0x1A035000)
#define CLASS_2_BE0CF97972975587_METHOD_2_F0C5BA821C8BCE78_OFFSET UNITYSDK_OFFSET(0x1A034D70)
#define CLASS_2_BE0CF97972975587_METHOD_2_FFE2BE9364188A52_OFFSET UNITYSDK_OFFSET(0x1A034900)
#define CLASS_2_BE0CF97972975587__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0351D0)
#define CLASS_2_BE0CF97972975587__ONBIND_OFFSET UNITYSDK_OFFSET(0x1A034600)

inline static constexpr unsigned int Class_2_BE0CF97972975587_TypeDefinitionIndex = 72169;

class Class_2_BE0CF97972975587 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::String* INHDCOPAFPF; // 0x0
	// static const ::System::String* EPJGKCKHNBO; // 0x0
	// static const ::System::String* EHJFHMEKFDI; // 0x0
	// static const ::System::String* OOPEGOAHGDF; // 0x0
	// static const ::System::String* JMFOMPCOHFE; // 0x0
	::UnityEngine::UI::Image* AFJIGEDHIPO; // 0x60
	::RPG::Client::PrefabLoadMeta* OPJNPDLLGED; // 0x68
	::UnityEngine::UI::Text* GOGNOECLBFD; // 0x70
	::System::Action_1<::Class_0_16E4307DCC419505_1133*>* CIFOILLJFNF; // 0x78
	::UnityEngine::Animation* PMOJILOJEPE; // 0x80
	::UnityEngine::GameObject* NENPNKMPAAC; // 0x88
	::RPG::Client::RPGAnimationEvent* DDCODMNKPIP; // 0x90
	::UnityEngine::Animation* OGFNFANKEKD; // 0x98
	::RPG::GameCore::GridFightBattleEventHintType BDAGIIBEPJA; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE0CF97972975587__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE0CF97972975587__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE0CF97972975587_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE0CF97972975587_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_88AD2FF46F46C80C(::System::Action_1<::Class_0_16E4307DCC419505_1133*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_0_16E4307DCC419505_1133*>*))((::PBYTE)hIl2Cpp + CLASS_2_BE0CF97972975587_METHOD_2_88AD2FF46F46C80C_OFFSET))(this, a1);
	}

	::System::Void Method_2_3D984DE00664D584(::Class_1_47C4FB84CDFFA751* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_47C4FB84CDFFA751*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BE0CF97972975587_METHOD_2_3D984DE00664D584_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F0C5BA821C8BCE78(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BE0CF97972975587_METHOD_2_F0C5BA821C8BCE78_OFFSET))(this, a1);
	}

	::System::Void Method_2_C9558C8A9125AC29(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_BE0CF97972975587_METHOD_2_C9558C8A9125AC29_OFFSET))(this, a1);
	}

	::System::Void Method_2_FFE2BE9364188A52(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BE0CF97972975587_METHOD_2_FFE2BE9364188A52_OFFSET))(this, a1);
	}

	::System::Void Method_2_F07808AF19FA033A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BE0CF97972975587_METHOD_2_F07808AF19FA033A_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE0CF97972975587_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE0CF97972975587_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE0CF97972975587_METHOD_2_4343F372F34C05BF_1_OFFSET))(this);
	}
};
