#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class BattleChangeAvatar_End; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9A11345DD0C2D5DE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x115344D0)
#define CLASS_3_9A11345DD0C2D5DE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11534510)
#define CLASS_3_9A11345DD0C2D5DE__CTOR_OFFSET UNITYSDK_OFFSET(0x115344A0)
#define CLASS_3_9A11345DD0C2D5DE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x115345A0)

inline static constexpr unsigned int Class_3_9A11345DD0C2D5DE_TypeDefinitionIndex = 43915;

class Class_3_9A11345DD0C2D5DE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::BattleChangeAvatar_End*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BattleChangeAvatar_End* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BattleChangeAvatar_End*))((::PBYTE)hIl2Cpp + CLASS_3_9A11345DD0C2D5DE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9A11345DD0C2D5DE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9A11345DD0C2D5DE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9A11345DD0C2D5DE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
