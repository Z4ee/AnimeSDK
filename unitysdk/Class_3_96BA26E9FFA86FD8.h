#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetTrashSummonHUDState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_96BA26E9FFA86FD8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBADAA90)
#define CLASS_3_96BA26E9FFA86FD8__CTOR_OFFSET UNITYSDK_OFFSET(0xBADAA60)

inline static constexpr unsigned int Class_3_96BA26E9FFA86FD8_TypeDefinitionIndex = 44355;

class Class_3_96BA26E9FFA86FD8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetTrashSummonHUDState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTrashSummonHUDState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTrashSummonHUDState*))((::PBYTE)hIl2Cpp + CLASS_3_96BA26E9FFA86FD8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_96BA26E9FFA86FD8_ONTASKBEGIN_OFFSET))(this);
	}
};
