#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class EnterTrainPartyGame; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A7AF6C274117FF31_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x176172E0)
#define CLASS_3_A7AF6C274117FF31__CTOR_OFFSET UNITYSDK_OFFSET(0x176172B0)

inline static constexpr unsigned int Class_3_A7AF6C274117FF31_TypeDefinitionIndex = 50987;

class Class_3_A7AF6C274117FF31 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EnterTrainPartyGame*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnterTrainPartyGame* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnterTrainPartyGame*))((::PBYTE)hIl2Cpp + CLASS_3_A7AF6C274117FF31__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A7AF6C274117FF31_ONTASKBEGIN_OFFSET))(this);
	}
};
