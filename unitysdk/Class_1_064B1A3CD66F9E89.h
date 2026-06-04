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

#define CLASS_1_064B1A3CD66F9E89_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA39ED30)
#define CLASS_1_064B1A3CD66F9E89_GET_CURRENTMOVESTATE_OFFSET UNITYSDK_OFFSET(0xA39ED10)
#define CLASS_1_064B1A3CD66F9E89_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xA39F920)
#define CLASS_1_064B1A3CD66F9E89_METHOD_1_3F37F1A4B5182D91_OFFSET UNITYSDK_OFFSET(0xA39F8A0)
#define CLASS_1_064B1A3CD66F9E89_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA39FA20)
#define CLASS_1_064B1A3CD66F9E89_METHOD_1_451E963CAA3A78BF_OFFSET UNITYSDK_OFFSET(0xA39F400)
#define CLASS_1_064B1A3CD66F9E89_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xA39F9A0)
#define CLASS_1_064B1A3CD66F9E89_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA39EDD0)
#define CLASS_1_064B1A3CD66F9E89_METHOD_1_C97A25933C9169C8_OFFSET UNITYSDK_OFFSET(0xA39EE60)
#define CLASS_1_064B1A3CD66F9E89_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA39FAD0)
#define CLASS_1_064B1A3CD66F9E89_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA39F3C0)
#define CLASS_1_064B1A3CD66F9E89_METHOD_1_DE4BD3007909A465_OFFSET UNITYSDK_OFFSET(0xA39F310)
#define CLASS_1_064B1A3CD66F9E89_METHOD_1_EE165BD90EC74F55_OFFSET UNITYSDK_OFFSET(0xA39FA80)
#define CLASS_1_064B1A3CD66F9E89_SET_CURRENTMOVESTATE_OFFSET UNITYSDK_OFFSET(0xA39ED20)
#define CLASS_1_064B1A3CD66F9E89__CTOR_OFFSET UNITYSDK_OFFSET(0xA39FB10)

inline static constexpr unsigned int Class_1_064B1A3CD66F9E89_TypeDefinitionIndex = 50068;

class Class_1_064B1A3CD66F9E89 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::UnityEngine::Transform* Field_1_1; // 0x18
	::RPGTools::Timeline::CharacterStoryMoveStartData* Field_1_2; // 0x20
	::UnityEngine::Animator* Field_1_3; // 0x28
	::RPG::GameCore::AdventureCharacterController* Field_1_4; // 0x30
	::RPG::GameCore::CharaStoryMoveState _CurrentMoveState_k__BackingField; // 0x38
	::UnityEngine::Vector3 Field_1_6; // 0x3C
	::RPG::GameCore::CharacterMotionFlag Field_1_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_064B1A3CD66F9E89__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::CharaStoryMoveState get_CurrentMoveState()
	{
		return ((::RPG::GameCore::CharaStoryMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_064B1A3CD66F9E89_GET_CURRENTMOVESTATE_OFFSET))(this);
	}

	::System::Void set_CurrentMoveState(::RPG::GameCore::CharaStoryMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharaStoryMoveState))((::PBYTE)hIl2Cpp + CLASS_1_064B1A3CD66F9E89_SET_CURRENTMOVESTATE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_064B1A3CD66F9E89_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_064B1A3CD66F9E89_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_C97A25933C9169C8(::RPGTools::Timeline::CharacterStoryMoveStartData* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Animator* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CharacterStoryMoveStartData*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_064B1A3CD66F9E89_METHOD_1_C97A25933C9169C8_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_DE4BD3007909A465(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_064B1A3CD66F9E89_METHOD_1_DE4BD3007909A465_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_064B1A3CD66F9E89_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_451E963CAA3A78BF(::RPG::GameCore::CharacterInputData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + CLASS_1_064B1A3CD66F9E89_METHOD_1_451E963CAA3A78BF_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_3F37F1A4B5182D91()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_064B1A3CD66F9E89_METHOD_1_3F37F1A4B5182D91_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_064B1A3CD66F9E89_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_064B1A3CD66F9E89_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_EE165BD90EC74F55(::RPG::GameCore::CharacterInputData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + CLASS_1_064B1A3CD66F9E89_METHOD_1_EE165BD90EC74F55_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_064B1A3CD66F9E89_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_064B1A3CD66F9E89_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
