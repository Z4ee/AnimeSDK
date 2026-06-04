#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A696AB4980B3D7B5.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_5E8FC5A0679A5F9F_DOONENTER_OFFSET UNITYSDK_OFFSET(0xA524EF0)
#define CLASS_2_5E8FC5A0679A5F9F_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xA525090)
#define CLASS_2_5E8FC5A0679A5F9F__CTOR_OFFSET UNITYSDK_OFFSET(0xA524EB0)
#define CLASS_2_5E8FC5A0679A5F9F___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0xA525340)
#define CLASS_2_5E8FC5A0679A5F9F___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xA525350)

inline static constexpr unsigned int Class_2_5E8FC5A0679A5F9F_TypeDefinitionIndex = 53726;

class Class_2_5E8FC5A0679A5F9F : public ::Class_1_A696AB4980B3D7B5
{
public:
	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5E8FC5A0679A5F9F__CTOR_OFFSET))(this, a1);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5E8FC5A0679A5F9F_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_5E8FC5A0679A5F9F_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5E8FC5A0679A5F9F___IFIXBASEPROXY_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_5E8FC5A0679A5F9F___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, a1, a2);
	}
};
