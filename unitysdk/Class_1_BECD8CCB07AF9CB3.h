#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharaStoryMoveState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline { class CharacterStoryMoveData; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define CLASS_1_BECD8CCB07AF9CB3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158680A0)
#define CLASS_1_BECD8CCB07AF9CB3_GET_CURRENTMOVESTATE_OFFSET UNITYSDK_OFFSET(0x15867D00)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x158680F0)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_1BC67695E6791B52_OFFSET UNITYSDK_OFFSET(0x15869440)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x158693E0)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_24958496958223F2_OFFSET UNITYSDK_OFFSET(0x15869B70)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_2AE7CDD793283EB4_OFFSET UNITYSDK_OFFSET(0x158687F0)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_4AAC4C1D2BF78D9F_OFFSET UNITYSDK_OFFSET(0x15869DD0)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_70B2E5365A7E3BCE_OFFSET UNITYSDK_OFFSET(0x15868290)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_82869294F857F661_OFFSET UNITYSDK_OFFSET(0x1586A030)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_82B2BADB6C94DC6B_OFFSET UNITYSDK_OFFSET(0x15869C40)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_98CD66A7F3C102A5_OFFSET UNITYSDK_OFFSET(0x15868D30)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0x15868000)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_A36150C5DCC8409E_2_OFFSET UNITYSDK_OFFSET(0x15868050)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x15867FB0)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_AC74FABCD91EC89E_OFFSET UNITYSDK_OFFSET(0x15869FD0)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x15869200)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15869C00)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15869BC0)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_DE4BD3007909A465_OFFSET UNITYSDK_OFFSET(0x15868C80)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x15867D20)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_FB642453C6267705_OFFSET UNITYSDK_OFFSET(0x158699C0)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_FF5188F77C143723_1_OFFSET UNITYSDK_OFFSET(0x15867E10)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_FF5188F77C143723_2_OFFSET UNITYSDK_OFFSET(0x15867EE0)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_FF5188F77C143723_OFFSET UNITYSDK_OFFSET(0x15867D40)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x15869D40)
#define CLASS_1_BECD8CCB07AF9CB3_SET_CURRENTMOVESTATE_OFFSET UNITYSDK_OFFSET(0x15867D10)
#define CLASS_1_BECD8CCB07AF9CB3__CTOR_OFFSET UNITYSDK_OFFSET(0x1586A4A0)

inline static constexpr unsigned int Class_1_BECD8CCB07AF9CB3_TypeDefinitionIndex = 53826;

class Class_1_BECD8CCB07AF9CB3 : public ::System::Object
{
public:
	::RPGTools::Timeline::CharacterStoryMoveData* IGHAHBNLIJA; // 0x10
	::UnityEngine::Animator* APPGGMLEPLN; // 0x18
	::RPG::GameCore::AdventureCharacterController* KMAHMFPKIOI; // 0x20
	::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x28
	::UnityEngine::Transform* PDJGEDNLBKJ; // 0x30
	::System::Single CNJPFIIHCHK; // 0x38
	::System::Single PJJLEJDPNHI; // 0x3C
	::System::Single GDKGCIHCKFP; // 0x40
	::System::Single HNFOFDDACPP; // 0x44
	::System::Int32 NICLFKHCJPI; // 0x48
	::UnityEngine::Vector3 CCIPMOJDNHE; // 0x4C
	::System::Single BEEHHBEGPBG; // 0x58
	::UnityEngine::Vector3 JFLMPGIPCIA; // 0x5C
	::RPG::GameCore::CharaStoryMoveState _CurrentMoveState_k__BackingField; // 0x68
	::UnityEngine::Vector3 IHLPFCONLAP; // 0x6C
	::System::Single KCMOHJEDEMK; // 0x78
	::System::Single NCENNMCAPJH; // 0x7C
	::System::Boolean HBIKMNHDANJ; // 0x80
	::UnityEngine::Vector3 BJNKIKNBFOJ; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::CharaStoryMoveState get_CurrentMoveState()
	{
		return ((::RPG::GameCore::CharaStoryMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_GET_CURRENTMOVESTATE_OFFSET))(this);
	}

	::System::Void set_CurrentMoveState(::RPG::GameCore::CharaStoryMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharaStoryMoveState))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_SET_CURRENTMOVESTATE_OFFSET))(this, a1);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Single Method_1_FF5188F77C143723()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_FF5188F77C143723_OFFSET))(this);
	}

	::System::Single Method_1_FF5188F77C143723_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_FF5188F77C143723_1_OFFSET))(this);
	}

	::System::Single Method_1_FF5188F77C143723_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_FF5188F77C143723_2_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_A36150C5DCC8409E_1_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_A36150C5DCC8409E_2_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_1_70B2E5365A7E3BCE(::RPGTools::Timeline::CharacterStoryMoveData* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Animator* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CharacterStoryMoveData*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_70B2E5365A7E3BCE_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_2AE7CDD793283EB4(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_2AE7CDD793283EB4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_98CD66A7F3C102A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_98CD66A7F3C102A5_OFFSET))(this);
	}

	::System::Void Method_1_1BC67695E6791B52(::RPG::GameCore::CharacterInputData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_1BC67695E6791B52_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_24958496958223F2(::UnityEngine::AnimatorStateInfo& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_24958496958223F2_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Single Method_1_82B2BADB6C94DC6B(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_82B2BADB6C94DC6B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Single Method_1_DE4BD3007909A465(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_DE4BD3007909A465_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Single Method_1_4AAC4C1D2BF78D9F(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_4AAC4C1D2BF78D9F_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_FB642453C6267705()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_FB642453C6267705_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_AC74FABCD91EC89E(::System::String* a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_AC74FABCD91EC89E_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_82869294F857F661(::RPG::GameCore::AdventureCharacterController* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_82869294F857F661_OFFSET))(this, a1);
	}
};
