#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class EnableAdvEntityDitherWithPlayer; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CE4D71D2F0B22439_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x90BED20)
#define CLASS_3_CE4D71D2F0B22439_ONSKIP_OFFSET UNITYSDK_OFFSET(0x90BED30)
#define CLASS_3_CE4D71D2F0B22439_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x90BEC10)
#define CLASS_3_CE4D71D2F0B22439__CTOR_OFFSET UNITYSDK_OFFSET(0x90BEBE0)

inline static constexpr unsigned int Class_3_CE4D71D2F0B22439_TypeDefinitionIndex = 48672;

class Class_3_CE4D71D2F0B22439 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EnableAdvEntityDitherWithPlayer*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableAdvEntityDitherWithPlayer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableAdvEntityDitherWithPlayer*))((::PBYTE)hIl2Cpp + CLASS_3_CE4D71D2F0B22439__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CE4D71D2F0B22439_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CE4D71D2F0B22439_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CE4D71D2F0B22439_ONSKIP_OFFSET))(this);
	}
};
