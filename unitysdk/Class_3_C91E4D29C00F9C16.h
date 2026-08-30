#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdventureResumeTeamDataRefresh; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C91E4D29C00F9C16_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xBABFBB0)
#define CLASS_3_C91E4D29C00F9C16_ONSKIP_OFFSET UNITYSDK_OFFSET(0xBABFBC0)
#define CLASS_3_C91E4D29C00F9C16_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBABFB00)
#define CLASS_3_C91E4D29C00F9C16__CTOR_OFFSET UNITYSDK_OFFSET(0xBABFAD0)

inline static constexpr unsigned int Class_3_C91E4D29C00F9C16_TypeDefinitionIndex = 58064;

class Class_3_C91E4D29C00F9C16 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdventureResumeTeamDataRefresh*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureResumeTeamDataRefresh* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureResumeTeamDataRefresh*))((::PBYTE)hIl2Cpp + CLASS_3_C91E4D29C00F9C16__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C91E4D29C00F9C16_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C91E4D29C00F9C16_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C91E4D29C00F9C16_ONSKIP_OFFSET))(this);
	}
};
