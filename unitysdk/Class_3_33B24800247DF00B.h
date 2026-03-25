#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropDestructReset; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_33B24800247DF00B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA453550)
#define CLASS_3_33B24800247DF00B__CTOR_OFFSET UNITYSDK_OFFSET(0xA453520)

inline static constexpr unsigned int Class_3_33B24800247DF00B_TypeDefinitionIndex = 43042;

class Class_3_33B24800247DF00B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropDestructReset*>
{
public:
	::RPG::GameCore::PropComponent* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropDestructReset* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropDestructReset*))((::PBYTE)hIl2Cpp + CLASS_3_33B24800247DF00B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_33B24800247DF00B_ONTASKBEGIN_OFFSET))(this);
	}
};
