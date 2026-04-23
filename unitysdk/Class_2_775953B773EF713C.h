#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_59305B446B42427E.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }

#define CLASS_2_775953B773EF713C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9702280)
#define CLASS_2_775953B773EF713C_DOONENTER_OFFSET UNITYSDK_OFFSET(0x97022D0)
#define CLASS_2_775953B773EF713C_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x9702330)
#define CLASS_2_775953B773EF713C__CTOR_OFFSET UNITYSDK_OFFSET(0x97021E0)
#define CLASS_2_775953B773EF713C___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x97023A0)
#define CLASS_2_775953B773EF713C___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0x97023B0)
#define CLASS_2_775953B773EF713C___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x97023C0)

inline static constexpr unsigned int Class_2_775953B773EF713C_TypeDefinitionIndex = 52989;

class Class_2_775953B773EF713C : public ::Class_1_59305B446B42427E
{
public:
	::System::Action* Field_2_0; // 0x98
	::System::Action* Field_2_1; // 0xA0

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_775953B773EF713C__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_775953B773EF713C_DISPOSE_OFFSET))(this);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_775953B773EF713C_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_775953B773EF713C_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_775953B773EF713C___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_775953B773EF713C___IFIXBASEPROXY_DOONENTER_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TriggerExitReason P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_775953B773EF713C___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, P0, P1);
	}
};
