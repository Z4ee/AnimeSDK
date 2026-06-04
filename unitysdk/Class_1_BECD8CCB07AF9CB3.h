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

#define CLASS_1_BECD8CCB07AF9CB3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13D08170)
#define CLASS_1_BECD8CCB07AF9CB3_GET_CURRENTMOVESTATE_OFFSET UNITYSDK_OFFSET(0x13D07EF0)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x13D09130)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_24958496958223F2_OFFSET UNITYSDK_OFFSET(0x13D097C0)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_2AE7CDD793283EB4_OFFSET UNITYSDK_OFFSET(0x13D08810)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_2BC55A66CB2B0118_OFFSET UNITYSDK_OFFSET(0x13D08D50)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_451E963CAA3A78BF_OFFSET UNITYSDK_OFFSET(0x13D09190)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x13D08FE0)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_70B2E5365A7E3BCE_OFFSET UNITYSDK_OFFSET(0x13D08310)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_82869294F857F661_OFFSET UNITYSDK_OFFSET(0x13D09B30)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_87AC8069776F1A7F_OFFSET UNITYSDK_OFFSET(0x13D096A0)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0x13D080D0)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_A36150C5DCC8409E_2_OFFSET UNITYSDK_OFFSET(0x13D08120)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x13D08080)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_AC74FABCD91EC89E_OFFSET UNITYSDK_OFFSET(0x13D09AD0)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x13D09850)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13D09810)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x13D081C0)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_D64FD9A228A1C4E0_1_OFFSET UNITYSDK_OFFSET(0x13D07FA0)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_D64FD9A228A1C4E0_2_OFFSET UNITYSDK_OFFSET(0x13D08010)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x13D07F30)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_DE4BD3007909A465_OFFSET UNITYSDK_OFFSET(0x13D08CA0)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_EF4C202067CA0433_OFFSET UNITYSDK_OFFSET(0x13D09890)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x13D07F10)
#define CLASS_1_BECD8CCB07AF9CB3_SET_CURRENTMOVESTATE_OFFSET UNITYSDK_OFFSET(0x13D07F00)
#define CLASS_1_BECD8CCB07AF9CB3__CTOR_OFFSET UNITYSDK_OFFSET(0x13D09FA0)

inline static constexpr unsigned int Class_1_BECD8CCB07AF9CB3_TypeDefinitionIndex = 50060;

class Class_1_BECD8CCB07AF9CB3 : public ::System::Object
{
public:
	::RPGTools::Timeline::CharacterStoryMoveData* Field_1_0; // 0x10
	::RPG::GameCore::AdventureCharacterController* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::UnityEngine::Animator* Field_1_3; // 0x28
	::UnityEngine::Transform* Field_1_4; // 0x30
	::System::Single Field_1_5; // 0x38
	::System::Single Field_1_6; // 0x3C
	::System::Single Field_1_7; // 0x40
	::UnityEngine::Vector3 Field_1_8; // 0x44
	::System::Single Field_1_9; // 0x50
	::System::Single Field_1_10; // 0x54
	::System::Single Field_1_11; // 0x58
	::RPG::GameCore::CharaStoryMoveState _CurrentMoveState_k__BackingField; // 0x5C
	::System::Int32 Field_1_13; // 0x60
	::UnityEngine::Vector3 Field_1_14; // 0x64
	::UnityEngine::Vector3 Field_1_15; // 0x70
	::UnityEngine::Vector3 Field_1_16; // 0x7C

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

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_D64FD9A228A1C4E0_1_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_D64FD9A228A1C4E0_2_OFFSET))(this);
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

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_70B2E5365A7E3BCE(::RPGTools::Timeline::CharacterStoryMoveData* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Animator* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CharacterStoryMoveData*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_70B2E5365A7E3BCE_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_2AE7CDD793283EB4(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_2AE7CDD793283EB4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2BC55A66CB2B0118()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_2BC55A66CB2B0118_OFFSET))(this);
	}

	::System::Void Method_1_451E963CAA3A78BF(::RPG::GameCore::CharacterInputData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_451E963CAA3A78BF_OFFSET))(this, a1);
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

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Single Method_1_DE4BD3007909A465(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_DE4BD3007909A465_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_EF4C202067CA0433()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_EF4C202067CA0433_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_87AC8069776F1A7F()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_87AC8069776F1A7F_OFFSET))(this);
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
