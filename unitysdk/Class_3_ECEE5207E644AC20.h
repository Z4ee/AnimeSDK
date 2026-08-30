#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class OverrideMonsterRankScore; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_ECEE5207E644AC20_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A7BC0E0)
#define CLASS_3_ECEE5207E644AC20__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7BC0B0)

inline static constexpr unsigned int Class_3_ECEE5207E644AC20_TypeDefinitionIndex = 55442;

class Class_3_ECEE5207E644AC20 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::OverrideMonsterRankScore*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideMonsterRankScore* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideMonsterRankScore*))((::PBYTE)hIl2Cpp + CLASS_3_ECEE5207E644AC20__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ECEE5207E644AC20_ONTASKBEGIN_OFFSET))(this);
	}
};
