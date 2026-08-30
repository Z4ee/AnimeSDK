#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DamagePerformFinish; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_553B45D240052294_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159F4480)
#define CLASS_3_553B45D240052294__CTOR_OFFSET UNITYSDK_OFFSET(0x159F4450)

inline static constexpr unsigned int Class_3_553B45D240052294_TypeDefinitionIndex = 55193;

class Class_3_553B45D240052294 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DamagePerformFinish*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DamagePerformFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DamagePerformFinish*))((::PBYTE)hIl2Cpp + CLASS_3_553B45D240052294__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_553B45D240052294_ONTASKBEGIN_OFFSET))(this);
	}
};
