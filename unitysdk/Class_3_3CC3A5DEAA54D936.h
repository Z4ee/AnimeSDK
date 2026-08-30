#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ClearTargetTimeSlow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3CC3A5DEAA54D936_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x198EE850)
#define CLASS_3_3CC3A5DEAA54D936__CTOR_OFFSET UNITYSDK_OFFSET(0x198EE820)

inline static constexpr unsigned int Class_3_3CC3A5DEAA54D936_TypeDefinitionIndex = 55174;

class Class_3_3CC3A5DEAA54D936 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ClearTargetTimeSlow*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearTargetTimeSlow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearTargetTimeSlow*))((::PBYTE)hIl2Cpp + CLASS_3_3CC3A5DEAA54D936__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CC3A5DEAA54D936_ONTASKBEGIN_OFFSET))(this);
	}
};
