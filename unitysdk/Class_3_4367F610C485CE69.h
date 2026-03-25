#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropUnloadHitBoxGroup; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4367F610C485CE69_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11963250)
#define CLASS_3_4367F610C485CE69__CTOR_OFFSET UNITYSDK_OFFSET(0x11963220)

inline static constexpr unsigned int Class_3_4367F610C485CE69_TypeDefinitionIndex = 47101;

class Class_3_4367F610C485CE69 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropUnloadHitBoxGroup*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropUnloadHitBoxGroup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropUnloadHitBoxGroup*))((::PBYTE)hIl2Cpp + CLASS_3_4367F610C485CE69__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4367F610C485CE69_ONTASKBEGIN_OFFSET))(this);
	}
};
