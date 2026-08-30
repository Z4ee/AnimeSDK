#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvGameplayTrackNpcInit; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CAB497F2C13379CB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC03A3E0)
#define CLASS_3_CAB497F2C13379CB__CTOR_OFFSET UNITYSDK_OFFSET(0xC03A3B0)

inline static constexpr unsigned int Class_3_CAB497F2C13379CB_TypeDefinitionIndex = 52654;

class Class_3_CAB497F2C13379CB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvGameplayTrackNpcInit*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvGameplayTrackNpcInit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvGameplayTrackNpcInit*))((::PBYTE)hIl2Cpp + CLASS_3_CAB497F2C13379CB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CAB497F2C13379CB_ONTASKBEGIN_OFFSET))(this);
	}
};
