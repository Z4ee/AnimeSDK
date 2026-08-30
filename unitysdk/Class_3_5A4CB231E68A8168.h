#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByAttackTargetCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5A4CB231E68A8168_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5019E0)
#define CLASS_3_5A4CB231E68A8168__CTOR_OFFSET UNITYSDK_OFFSET(0xB501900)

inline static constexpr unsigned int Class_3_5A4CB231E68A8168_TypeDefinitionIndex = 55613;

class Class_3_5A4CB231E68A8168 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByAttackTargetCount*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByAttackTargetCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByAttackTargetCount*))((::PBYTE)hIl2Cpp + CLASS_3_5A4CB231E68A8168__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A4CB231E68A8168_ONTASKBEGIN_OFFSET))(this);
	}
};
