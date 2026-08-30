#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SwitchPhotographDragMode; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_38032EFBC9AB4762_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1690FF40)
#define CLASS_3_38032EFBC9AB4762__CTOR_OFFSET UNITYSDK_OFFSET(0x1690FF10)

inline static constexpr unsigned int Class_3_38032EFBC9AB4762_TypeDefinitionIndex = 53580;

class Class_3_38032EFBC9AB4762 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SwitchPhotographDragMode*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchPhotographDragMode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchPhotographDragMode*))((::PBYTE)hIl2Cpp + CLASS_3_38032EFBC9AB4762__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38032EFBC9AB4762_ONTASKBEGIN_OFFSET))(this);
	}
};
