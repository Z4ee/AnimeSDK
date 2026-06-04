#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureLinearMovementControlType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_D7A74C083376D5D6;
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::Client { class ClientInputData; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_1_58605927BBE9A4A2_METHOD_1_5B53C9AD9293CBEC_OFFSET UNITYSDK_OFFSET(0x144C2030)
#define CLASS_1_58605927BBE9A4A2_METHOD_1_7663268A7EE11871_OFFSET UNITYSDK_OFFSET(0x144C2530)
#define CLASS_1_58605927BBE9A4A2_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x144C24A0)
#define CLASS_1_58605927BBE9A4A2_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x144C2450)
#define CLASS_1_58605927BBE9A4A2_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x144C1B20)
#define CLASS_1_58605927BBE9A4A2_METHOD_1_E926BF38832D60E1_OFFSET UNITYSDK_OFFSET(0x144C1C00)
#define CLASS_1_58605927BBE9A4A2__CTOR_OFFSET UNITYSDK_OFFSET(0x144C3880)

inline static constexpr unsigned int Class_1_58605927BBE9A4A2_TypeDefinitionIndex = 53291;

class Class_1_58605927BBE9A4A2 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::UnityEngine::Transform* Field_1_1; // 0x18
	::Class_2_D7A74C083376D5D6* Field_1_2; // 0x20
	::UnityEngine::Transform* Field_1_3; // 0x28
	::RPG::GameCore::AdventureCharacterController* Field_1_4; // 0x30
	::RPG::Client::CameraBlendCurve* Field_1_5; // 0x38
	::RPG::Client::CameraBlendCurve* Field_1_6; // 0x40
	::RPG::GameCore::GameEntity* Field_1_7; // 0x48
	::RPG::GameCore::GameEntity* Field_1_8; // 0x50
	::UnityEngine::Vector3 Field_1_9; // 0x58
	::System::Single Field_1_10; // 0x64
	::System::Single Field_1_11; // 0x68
	::System::Single Field_1_12; // 0x6C
	::System::Single Field_1_13; // 0x70
	::UnityEngine::Vector3 Field_1_14; // 0x74
	::System::Single Field_1_15; // 0x80
	::System::Single Field_1_16; // 0x84
	::System::Boolean Field_1_17; // 0x88
	::System::Boolean Field_1_18; // 0x89
	::System::Boolean Field_1_19; // 0x8A
	::System::Boolean Field_1_20; // 0x8B
	::System::Single Field_1_21; // 0x8C
	::RPG::GameCore::AdventureLinearMovementControlType Field_1_22; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58605927BBE9A4A2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58605927BBE9A4A2_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_E926BF38832D60E1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::RPG::Client::CameraBlendCurve* a8, ::System::Boolean a9)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::CameraBlendCurve*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_58605927BBE9A4A2_METHOD_1_E926BF38832D60E1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_1_5B53C9AD9293CBEC(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::RPG::Client::CameraBlendCurve* a7, ::RPG::Client::CameraBlendCurve* a8, ::System::Boolean a9)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::CameraBlendCurve*, ::RPG::Client::CameraBlendCurve*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_58605927BBE9A4A2_METHOD_1_5B53C9AD9293CBEC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58605927BBE9A4A2_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58605927BBE9A4A2_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}

	::System::Boolean Method_1_7663268A7EE11871(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::RPG::GameCore::AdventureCharacterController* a3, ::RPG::Client::ClientInputData* a4, ::System::Boolean& a5, ::UnityEngine::Vector3& a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::RPG::GameCore::AdventureCharacterController*, ::RPG::Client::ClientInputData*, ::System::Boolean&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_58605927BBE9A4A2_METHOD_1_7663268A7EE11871_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
