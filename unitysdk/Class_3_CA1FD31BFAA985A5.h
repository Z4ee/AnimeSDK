#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class NotifyVersusBarQuestChange; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CA1FD31BFAA985A5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8D75450)
#define CLASS_3_CA1FD31BFAA985A5__CTOR_OFFSET UNITYSDK_OFFSET(0x8D75420)

inline static constexpr unsigned int Class_3_CA1FD31BFAA985A5_TypeDefinitionIndex = 44709;

class Class_3_CA1FD31BFAA985A5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::NotifyVersusBarQuestChange*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NotifyVersusBarQuestChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NotifyVersusBarQuestChange*))((::PBYTE)hIl2Cpp + CLASS_3_CA1FD31BFAA985A5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA1FD31BFAA985A5_ONTASKBEGIN_OFFSET))(this);
	}
};
