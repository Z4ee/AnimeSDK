#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdventureTriggerFastRun; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CF1D94A91F1052FC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBAC0E30)
#define CLASS_3_CF1D94A91F1052FC__CTOR_OFFSET UNITYSDK_OFFSET(0xBAC0E00)

inline static constexpr unsigned int Class_3_CF1D94A91F1052FC_TypeDefinitionIndex = 53418;

class Class_3_CF1D94A91F1052FC : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdventureTriggerFastRun*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureTriggerFastRun* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureTriggerFastRun*))((::PBYTE)hIl2Cpp + CLASS_3_CF1D94A91F1052FC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CF1D94A91F1052FC_ONTASKBEGIN_OFFSET))(this);
	}
};
