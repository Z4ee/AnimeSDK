#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowWaypointByProp; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_26D7B363682AE539_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x137B6C00)
#define CLASS_3_26D7B363682AE539__CTOR_OFFSET UNITYSDK_OFFSET(0x137B6BD0)

inline static constexpr unsigned int Class_3_26D7B363682AE539_TypeDefinitionIndex = 54852;

class Class_3_26D7B363682AE539 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowWaypointByProp*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowWaypointByProp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowWaypointByProp*))((::PBYTE)hIl2Cpp + CLASS_3_26D7B363682AE539__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26D7B363682AE539_ONTASKBEGIN_OFFSET))(this);
	}
};
