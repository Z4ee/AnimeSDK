#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetIronTombInfinityHPUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_09D96AAA7805E5F2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDE4BD70)
#define CLASS_3_09D96AAA7805E5F2__CTOR_OFFSET UNITYSDK_OFFSET(0xDE4BD40)

inline static constexpr unsigned int Class_3_09D96AAA7805E5F2_TypeDefinitionIndex = 44465;

class Class_3_09D96AAA7805E5F2 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetIronTombInfinityHPUI*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetIronTombInfinityHPUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetIronTombInfinityHPUI*))((::PBYTE)hIl2Cpp + CLASS_3_09D96AAA7805E5F2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_09D96AAA7805E5F2_ONTASKBEGIN_OFFSET))(this);
	}
};
