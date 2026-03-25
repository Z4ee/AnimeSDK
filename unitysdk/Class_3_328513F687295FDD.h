#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PlayerForceWalk; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_328513F687295FDD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x119640E0)
#define CLASS_3_328513F687295FDD__CTOR_OFFSET UNITYSDK_OFFSET(0x119640B0)

inline static constexpr unsigned int Class_3_328513F687295FDD_TypeDefinitionIndex = 47027;

class Class_3_328513F687295FDD : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PlayerForceWalk*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayerForceWalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayerForceWalk*))((::PBYTE)hIl2Cpp + CLASS_3_328513F687295FDD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_328513F687295FDD_ONTASKBEGIN_OFFSET))(this);
	}
};
