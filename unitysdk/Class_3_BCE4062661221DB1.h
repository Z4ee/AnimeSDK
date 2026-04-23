#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetViewModeEnabled; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BCE4062661221DB1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9208730)
#define CLASS_3_BCE4062661221DB1__CTOR_OFFSET UNITYSDK_OFFSET(0x9208700)

inline static constexpr unsigned int Class_3_BCE4062661221DB1_TypeDefinitionIndex = 54015;

class Class_3_BCE4062661221DB1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetViewModeEnabled*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetViewModeEnabled* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetViewModeEnabled*))((::PBYTE)hIl2Cpp + CLASS_3_BCE4062661221DB1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BCE4062661221DB1_ONTASKBEGIN_OFFSET))(this);
	}
};
