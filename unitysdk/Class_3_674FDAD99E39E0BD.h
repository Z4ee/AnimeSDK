#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class NotifyFarmUnlock; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_674FDAD99E39E0BD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A755010)
#define CLASS_3_674FDAD99E39E0BD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A754FE0)

inline static constexpr unsigned int Class_3_674FDAD99E39E0BD_TypeDefinitionIndex = 53308;

class Class_3_674FDAD99E39E0BD : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::NotifyFarmUnlock*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NotifyFarmUnlock* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NotifyFarmUnlock*))((::PBYTE)hIl2Cpp + CLASS_3_674FDAD99E39E0BD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_674FDAD99E39E0BD_ONTASKBEGIN_OFFSET))(this);
	}
};
