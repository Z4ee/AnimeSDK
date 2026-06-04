#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A696AB4980B3D7B5.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_66BB3A942E791D7B_DOONENTER_OFFSET UNITYSDK_OFFSET(0xAB42970)
#define CLASS_2_66BB3A942E791D7B_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xAB429E0)
#define CLASS_2_66BB3A942E791D7B__CTOR_OFFSET UNITYSDK_OFFSET(0xAB42920)
#define CLASS_2_66BB3A942E791D7B___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0xAB42A60)
#define CLASS_2_66BB3A942E791D7B___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xAB42A70)

inline static constexpr unsigned int Class_2_66BB3A942E791D7B_TypeDefinitionIndex = 53741;

class Class_2_66BB3A942E791D7B : public ::Class_1_A696AB4980B3D7B5
{
public:
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_2_0; // 0x98
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_2_1; // 0xA0

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Action_1<::RPG::GameCore::GameEntity*>* a2, ::System::Action_1<::RPG::GameCore::GameEntity*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_66BB3A942E791D7B__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_66BB3A942E791D7B_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_66BB3A942E791D7B_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_66BB3A942E791D7B___IFIXBASEPROXY_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_66BB3A942E791D7B___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, a1, a2);
	}
};
