#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class BoomRobotGameplayBoomEnd; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_31A98517AE61DC77_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x128A6460)
#define CLASS_3_31A98517AE61DC77__CTOR_OFFSET UNITYSDK_OFFSET(0x128A6430)

inline static constexpr unsigned int Class_3_31A98517AE61DC77_TypeDefinitionIndex = 48509;

class Class_3_31A98517AE61DC77 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::BoomRobotGameplayBoomEnd*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BoomRobotGameplayBoomEnd* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BoomRobotGameplayBoomEnd*))((::PBYTE)hIl2Cpp + CLASS_3_31A98517AE61DC77__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_31A98517AE61DC77_ONTASKBEGIN_OFFSET))(this);
	}
};
