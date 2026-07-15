#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class EnableAdvEntityIgnoreAirshipCarCollision; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7F446D5E0F98E6BD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17F85A60)
#define CLASS_3_7F446D5E0F98E6BD__CTOR_OFFSET UNITYSDK_OFFSET(0x17F85A30)

inline static constexpr unsigned int Class_3_7F446D5E0F98E6BD_TypeDefinitionIndex = 50353;

class Class_3_7F446D5E0F98E6BD : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EnableAdvEntityIgnoreAirshipCarCollision*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableAdvEntityIgnoreAirshipCarCollision* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableAdvEntityIgnoreAirshipCarCollision*))((::PBYTE)hIl2Cpp + CLASS_3_7F446D5E0F98E6BD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7F446D5E0F98E6BD_ONTASKBEGIN_OFFSET))(this);
	}
};
