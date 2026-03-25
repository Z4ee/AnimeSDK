#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ModifySwitchHandControlParam; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A3CC8071CBF32017_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10AB1180)
#define CLASS_3_A3CC8071CBF32017__CTOR_OFFSET UNITYSDK_OFFSET(0x10AB1150)

inline static constexpr unsigned int Class_3_A3CC8071CBF32017_TypeDefinitionIndex = 42917;

class Class_3_A3CC8071CBF32017 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifySwitchHandControlParam*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifySwitchHandControlParam* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifySwitchHandControlParam*))((::PBYTE)hIl2Cpp + CLASS_3_A3CC8071CBF32017__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3CC8071CBF32017_ONTASKBEGIN_OFFSET))(this);
	}
};
