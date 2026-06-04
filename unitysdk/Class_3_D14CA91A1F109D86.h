#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class InfiniteWaveModifySummonProgress; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D14CA91A1F109D86_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13B42300)
#define CLASS_3_D14CA91A1F109D86__CTOR_OFFSET UNITYSDK_OFFSET(0x13B422D0)

inline static constexpr unsigned int Class_3_D14CA91A1F109D86_TypeDefinitionIndex = 51489;

class Class_3_D14CA91A1F109D86 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::InfiniteWaveModifySummonProgress*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InfiniteWaveModifySummonProgress* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InfiniteWaveModifySummonProgress*))((::PBYTE)hIl2Cpp + CLASS_3_D14CA91A1F109D86__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D14CA91A1F109D86_ONTASKBEGIN_OFFSET))(this);
	}
};
