#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class CloseRubbingUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_80BAB51DACF58B45_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCD1BA10)
#define CLASS_3_80BAB51DACF58B45__CTOR_OFFSET UNITYSDK_OFFSET(0xCD1B9E0)

inline static constexpr unsigned int Class_3_80BAB51DACF58B45_TypeDefinitionIndex = 48629;

class Class_3_80BAB51DACF58B45 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CloseRubbingUI*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CloseRubbingUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CloseRubbingUI*))((::PBYTE)hIl2Cpp + CLASS_3_80BAB51DACF58B45__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_80BAB51DACF58B45_ONTASKBEGIN_OFFSET))(this);
	}
};
