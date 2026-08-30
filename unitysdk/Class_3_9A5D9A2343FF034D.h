#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class RoadRashGameAbility_SlamCast; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9A5D9A2343FF034D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17ACAE30)
#define CLASS_3_9A5D9A2343FF034D__CTOR_OFFSET UNITYSDK_OFFSET(0x17ACAE00)

inline static constexpr unsigned int Class_3_9A5D9A2343FF034D_TypeDefinitionIndex = 58557;

class Class_3_9A5D9A2343FF034D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::Client::RoadRashGameAbility_SlamCast*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameAbility_SlamCast* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameAbility_SlamCast*))((::PBYTE)hIl2Cpp + CLASS_3_9A5D9A2343FF034D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9A5D9A2343FF034D_ONTASKBEGIN_OFFSET))(this);
	}
};
