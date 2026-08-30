#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class StackAIUpperGroupForSpecified; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_37DABC2AD107B992_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A0B30D0)
#define CLASS_3_37DABC2AD107B992__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0B30A0)

inline static constexpr unsigned int Class_3_37DABC2AD107B992_TypeDefinitionIndex = 48074;

class Class_3_37DABC2AD107B992 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StackAIUpperGroupForSpecified*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackAIUpperGroupForSpecified* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackAIUpperGroupForSpecified*))((::PBYTE)hIl2Cpp + CLASS_3_37DABC2AD107B992__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37DABC2AD107B992_ONTASKBEGIN_OFFSET))(this);
	}
};
