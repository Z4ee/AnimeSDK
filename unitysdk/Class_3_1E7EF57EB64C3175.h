#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class FormationMovePause; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1E7EF57EB64C3175_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x90107A0)
#define CLASS_3_1E7EF57EB64C3175__CTOR_OFFSET UNITYSDK_OFFSET(0x9010770)

inline static constexpr unsigned int Class_3_1E7EF57EB64C3175_TypeDefinitionIndex = 53616;

class Class_3_1E7EF57EB64C3175 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::FormationMovePause*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FormationMovePause* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FormationMovePause*))((::PBYTE)hIl2Cpp + CLASS_3_1E7EF57EB64C3175__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1E7EF57EB64C3175_ONTASKBEGIN_OFFSET))(this);
	}
};
