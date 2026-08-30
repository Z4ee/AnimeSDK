#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GridFightShowTraitEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_09339AA27C17ED58_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB82C450)
#define CLASS_3_09339AA27C17ED58__CTOR_OFFSET UNITYSDK_OFFSET(0xB82C420)

inline static constexpr unsigned int Class_3_09339AA27C17ED58_TypeDefinitionIndex = 58300;

class Class_3_09339AA27C17ED58 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::GridFightShowTraitEffect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightShowTraitEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightShowTraitEffect*))((::PBYTE)hIl2Cpp + CLASS_3_09339AA27C17ED58__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_09339AA27C17ED58_ONTASKBEGIN_OFFSET))(this);
	}
};
