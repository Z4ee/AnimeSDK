#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_87854DF4F09D42E1.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_66BB3A942E791D7B_DOONENTER_OFFSET UNITYSDK_OFFSET(0x8D7CC60)
#define CLASS_2_66BB3A942E791D7B_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x8D7CCD0)
#define CLASS_2_66BB3A942E791D7B__CTOR_OFFSET UNITYSDK_OFFSET(0x8D7CC10)
#define CLASS_2_66BB3A942E791D7B___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0x8D7CD40)
#define CLASS_2_66BB3A942E791D7B___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x8D7CD50)

inline static constexpr unsigned int Class_2_66BB3A942E791D7B_TypeDefinitionIndex = 46356;

class Class_2_66BB3A942E791D7B : public ::Class_1_87854DF4F09D42E1
{
public:
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_2_1; // 0x98
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_2_0; // 0xA0

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

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_66BB3A942E791D7B___IFIXBASEPROXY_DOONENTER_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TriggerExitReason P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_66BB3A942E791D7B___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, P0, P1);
	}
};
