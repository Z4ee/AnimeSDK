#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PlayerForceRush; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9C323C29B3082064_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x195DD4A0)
#define CLASS_3_9C323C29B3082064__CTOR_OFFSET UNITYSDK_OFFSET(0x195DD470)

inline static constexpr unsigned int Class_3_9C323C29B3082064_TypeDefinitionIndex = 58438;

class Class_3_9C323C29B3082064 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PlayerForceRush*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayerForceRush* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayerForceRush*))((::PBYTE)hIl2Cpp + CLASS_3_9C323C29B3082064__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9C323C29B3082064_ONTASKBEGIN_OFFSET))(this);
	}
};
