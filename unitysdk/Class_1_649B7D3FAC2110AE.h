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

#define CLASS_1_649B7D3FAC2110AE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD9F3740)
#define CLASS_1_649B7D3FAC2110AE_GET_CURRENTMOVESTATE_OFFSET UNITYSDK_OFFSET(0xD9F36F0)
#define CLASS_1_649B7D3FAC2110AE_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xD9F3720)
#define CLASS_1_649B7D3FAC2110AE_METHOD_1_281096B230A6C531_OFFSET UNITYSDK_OFFSET(0xD9F3880)
#define CLASS_1_649B7D3FAC2110AE_METHOD_1_3F37F1A4B5182D91_OFFSET UNITYSDK_OFFSET(0xD9F42A0)
#define CLASS_1_649B7D3FAC2110AE_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xD9F4490)
#define CLASS_1_649B7D3FAC2110AE_METHOD_1_451E963CAA3A78BF_OFFSET UNITYSDK_OFFSET(0xD9F3E00)
#define CLASS_1_649B7D3FAC2110AE_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xD9F3710)
#define CLASS_1_649B7D3FAC2110AE_METHOD_1_A239DF324AF4215D_1_OFFSET UNITYSDK_OFFSET(0xD9F4360)
#define CLASS_1_649B7D3FAC2110AE_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xD9F37F0)
#define CLASS_1_649B7D3FAC2110AE_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xD9F4320)
#define CLASS_1_649B7D3FAC2110AE_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xD9F4450)
#define CLASS_1_649B7D3FAC2110AE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD9F3DC0)
#define CLASS_1_649B7D3FAC2110AE_METHOD_1_DE4BD3007909A465_OFFSET UNITYSDK_OFFSET(0xD9F3D10)
#define CLASS_1_649B7D3FAC2110AE_METHOD_1_EE165BD90EC74F55_OFFSET UNITYSDK_OFFSET(0xD9F4400)
#define CLASS_1_649B7D3FAC2110AE_SET_CURRENTMOVESTATE_OFFSET UNITYSDK_OFFSET(0xD9F3700)
#define CLASS_1_649B7D3FAC2110AE__CTOR_OFFSET UNITYSDK_OFFSET(0xD9F44F0)

inline static constexpr unsigned int Class_1_649B7D3FAC2110AE_TypeDefinitionIndex = 49402;

class Class_1_649B7D3FAC2110AE : public ::System::Object
{
public:
	::RPG::GameCore::AdventureCharacterController* Field_1_5; // 0x10
	::UnityEngine::Animator* Field_1_3; // 0x18
	::RPGTools::Timeline::CharacterStoryMoveStopData* Field_1_1; // 0x20
	::UnityEngine::Transform* Field_1_4; // 0x28
	::RPG::GameCore::GameEntity* Field_1_2; // 0x30
	::RPG::GameCore::CharaStoryMoveState _CurrentMoveState_k__BackingField; // 0x38
	::UnityEngine::Vector3 Field_1_6; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_649B7D3FAC2110AE__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::CharaStoryMoveState get_CurrentMoveState()
	{
		return ((::RPG::GameCore::CharaStoryMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_649B7D3FAC2110AE_GET_CURRENTMOVESTATE_OFFSET))(this);
	}

	::System::Void set_CurrentMoveState(::RPG::GameCore::CharaStoryMoveState value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharaStoryMoveState))((::PBYTE)hIl2Cpp + CLASS_1_649B7D3FAC2110AE_SET_CURRENTMOVESTATE_OFFSET))(this, value);
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

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_649B7D3FAC2110AE_METHOD_1_A239DF324AF4215D_OFFSET))(this);
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

	::System::Void Method_1_451E963CAA3A78BF(::RPG::GameCore::CharacterInputData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + CLASS_1_649B7D3FAC2110AE_METHOD_1_451E963CAA3A78BF_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_3F37F1A4B5182D91()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_649B7D3FAC2110AE_METHOD_1_3F37F1A4B5182D91_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_649B7D3FAC2110AE_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_649B7D3FAC2110AE_METHOD_1_A239DF324AF4215D_1_OFFSET))(this);
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
