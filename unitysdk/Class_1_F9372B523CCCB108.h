#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_2AA304B71C6E8B6D;
class Class_1_6659C5C004EC1381;
class Class_1_95EEF67A826E14FF;
namespace RPG::Client { class BattleBuffToastNotify; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_F9372B523CCCB108_METHOD_1_499322337E6865CA_OFFSET UNITYSDK_OFFSET(0xB9F65A0)
#define CLASS_1_F9372B523CCCB108_METHOD_1_4E4A8E9B613BC2D7_OFFSET UNITYSDK_OFFSET(0xB9F7020)
#define CLASS_1_F9372B523CCCB108_METHOD_1_834E1401D095937E_OFFSET UNITYSDK_OFFSET(0xB9F6510)
#define CLASS_1_F9372B523CCCB108_METHOD_1_8B2D1E7D3295AEAF_OFFSET UNITYSDK_OFFSET(0xB9F63A0)
#define CLASS_1_F9372B523CCCB108_METHOD_1_910ED7AFF48C2F6E_OFFSET UNITYSDK_OFFSET(0xB9F6A60)
#define CLASS_1_F9372B523CCCB108_METHOD_1_997C7BBCC52A7BFD_OFFSET UNITYSDK_OFFSET(0xB9F6DC0)
#define CLASS_1_F9372B523CCCB108_METHOD_1_B88F9C7C4F8C76A0_OFFSET UNITYSDK_OFFSET(0xB9F6700)
#define CLASS_1_F9372B523CCCB108_METHOD_1_C998BD122A05946B_OFFSET UNITYSDK_OFFSET(0xB9F6E90)
#define CLASS_1_F9372B523CCCB108_METHOD_1_D0B0CC1657916DF6_OFFSET UNITYSDK_OFFSET(0xB9F6920)
#define CLASS_1_F9372B523CCCB108_METHOD_1_D56DEA62B31A822A_OFFSET UNITYSDK_OFFSET(0xB9F6890)
#define CLASS_1_F9372B523CCCB108__CTOR_OFFSET UNITYSDK_OFFSET(0xB9F70D0)

inline static constexpr unsigned int Class_1_F9372B523CCCB108_TypeDefinitionIndex = 71500;

class Class_1_F9372B523CCCB108 : public ::System::Object
{
public:
	// static const ::System::String* CBEANHHGNAM; // 0x0
	::Class_1_6659C5C004EC1381* ODMGBEOIEEB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9372B523CCCB108__CTOR_OFFSET))(this);
	}

	::Class_1_95EEF67A826E14FF* Method_1_8B2D1E7D3295AEAF(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_1_95EEF67A826E14FF*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_F9372B523CCCB108_METHOD_1_8B2D1E7D3295AEAF_OFFSET))(this, a1);
	}

	::Class_1_95EEF67A826E14FF* Method_1_B88F9C7C4F8C76A0(::RPG::Client::BattleBuffToastNotify* a1)
	{
		return ((::Class_1_95EEF67A826E14FF*(*)(::PVOID, ::RPG::Client::BattleBuffToastNotify*))((::PBYTE)hIl2Cpp + CLASS_1_F9372B523CCCB108_METHOD_1_B88F9C7C4F8C76A0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_834E1401D095937E(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F9372B523CCCB108_METHOD_1_834E1401D095937E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D56DEA62B31A822A(::RPG::Client::BattleBuffToastNotify* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BattleBuffToastNotify*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F9372B523CCCB108_METHOD_1_D56DEA62B31A822A_OFFSET))(this, a1, a2);
	}

	::Class_1_2AA304B71C6E8B6D* Method_1_D0B0CC1657916DF6(::RPG::Client::BattleBuffToastNotify* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::Class_1_2AA304B71C6E8B6D*(*)(::PVOID, ::RPG::Client::BattleBuffToastNotify*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F9372B523CCCB108_METHOD_1_D0B0CC1657916DF6_OFFSET))(this, a1, a2);
	}

	::Class_1_2AA304B71C6E8B6D* Method_1_499322337E6865CA(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::Class_1_2AA304B71C6E8B6D*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F9372B523CCCB108_METHOD_1_499322337E6865CA_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_1_C998BD122A05946B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F9372B523CCCB108_METHOD_1_C998BD122A05946B_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_997C7BBCC52A7BFD(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9372B523CCCB108_METHOD_1_997C7BBCC52A7BFD_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2 Method_1_910ED7AFF48C2F6E(::RPG::GameCore::GameEntity* a1, ::RPG::MVector3 a2, ::System::Boolean& a3)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::MVector3, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F9372B523CCCB108_METHOD_1_910ED7AFF48C2F6E_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_4E4A8E9B613BC2D7(::RPG::MVector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_F9372B523CCCB108_METHOD_1_4E4A8E9B613BC2D7_OFFSET))(this, a1);
	}
};
