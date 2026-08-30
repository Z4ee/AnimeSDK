#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharaStoryMoveState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline { class CharacterStoryMoveSequenceData; }
namespace RPGTools::Timeline::CharacterStoryMove { class StoryMoveSequenceClip; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define CLASS_1_526C2C5F58C0A6C2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A0221D0)
#define CLASS_1_526C2C5F58C0A6C2_GET_CURRENTMOVESTATE_OFFSET UNITYSDK_OFFSET(0x1A0221B0)
#define CLASS_1_526C2C5F58C0A6C2_METHOD_1_03E2B9212B4B6EAF_OFFSET UNITYSDK_OFFSET(0x1A022DB0)
#define CLASS_1_526C2C5F58C0A6C2_METHOD_1_1BC67695E6791B52_OFFSET UNITYSDK_OFFSET(0x1A0228B0)
#define CLASS_1_526C2C5F58C0A6C2_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x1A022E30)
#define CLASS_1_526C2C5F58C0A6C2_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1A022FE0)
#define CLASS_1_526C2C5F58C0A6C2_METHOD_1_451E963CAA3A78BF_OFFSET UNITYSDK_OFFSET(0x1A022EF0)
#define CLASS_1_526C2C5F58C0A6C2_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x1A023040)
#define CLASS_1_526C2C5F58C0A6C2_METHOD_1_86395FEE565F7ED9_OFFSET UNITYSDK_OFFSET(0x1A022310)
#define CLASS_1_526C2C5F58C0A6C2_METHOD_1_89D1F247B9D324EE_1_OFFSET UNITYSDK_OFFSET(0x1A0232D0)
#define CLASS_1_526C2C5F58C0A6C2_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1A022220)
#define CLASS_1_526C2C5F58C0A6C2_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1A022FA0)
#define CLASS_1_526C2C5F58C0A6C2_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A022DF0)
#define CLASS_1_526C2C5F58C0A6C2_METHOD_1_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x1A022720)
#define CLASS_1_526C2C5F58C0A6C2_METHOD_1_DE4BD3007909A465_OFFSET UNITYSDK_OFFSET(0x1A022670)
#define CLASS_1_526C2C5F58C0A6C2_SET_CURRENTMOVESTATE_OFFSET UNITYSDK_OFFSET(0x1A0221C0)
#define CLASS_1_526C2C5F58C0A6C2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0233B0)

inline static constexpr unsigned int Class_1_526C2C5F58C0A6C2_TypeDefinitionIndex = 53831;

class Class_1_526C2C5F58C0A6C2 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x10
	::RPG::GameCore::AdventureCharacterController* KMAHMFPKIOI; // 0x18
	::UnityEngine::Animator* APPGGMLEPLN; // 0x20
	::Il2CppArray<::RPGTools::Timeline::CharacterStoryMove::StoryMoveSequenceClip*>* KNFHBBDGLPC; // 0x28
	::UnityEngine::Transform* PDJGEDNLBKJ; // 0x30
	::RPG::GameCore::CharaStoryMoveState _CurrentMoveState_k__BackingField; // 0x38
	::UnityEngine::Vector3 JAJPGBCPEND; // 0x3C
	::System::Int32 LACDJEIHOIF; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_526C2C5F58C0A6C2__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::CharaStoryMoveState get_CurrentMoveState()
	{
		return ((::RPG::GameCore::CharaStoryMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_526C2C5F58C0A6C2_GET_CURRENTMOVESTATE_OFFSET))(this);
	}

	::System::Void set_CurrentMoveState(::RPG::GameCore::CharaStoryMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharaStoryMoveState))((::PBYTE)hIl2Cpp + CLASS_1_526C2C5F58C0A6C2_SET_CURRENTMOVESTATE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_526C2C5F58C0A6C2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_526C2C5F58C0A6C2_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_86395FEE565F7ED9(::Il2CppArray<::RPGTools::Timeline::CharacterStoryMove::StoryMoveSequenceClip*>* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Animator* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPGTools::Timeline::CharacterStoryMove::StoryMoveSequenceClip*>*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_526C2C5F58C0A6C2_METHOD_1_86395FEE565F7ED9_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_DE4BD3007909A465(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_526C2C5F58C0A6C2_METHOD_1_DE4BD3007909A465_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_526C2C5F58C0A6C2_METHOD_1_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_1_1BC67695E6791B52(::RPG::GameCore::CharacterInputData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + CLASS_1_526C2C5F58C0A6C2_METHOD_1_1BC67695E6791B52_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_03E2B9212B4B6EAF()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_526C2C5F58C0A6C2_METHOD_1_03E2B9212B4B6EAF_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_526C2C5F58C0A6C2_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_526C2C5F58C0A6C2_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_1_451E963CAA3A78BF(::RPG::GameCore::CharacterInputData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + CLASS_1_526C2C5F58C0A6C2_METHOD_1_451E963CAA3A78BF_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_526C2C5F58C0A6C2_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_526C2C5F58C0A6C2_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_526C2C5F58C0A6C2_METHOD_1_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_526C2C5F58C0A6C2_METHOD_1_89D1F247B9D324EE_1_OFFSET))(this);
	}
};
