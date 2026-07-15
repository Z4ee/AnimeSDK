#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class HideEntityInActionBarByDelay; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CBB55BF5CC57B202_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x179C97E0)
#define CLASS_3_CBB55BF5CC57B202__CTOR_OFFSET UNITYSDK_OFFSET(0x179C97B0)

inline static constexpr unsigned int Class_3_CBB55BF5CC57B202_TypeDefinitionIndex = 52602;

class Class_3_CBB55BF5CC57B202 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::HideEntityInActionBarByDelay*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideEntityInActionBarByDelay* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideEntityInActionBarByDelay*))((::PBYTE)hIl2Cpp + CLASS_3_CBB55BF5CC57B202__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CBB55BF5CC57B202_ONTASKBEGIN_OFFSET))(this);
	}
};
