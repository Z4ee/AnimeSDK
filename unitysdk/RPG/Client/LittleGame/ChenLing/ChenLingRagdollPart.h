#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1342B57709FD7AC5;
namespace System { class Action; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_CONFIGUREPHYSICS_OFFSET UNITYSDK_OFFSET(0xD4B8530)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xD4B9170)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_METHOD_5_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xD4B8780)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_METHOD_5_3845AD389B8E1E47_OFFSET UNITYSDK_OFFSET(0xD4B9530)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xD4B9410)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_METHOD_5_9D5BEBE295BE65D4_OFFSET UNITYSDK_OFFSET(0xD4B8D40)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_METHOD_5_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xD4B94D0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_METHOD_5_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0xD4B88C0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_PLAY_OFFSET UNITYSDK_OFFSET(0xD4B85B0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_RECOVER_OFFSET UNITYSDK_OFFSET(0xD4B8EE0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART__CTOR_OFFSET UNITYSDK_OFFSET(0xD4B9780)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingRagdollPart_TypeDefinitionIndex = 77505;

	class ChenLingRagdollPart : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single ELHNHEICIFJ; // 0x0
		::UnityEngine::Rigidbody* HPAGDLDHKFC; // 0x18
		::UnityEngine::Collider* GBDKBLPAHEL; // 0x20
		::System::Boolean GFGNMBCLJFK; // 0x28
		::System::Boolean KBKEKLIIKKB; // 0x29
		::System::Boolean PPCGLFJCBHC; // 0x2A
		::UnityEngine::Transform* FKGEOKGMMDP; // 0x30
		::UnityEngine::Vector3 HCHPHGIDCLJ; // 0x38
		::UnityEngine::Quaternion AJJAMBIGFKO; // 0x44
		::UnityEngine::Vector3 OBDBPJIKJDH; // 0x54
		::System::Boolean FMNEEONAMNO; // 0x60
		::System::Single PMFOMFIGLFP; // 0x64
		::System::Single CDFHFDMJIGE; // 0x68
		::System::Single AJPEPAFPDBL; // 0x6C
		::System::Single PAIGBPPDBKI; // 0x70
		::System::Single KBCBEAJBKIP; // 0x74
		::System::Single FDPBLLPDHIB; // 0x78
		::System::Single LLGCLOIFNFN; // 0x7C
		::System::Single PHJLNEFBENJ; // 0x80
		::System::Action* CIFOILLJFNF; // 0x88
		::Class_1_1342B57709FD7AC5* DBCCOEFFKCM; // 0x90
		::System::Single EDJHKPMGHNB; // 0x98

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

		::System::Single Method_5_9D5BEBE295BE65D4()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_METHOD_5_9D5BEBE295BE65D4_OFFSET))(this);
		}
	};
}
