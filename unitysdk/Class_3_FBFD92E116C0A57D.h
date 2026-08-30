#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdventureExtraMPCost; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FBFD92E116C0A57D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1997EE80)
#define CLASS_3_FBFD92E116C0A57D__CTOR_OFFSET UNITYSDK_OFFSET(0x1997EE50)

inline static constexpr unsigned int Class_3_FBFD92E116C0A57D_TypeDefinitionIndex = 58050;

class Class_3_FBFD92E116C0A57D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdventureExtraMPCost*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureExtraMPCost* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureExtraMPCost*))((::PBYTE)hIl2Cpp + CLASS_3_FBFD92E116C0A57D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBFD92E116C0A57D_ONTASKBEGIN_OFFSET))(this);
	}
};
