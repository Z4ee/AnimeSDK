#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ChangeSkillUIDisplay; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E4DDA15E042FDEC6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19866760)
#define CLASS_3_E4DDA15E042FDEC6__CTOR_OFFSET UNITYSDK_OFFSET(0x19866730)

inline static constexpr unsigned int Class_3_E4DDA15E042FDEC6_TypeDefinitionIndex = 55137;

class Class_3_E4DDA15E042FDEC6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ChangeSkillUIDisplay*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeSkillUIDisplay* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeSkillUIDisplay*))((::PBYTE)hIl2Cpp + CLASS_3_E4DDA15E042FDEC6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E4DDA15E042FDEC6_ONTASKBEGIN_OFFSET))(this);
	}
};
