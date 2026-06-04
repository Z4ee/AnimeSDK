#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class ToggleScoreCounterShow; }

#define CLASS_3_AFB713D7EE3ACFA5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAAAEFF0)
#define CLASS_3_AFB713D7EE3ACFA5__CTOR_OFFSET UNITYSDK_OFFSET(0xAAAEFC0)

inline static constexpr unsigned int Class_3_AFB713D7EE3ACFA5_TypeDefinitionIndex = 44905;

class Class_3_AFB713D7EE3ACFA5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ToggleScoreCounterShow*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ToggleScoreCounterShow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ToggleScoreCounterShow*))((::PBYTE)hIl2Cpp + CLASS_3_AFB713D7EE3ACFA5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AFB713D7EE3ACFA5_ONTASKBEGIN_OFFSET))(this);
	}
};
