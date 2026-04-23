#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class MarblePauseGame; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1C00685FC587AC22_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12AB7440)
#define CLASS_3_1C00685FC587AC22__CTOR_OFFSET UNITYSDK_OFFSET(0x12AB7410)

inline static constexpr unsigned int Class_3_1C00685FC587AC22_TypeDefinitionIndex = 48286;

class Class_3_1C00685FC587AC22 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::MarblePauseGame*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MarblePauseGame* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MarblePauseGame*))((::PBYTE)hIl2Cpp + CLASS_3_1C00685FC587AC22__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C00685FC587AC22_ONTASKBEGIN_OFFSET))(this);
	}
};
