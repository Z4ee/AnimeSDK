#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvCharacterFindChest; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_48535FF8F7F07634_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17F7C8E0)
#define CLASS_3_48535FF8F7F07634__CTOR_OFFSET UNITYSDK_OFFSET(0x17F7C8B0)

inline static constexpr unsigned int Class_3_48535FF8F7F07634_TypeDefinitionIndex = 49951;

class Class_3_48535FF8F7F07634 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvCharacterFindChest*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvCharacterFindChest* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvCharacterFindChest*))((::PBYTE)hIl2Cpp + CLASS_3_48535FF8F7F07634__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_48535FF8F7F07634_ONTASKBEGIN_OFFSET))(this);
	}
};
