#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_6659C5C004EC1381;
class Class_1_69D7459C7F6EC835;
class Class_1_95EEF67A826E14FF;
namespace RPG::Client { class BattleBuffToastNotify; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_0AA00011988F3B51_METHOD_1_3AE98C3365757E77_OFFSET UNITYSDK_OFFSET(0xA703530)
#define CLASS_1_0AA00011988F3B51_METHOD_1_499322337E6865CA_OFFSET UNITYSDK_OFFSET(0xA703070)
#define CLASS_1_0AA00011988F3B51_METHOD_1_4E4A8E9B613BC2D7_OFFSET UNITYSDK_OFFSET(0xA703AA0)
#define CLASS_1_0AA00011988F3B51_METHOD_1_834E1401D095937E_OFFSET UNITYSDK_OFFSET(0xA702FE0)
#define CLASS_1_0AA00011988F3B51_METHOD_1_8B2D1E7D3295AEAF_OFFSET UNITYSDK_OFFSET(0xA702E70)
#define CLASS_1_0AA00011988F3B51_METHOD_1_997C7BBCC52A7BFD_OFFSET UNITYSDK_OFFSET(0xA703840)
#define CLASS_1_0AA00011988F3B51_METHOD_1_B88F9C7C4F8C76A0_OFFSET UNITYSDK_OFFSET(0xA7031D0)
#define CLASS_1_0AA00011988F3B51_METHOD_1_C998BD122A05946B_OFFSET UNITYSDK_OFFSET(0xA703910)
#define CLASS_1_0AA00011988F3B51_METHOD_1_D0B0CC1657916DF6_OFFSET UNITYSDK_OFFSET(0xA7033F0)
#define CLASS_1_0AA00011988F3B51_METHOD_1_D56DEA62B31A822A_OFFSET UNITYSDK_OFFSET(0xA703360)
#define CLASS_1_0AA00011988F3B51__CTOR_OFFSET UNITYSDK_OFFSET(0xA703B50)

inline static constexpr unsigned int Class_1_0AA00011988F3B51_TypeDefinitionIndex = 66877;

class Class_1_0AA00011988F3B51 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::Class_1_6659C5C004EC1381* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AA00011988F3B51__CTOR_OFFSET))(this);
	}

	::Class_1_95EEF67A826E14FF* Method_1_8B2D1E7D3295AEAF(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_1_95EEF67A826E14FF*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_0AA00011988F3B51_METHOD_1_8B2D1E7D3295AEAF_OFFSET))(this, a1);
	}

	::Class_1_95EEF67A826E14FF* Method_1_B88F9C7C4F8C76A0(::RPG::Client::BattleBuffToastNotify* a1)
	{
		return ((::Class_1_95EEF67A826E14FF*(*)(::PVOID, ::RPG::Client::BattleBuffToastNotify*))((::PBYTE)hIl2Cpp + CLASS_1_0AA00011988F3B51_METHOD_1_B88F9C7C4F8C76A0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_834E1401D095937E(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_0AA00011988F3B51_METHOD_1_834E1401D095937E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D56DEA62B31A822A(::RPG::Client::BattleBuffToastNotify* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BattleBuffToastNotify*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_0AA00011988F3B51_METHOD_1_D56DEA62B31A822A_OFFSET))(this, a1, a2);
	}

	::Class_1_69D7459C7F6EC835* Method_1_D0B0CC1657916DF6(::RPG::Client::BattleBuffToastNotify* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::Class_1_69D7459C7F6EC835*(*)(::PVOID, ::RPG::Client::BattleBuffToastNotify*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_0AA00011988F3B51_METHOD_1_D0B0CC1657916DF6_OFFSET))(this, a1, a2);
	}

	::Class_1_69D7459C7F6EC835* Method_1_499322337E6865CA(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::Class_1_69D7459C7F6EC835*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_0AA00011988F3B51_METHOD_1_499322337E6865CA_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_1_C998BD122A05946B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_0AA00011988F3B51_METHOD_1_C998BD122A05946B_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_997C7BBCC52A7BFD(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0AA00011988F3B51_METHOD_1_997C7BBCC52A7BFD_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2 Method_1_3AE98C3365757E77(::RPG::GameCore::GameEntity* a1, ::RPG::MVector3 a2, ::System::Boolean& a3)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::MVector3, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_0AA00011988F3B51_METHOD_1_3AE98C3365757E77_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_4E4A8E9B613BC2D7(::RPG::MVector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_0AA00011988F3B51_METHOD_1_4E4A8E9B613BC2D7_OFFSET))(this, a1);
	}
};
