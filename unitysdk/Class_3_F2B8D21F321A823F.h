#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ChessWaitSecond; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F2B8D21F321A823F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10B26690)
#define CLASS_3_F2B8D21F321A823F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10B26990)
#define CLASS_3_F2B8D21F321A823F_TICK_OFFSET UNITYSDK_OFFSET(0x10B267B0)
#define CLASS_3_F2B8D21F321A823F__CTOR_OFFSET UNITYSDK_OFFSET(0x10B26660)
#define CLASS_3_F2B8D21F321A823F___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10B269F0)
#define CLASS_3_F2B8D21F321A823F___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x10B269E0)

inline static constexpr unsigned int Class_3_F2B8D21F321A823F_TypeDefinitionIndex = 45210;

class Class_3_F2B8D21F321A823F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ChessWaitSecond*>
{
public:
	::System::Int32 Field_3_0; // 0x28
	::RPG::GameCore::FixPoint Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChessWaitSecond* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChessWaitSecond*))((::PBYTE)hIl2Cpp + CLASS_3_F2B8D21F321A823F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2B8D21F321A823F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F2B8D21F321A823F_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2B8D21F321A823F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F2B8D21F321A823F___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2B8D21F321A823F___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}
};
