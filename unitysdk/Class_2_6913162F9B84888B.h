#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_29B23DDF98AF43AC.h"
#include "unitysdk/RPG/GameCore/AirlockEvent.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Transform; }

#define CLASS_2_6913162F9B84888B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD40E50)
#define CLASS_2_6913162F9B84888B_DOONENTER_OFFSET UNITYSDK_OFFSET(0xBD40EB0)
#define CLASS_2_6913162F9B84888B_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xBD41130)
#define CLASS_2_6913162F9B84888B_METHOD_2_6287030D53179AEE_OFFSET UNITYSDK_OFFSET(0xBD40FA0)
#define CLASS_2_6913162F9B84888B__CTOR_OFFSET UNITYSDK_OFFSET(0xBD40DD0)

inline static constexpr unsigned int Class_2_6913162F9B84888B_TypeDefinitionIndex = 57653;

class Class_2_6913162F9B84888B : public ::Class_1_29B23DDF98AF43AC
{
public:
	::UnityEngine::Transform* MMIPMDKKPNN; // 0x98
	::System::Action_2<::System::Int32, ::RPG::GameCore::AirlockEvent>* ILEMLGEGLCC; // 0xA0
	::UnityEngine::Transform* MELOKNOIJPA; // 0xA8
	::System::Boolean IBMOGFCHNBN; // 0xB0
	::System::Int32 KKPGNHCACEB; // 0xB4

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::UnityEngine::Transform* a3, ::UnityEngine::Transform* a4, ::System::Action_2<::System::Int32, ::RPG::GameCore::AirlockEvent>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Action_2<::System::Int32, ::RPG::GameCore::AirlockEvent>*))((::PBYTE)hIl2Cpp + CLASS_2_6913162F9B84888B__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6913162F9B84888B_DISPOSE_OFFSET))(this);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6913162F9B84888B_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_6913162F9B84888B_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_6287030D53179AEE(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_6913162F9B84888B_METHOD_2_6287030D53179AEE_OFFSET))(this, a1);
	}
};
