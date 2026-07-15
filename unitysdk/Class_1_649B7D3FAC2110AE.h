#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharaStoryMoveState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline { class CharacterStoryMoveStopData; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define CLASS_1_649B7D3FAC2110AE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A26980)
#define CLASS_1_649B7D3FAC2110AE_GET_CURRENTMOVESTATE_OFFSET UNITYSDK_OFFSET(0x17A26930)
#define CLASS_1_649B7D3FAC2110AE_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x17A27730)
#define CLASS_1_649B7D3FAC2110AE_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x17A26960)
#define CLASS_1_649B7D3FAC2110AE_METHOD_1_1BC67695E6791B52_OFFSET UNITYSDK_OFFSET(0x17A27160)
#define CLASS_1_649B7D3FAC2110AE_METHOD_1_281096B230A6C531_OFFSET UNITYSDK_OFFSET(0x17A26AC0)
#define CLASS_1_649B7D3FAC2110AE_METHOD_1_3F37F1A4B5182D91_OFFSET UNITYSDK_OFFSET(0x17A27670)
#define CLASS_1_649B7D3FAC2110AE_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17A278C0)
#define CLASS_1_649B7D3FAC2110AE_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x17A26950)
#define CLASS_1_649B7D3FAC2110AE_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x17A269D0)
#define CLASS_1_649B7D3FAC2110AE_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x17A276F0)
#define CLASS_1_649B7D3FAC2110AE_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x17A27880)
#define CLASS_1_649B7D3FAC2110AE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17A27120)
#define CLASS_1_649B7D3FAC2110AE_METHOD_1_DE4BD3007909A465_OFFSET UNITYSDK_OFFSET(0x17A27070)
#define CLASS_1_649B7D3FAC2110AE_METHOD_1_EE165BD90EC74F55_OFFSET UNITYSDK_OFFSET(0x17A27830)
#define CLASS_1_649B7D3FAC2110AE_SET_CURRENTMOVESTATE_OFFSET UNITYSDK_OFFSET(0x17A26940)
#define CLASS_1_649B7D3FAC2110AE__CTOR_OFFSET UNITYSDK_OFFSET(0x17A27920)

inline static constexpr unsigned int Class_1_649B7D3FAC2110AE_TypeDefinitionIndex = 51151;

class Class_1_649B7D3FAC2110AE : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::UnityEngine::Animator* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::RPG::GameCore::AdventureCharacterController* Field_1_3; // 0x28
	::RPGTools::Timeline::CharacterStoryMoveStopData* Field_1_4; // 0x30
	::UnityEngine::Vector3 Field_1_5; // 0x38
	::RPG::GameCore::CharaStoryMoveState _CurrentMoveState_k__BackingField; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_649B7D3FAC2110AE__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::CharaStoryMoveState get_CurrentMoveState()
	{
		return ((::RPG::GameCore::CharaStoryMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_649B7D3FAC2110AE_GET_CURRENTMOVESTATE_OFFSET))(this);
	}

	::System::Void set_CurrentMoveState(::RPG::GameCore::CharaStoryMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharaStoryMoveState))((::PBYTE)hIl2Cpp + CLASS_1_649B7D3FAC2110AE_SET_CURRENTMOVESTATE_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_649B7D3FAC2110AE_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_649B7D3FAC2110AE_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_649B7D3FAC2110AE_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_649B7D3FAC2110AE_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_281096B230A6C531(::RPGTools::Timeline::CharacterStoryMoveStopData* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Animator* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CharacterStoryMoveStopData*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_649B7D3FAC2110AE_METHOD_1_281096B230A6C531_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_DE4BD3007909A465(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_649B7D3FAC2110AE_METHOD_1_DE4BD3007909A465_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_649B7D3FAC2110AE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_1BC67695E6791B52(::RPG::GameCore::CharacterInputData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + CLASS_1_649B7D3FAC2110AE_METHOD_1_1BC67695E6791B52_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_3F37F1A4B5182D91()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_649B7D3FAC2110AE_METHOD_1_3F37F1A4B5182D91_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_649B7D3FAC2110AE_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_649B7D3FAC2110AE_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_1_EE165BD90EC74F55(::RPG::GameCore::CharacterInputData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + CLASS_1_649B7D3FAC2110AE_METHOD_1_EE165BD90EC74F55_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_649B7D3FAC2110AE_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_649B7D3FAC2110AE_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
