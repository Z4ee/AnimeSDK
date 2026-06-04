#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvMonsterForbidSelect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_98582790B9567525_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x135567F0)
#define CLASS_3_98582790B9567525__CTOR_OFFSET UNITYSDK_OFFSET(0x135567C0)

inline static constexpr unsigned int Class_3_98582790B9567525_TypeDefinitionIndex = 54085;

class Class_3_98582790B9567525 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvMonsterForbidSelect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvMonsterForbidSelect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvMonsterForbidSelect*))((::PBYTE)hIl2Cpp + CLASS_3_98582790B9567525__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_98582790B9567525_ONTASKBEGIN_OFFSET))(this);
	}
};
