#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SwitchPropSceneObjClickHintAttachPoint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A861D89AB9C90B1C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD162E50)
#define CLASS_3_A861D89AB9C90B1C__CTOR_OFFSET UNITYSDK_OFFSET(0xD162E20)

inline static constexpr unsigned int Class_3_A861D89AB9C90B1C_TypeDefinitionIndex = 43180;

class Class_3_A861D89AB9C90B1C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SwitchPropSceneObjClickHintAttachPoint*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchPropSceneObjClickHintAttachPoint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchPropSceneObjClickHintAttachPoint*))((::PBYTE)hIl2Cpp + CLASS_3_A861D89AB9C90B1C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A861D89AB9C90B1C_ONTASKBEGIN_OFFSET))(this);
	}
};
