#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_EF828F207E6BAF2B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialWaitCustomString; }

#define CLASS_3_34C4F2B1AD5C75EF__CTOR_OFFSET UNITYSDK_OFFSET(0x153A61F0)

inline static constexpr unsigned int Class_3_34C4F2B1AD5C75EF_TypeDefinitionIndex = 58981;

class Class_3_34C4F2B1AD5C75EF : public ::Class_2_EF828F207E6BAF2B
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialWaitCustomString* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialWaitCustomString*))((::PBYTE)hIl2Cpp + CLASS_3_34C4F2B1AD5C75EF__CTOR_OFFSET))(this, a1, a2);
	}
};
