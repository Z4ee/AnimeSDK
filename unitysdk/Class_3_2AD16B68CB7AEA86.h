#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetUseTemporaryLockTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2AD16B68CB7AEA86_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15176B90)
#define CLASS_3_2AD16B68CB7AEA86__CTOR_OFFSET UNITYSDK_OFFSET(0x15176B60)

inline static constexpr unsigned int Class_3_2AD16B68CB7AEA86_TypeDefinitionIndex = 53071;

class Class_3_2AD16B68CB7AEA86 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetUseTemporaryLockTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetUseTemporaryLockTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetUseTemporaryLockTarget*))((::PBYTE)hIl2Cpp + CLASS_3_2AD16B68CB7AEA86__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2AD16B68CB7AEA86_ONTASKBEGIN_OFFSET))(this);
	}
};
