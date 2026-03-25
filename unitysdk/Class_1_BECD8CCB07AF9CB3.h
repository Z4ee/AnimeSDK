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

#define CLASS_1_BECD8CCB07AF9CB3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA9AC360)
#define CLASS_1_BECD8CCB07AF9CB3_GET_CURRENTMOVESTATE_OFFSET UNITYSDK_OFFSET(0xA9AC0E0)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA9AD300)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_24958496958223F2_OFFSET UNITYSDK_OFFSET(0xA9AD9B0)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_2BC55A66CB2B0118_OFFSET UNITYSDK_OFFSET(0xA9ACF20)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_2D3F9F7FD2ACF263_OFFSET UNITYSDK_OFFSET(0xA9ADD00)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_451E963CAA3A78BF_OFFSET UNITYSDK_OFFSET(0xA9AD360)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xA9AD1B0)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_70B2E5365A7E3BCE_OFFSET UNITYSDK_OFFSET(0xA9AC500)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_87AC8069776F1A7F_OFFSET UNITYSDK_OFFSET(0xA9AD890)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0xA9AC2C0)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_A36150C5DCC8409E_2_OFFSET UNITYSDK_OFFSET(0xA9AC310)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xA9AC270)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_AA8E43DAEFA0BBBD_OFFSET UNITYSDK_OFFSET(0xA9AC9D0)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_AC74FABCD91EC89E_OFFSET UNITYSDK_OFFSET(0xA9ADCA0)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA9ADA40)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA9ADA00)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0xA9AC3B0)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_D64FD9A228A1C4E0_1_OFFSET UNITYSDK_OFFSET(0xA9AC190)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_D64FD9A228A1C4E0_2_OFFSET UNITYSDK_OFFSET(0xA9AC200)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0xA9AC120)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_DE4BD3007909A465_OFFSET UNITYSDK_OFFSET(0xA9ACE70)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_EF4C202067CA0433_OFFSET UNITYSDK_OFFSET(0xA9ADA80)
#define CLASS_1_BECD8CCB07AF9CB3_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0xA9AC100)
#define CLASS_1_BECD8CCB07AF9CB3_SET_CURRENTMOVESTATE_OFFSET UNITYSDK_OFFSET(0xA9AC0F0)
#define CLASS_1_BECD8CCB07AF9CB3__CTOR_OFFSET UNITYSDK_OFFSET(0xA9AE050)

inline static constexpr unsigned int Class_1_BECD8CCB07AF9CB3_TypeDefinitionIndex = 43394;

class Class_1_BECD8CCB07AF9CB3 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_2; // 0x10
	::UnityEngine::Transform* Field_1_4; // 0x18
	::UnityEngine::Animator* Field_1_3; // 0x20
	::RPG::GameCore::AdventureCharacterController* Field_1_5; // 0x28
	::RPGTools::Timeline::CharacterStoryMoveData* Field_1_1; // 0x30
	::System::Single Field_1_13; // 0x38
	::UnityEngine::Vector3 Field_1_9; // 0x3C
	::UnityEngine::Vector3 Field_1_16; // 0x48
	::System::Single Field_1_11; // 0x54
	::UnityEngine::Vector3 Field_1_8; // 0x58
	::System::Int32 Field_1_10; // 0x64
	::System::Single Field_1_15; // 0x68
	::System::Single Field_1_6; // 0x6C
	::System::Single Field_1_14; // 0x70
	::RPG::GameCore::CharaStoryMoveState _CurrentMoveState_k__BackingField; // 0x74
	::UnityEngine::Vector3 Field_1_7; // 0x78
	::System::Single Field_1_12; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::CharaStoryMoveState get_CurrentMoveState()
	{
		return ((::RPG::GameCore::CharaStoryMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_GET_CURRENTMOVESTATE_OFFSET))(this);
	}

	::System::Void set_CurrentMoveState(::RPG::GameCore::CharaStoryMoveState value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharaStoryMoveState))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_SET_CURRENTMOVESTATE_OFFSET))(this, value);
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

	::UnityEngine::Vector3 Method_1_AA8E43DAEFA0BBBD(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_AA8E43DAEFA0BBBD_OFFSET))(this, a1, a2);
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

	::System::Boolean Method_1_2D3F9F7FD2ACF263(::RPG::GameCore::AdventureCharacterController* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_1_BECD8CCB07AF9CB3_METHOD_1_2D3F9F7FD2ACF263_OFFSET))(this, a1);
	}
};
