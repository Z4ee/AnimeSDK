#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class LockTargetHP; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B2F311E007B8D8AE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB855290)
#define CLASS_3_B2F311E007B8D8AE__CTOR_OFFSET UNITYSDK_OFFSET(0xB855260)

inline static constexpr unsigned int Class_3_B2F311E007B8D8AE_TypeDefinitionIndex = 55355;

class Class_3_B2F311E007B8D8AE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::LockTargetHP*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockTargetHP* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockTargetHP*))((::PBYTE)hIl2Cpp + CLASS_3_B2F311E007B8D8AE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B2F311E007B8D8AE_ONTASKBEGIN_OFFSET))(this);
	}
};
