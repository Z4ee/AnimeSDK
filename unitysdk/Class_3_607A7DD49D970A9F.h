#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvLockSpecialTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_607A7DD49D970A9F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19ADB1A0)
#define CLASS_3_607A7DD49D970A9F__CTOR_OFFSET UNITYSDK_OFFSET(0x19ADB170)

inline static constexpr unsigned int Class_3_607A7DD49D970A9F_TypeDefinitionIndex = 52666;

class Class_3_607A7DD49D970A9F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvLockSpecialTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvLockSpecialTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvLockSpecialTarget*))((::PBYTE)hIl2Cpp + CLASS_3_607A7DD49D970A9F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_607A7DD49D970A9F_ONTASKBEGIN_OFFSET))(this);
	}
};
