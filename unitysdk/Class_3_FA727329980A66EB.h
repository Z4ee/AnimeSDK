#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetMuseumProjectorState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FA727329980A66EB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD3A13E0)
#define CLASS_3_FA727329980A66EB__CTOR_OFFSET UNITYSDK_OFFSET(0xD3A13B0)

inline static constexpr unsigned int Class_3_FA727329980A66EB_TypeDefinitionIndex = 49099;

class Class_3_FA727329980A66EB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetMuseumProjectorState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMuseumProjectorState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMuseumProjectorState*))((::PBYTE)hIl2Cpp + CLASS_3_FA727329980A66EB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA727329980A66EB_ONTASKBEGIN_OFFSET))(this);
	}
};
