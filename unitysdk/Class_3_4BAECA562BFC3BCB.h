#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RemoveFateHougu; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4BAECA562BFC3BCB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC0F2CA0)
#define CLASS_3_4BAECA562BFC3BCB__CTOR_OFFSET UNITYSDK_OFFSET(0xC0F2C70)

inline static constexpr unsigned int Class_3_4BAECA562BFC3BCB_TypeDefinitionIndex = 55507;

class Class_3_4BAECA562BFC3BCB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RemoveFateHougu*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveFateHougu* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveFateHougu*))((::PBYTE)hIl2Cpp + CLASS_3_4BAECA562BFC3BCB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4BAECA562BFC3BCB_ONTASKBEGIN_OFFSET))(this);
	}
};
