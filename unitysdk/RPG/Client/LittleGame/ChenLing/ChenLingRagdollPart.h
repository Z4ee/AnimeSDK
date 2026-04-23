#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9CBC71DC5240DC00;
namespace System { class Action; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_CONFIGUREPHYSICS_OFFSET UNITYSDK_OFFSET(0xA684280)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xA684EC0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_METHOD_5_16BDE42E5EA95C8B_OFFSET UNITYSDK_OFFSET(0xA684A90)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_METHOD_5_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xA6844D0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_METHOD_5_3845AD389B8E1E47_OFFSET UNITYSDK_OFFSET(0xA685280)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA685160)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_METHOD_5_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xA685220)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_METHOD_5_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0xA684610)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_PLAY_OFFSET UNITYSDK_OFFSET(0xA684300)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_RECOVER_OFFSET UNITYSDK_OFFSET(0xA684C30)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART__CTOR_OFFSET UNITYSDK_OFFSET(0xA685510)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingRagdollPart_TypeDefinitionIndex = 71473;

	class ChenLingRagdollPart : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single Field_5_16; // 0x0
		::UnityEngine::Rigidbody* Field_5_0; // 0x18
		::UnityEngine::Collider* Field_5_1; // 0x20
		::System::Boolean Field_5_2; // 0x28
		::System::Boolean Field_5_3; // 0x29
		::System::Boolean Field_5_4; // 0x2A
		::UnityEngine::Transform* Field_5_5; // 0x30
		::UnityEngine::Vector3 Field_5_6; // 0x38
		::UnityEngine::Quaternion Field_5_7; // 0x44
		::UnityEngine::Vector3 Field_5_8; // 0x54
		::System::Boolean Field_5_9; // 0x60
		::System::Single Field_5_10; // 0x64
		::System::Single Field_5_11; // 0x68
		::System::Single Field_5_12; // 0x6C
		::System::Single Field_5_13; // 0x70
		::System::Single Field_5_14; // 0x74
		::System::Single Field_5_15; // 0x78
		::System::Single Field_5_17; // 0x7C
		::System::Single Field_5_18; // 0x80
		::System::Action* Field_5_19; // 0x88
		::Class_1_9CBC71DC5240DC00* Field_5_20; // 0x90
		::System::Single Field_5_21; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART__CTOR_OFFSET))(this);
		}

		::System::Void ConfigurePhysics(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_CONFIGUREPHYSICS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Play(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Action* a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_PLAY_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Recover(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_RECOVER_OFFSET))(this, a1);
		}

		::System::Void Method_5_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_METHOD_5_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void Method_5_E52129E82CD2D7F8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_METHOD_5_E52129E82CD2D7F8_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Single Method_5_A36150C5DCC8409E()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_METHOD_5_A36150C5DCC8409E_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Boolean Method_5_3845AD389B8E1E47()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_METHOD_5_3845AD389B8E1E47_OFFSET))(this);
		}

		::System::Single Method_5_16BDE42E5EA95C8B()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_METHOD_5_16BDE42E5EA95C8B_OFFSET))(this);
		}
	};
}
