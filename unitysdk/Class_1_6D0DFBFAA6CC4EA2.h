#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharaStoryMoveState.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline { class CharacterStoryMoveStartData; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define CLASS_1_6D0DFBFAA6CC4EA2_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB10F0D0)
#define CLASS_1_6D0DFBFAA6CC4EA2_GET_CURRENTMOVESTATE_OFFSET UNITYSDK_OFFSET(0xB10F0B0)
#define CLASS_1_6D0DFBFAA6CC4EA2_METHOD_1_0247320143E5134B_OFFSET UNITYSDK_OFFSET(0xB10F210)
#define CLASS_1_6D0DFBFAA6CC4EA2_METHOD_1_1BC67695E6791B52_OFFSET UNITYSDK_OFFSET(0xB10F880)
#define CLASS_1_6D0DFBFAA6CC4EA2_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xB10FE00)
#define CLASS_1_6D0DFBFAA6CC4EA2_METHOD_1_3F37F1A4B5182D91_OFFSET UNITYSDK_OFFSET(0xB10FD80)
#define CLASS_1_6D0DFBFAA6CC4EA2_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB10FF10)
#define CLASS_1_6D0DFBFAA6CC4EA2_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xB10F120)
#define CLASS_1_6D0DFBFAA6CC4EA2_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB10FE90)
#define CLASS_1_6D0DFBFAA6CC4EA2_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB10FFC0)
#define CLASS_1_6D0DFBFAA6CC4EA2_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB10F840)
#define CLASS_1_6D0DFBFAA6CC4EA2_METHOD_1_DE4BD3007909A465_OFFSET UNITYSDK_OFFSET(0xB10F790)
#define CLASS_1_6D0DFBFAA6CC4EA2_METHOD_1_EE165BD90EC74F55_OFFSET UNITYSDK_OFFSET(0xB10FF70)
#define CLASS_1_6D0DFBFAA6CC4EA2_SET_CURRENTMOVESTATE_OFFSET UNITYSDK_OFFSET(0xB10F0C0)
#define CLASS_1_6D0DFBFAA6CC4EA2__CTOR_OFFSET UNITYSDK_OFFSET(0xB110000)

inline static constexpr unsigned int Class_1_6D0DFBFAA6CC4EA2_TypeDefinitionIndex = 53620;

class Class_1_6D0DFBFAA6CC4EA2 : public ::System::Object
{
public:
	::UnityEngine::Transform* PDJGEDNLBKJ; // 0x10
	::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x18
	::RPGTools::Timeline::CharacterStoryMoveStartData* IGHAHBNLIJA; // 0x20
	::UnityEngine::Animator* APPGGMLEPLN; // 0x28
	::RPG::GameCore::AdventureCharacterController* KMAHMFPKIOI; // 0x30
	::RPG::GameCore::CharaStoryMoveState _CurrentMoveState_k__BackingField; // 0x38
	::RPG::GameCore::CharacterMotionFlag KMKPGPIDKJF; // 0x3C
	::UnityEngine::Vector3 JAJPGBCPEND; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D0DFBFAA6CC4EA2__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::CharaStoryMoveState get_CurrentMoveState()
	{
		return ((::RPG::GameCore::CharaStoryMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D0DFBFAA6CC4EA2_GET_CURRENTMOVESTATE_OFFSET))(this);
	}

	::System::Void set_CurrentMoveState(::RPG::GameCore::CharaStoryMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharaStoryMoveState))((::PBYTE)hIl2Cpp + CLASS_1_6D0DFBFAA6CC4EA2_SET_CURRENTMOVESTATE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D0DFBFAA6CC4EA2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D0DFBFAA6CC4EA2_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_0247320143E5134B(::RPGTools::Timeline::CharacterStoryMoveStartData* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Animator* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CharacterStoryMoveStartData*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_6D0DFBFAA6CC4EA2_METHOD_1_0247320143E5134B_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_DE4BD3007909A465(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6D0DFBFAA6CC4EA2_METHOD_1_DE4BD3007909A465_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D0DFBFAA6CC4EA2_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_1BC67695E6791B52(::RPG::GameCore::CharacterInputData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + CLASS_1_6D0DFBFAA6CC4EA2_METHOD_1_1BC67695E6791B52_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_3F37F1A4B5182D91()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D0DFBFAA6CC4EA2_METHOD_1_3F37F1A4B5182D91_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D0DFBFAA6CC4EA2_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D0DFBFAA6CC4EA2_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_EE165BD90EC74F55(::RPG::GameCore::CharacterInputData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + CLASS_1_6D0DFBFAA6CC4EA2_METHOD_1_EE165BD90EC74F55_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D0DFBFAA6CC4EA2_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D0DFBFAA6CC4EA2_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
