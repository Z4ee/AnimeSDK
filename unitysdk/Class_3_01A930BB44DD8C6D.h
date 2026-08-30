#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ConvincePanelActive; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_01A930BB44DD8C6D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBB3F20)
#define CLASS_3_01A930BB44DD8C6D__CTOR_OFFSET UNITYSDK_OFFSET(0xBBB3EF0)

inline static constexpr unsigned int Class_3_01A930BB44DD8C6D_TypeDefinitionIndex = 52984;

class Class_3_01A930BB44DD8C6D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ConvincePanelActive*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConvincePanelActive* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConvincePanelActive*))((::PBYTE)hIl2Cpp + CLASS_3_01A930BB44DD8C6D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_01A930BB44DD8C6D_ONTASKBEGIN_OFFSET))(this);
	}
};
