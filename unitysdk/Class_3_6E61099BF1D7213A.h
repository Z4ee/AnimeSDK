#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvSetConfineFeatureParam; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6E61099BF1D7213A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x881BE00)
#define CLASS_3_6E61099BF1D7213A__CTOR_OFFSET UNITYSDK_OFFSET(0x881BDD0)

inline static constexpr unsigned int Class_3_6E61099BF1D7213A_TypeDefinitionIndex = 42506;

class Class_3_6E61099BF1D7213A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvSetConfineFeatureParam*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetConfineFeatureParam* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetConfineFeatureParam*))((::PBYTE)hIl2Cpp + CLASS_3_6E61099BF1D7213A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E61099BF1D7213A_ONTASKBEGIN_OFFSET))(this);
	}
};
