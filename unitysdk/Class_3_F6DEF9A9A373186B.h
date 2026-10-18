#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvRegisterPet; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F6DEF9A9A373186B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDA28FE0)
#define CLASS_3_F6DEF9A9A373186B__CTOR_OFFSET UNITYSDK_OFFSET(0xDA28FB0)

inline static constexpr unsigned int Class_3_F6DEF9A9A373186B_TypeDefinitionIndex = 57884;

class Class_3_F6DEF9A9A373186B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvRegisterPet*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvRegisterPet* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvRegisterPet*))((::PBYTE)hIl2Cpp + CLASS_3_F6DEF9A9A373186B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F6DEF9A9A373186B_ONTASKBEGIN_OFFSET))(this);
	}
};
