#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowPhaseUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0C8D8D57265BF3F1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x99E3A60)
#define CLASS_3_0C8D8D57265BF3F1__CTOR_OFFSET UNITYSDK_OFFSET(0x99E3A30)

inline static constexpr unsigned int Class_3_0C8D8D57265BF3F1_TypeDefinitionIndex = 38474;

class Class_3_0C8D8D57265BF3F1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowPhaseUI*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowPhaseUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowPhaseUI*))((::PBYTE)hIl2Cpp + CLASS_3_0C8D8D57265BF3F1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0C8D8D57265BF3F1_ONTASKBEGIN_OFFSET))(this);
	}
};
