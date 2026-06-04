#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RewindTimeRewindTargetInRange; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_08633E5E16E3C9FA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA52C420)
#define CLASS_3_08633E5E16E3C9FA__CTOR_OFFSET UNITYSDK_OFFSET(0xA52C3F0)

inline static constexpr unsigned int Class_3_08633E5E16E3C9FA_TypeDefinitionIndex = 49883;

class Class_3_08633E5E16E3C9FA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RewindTimeRewindTargetInRange*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RewindTimeRewindTargetInRange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RewindTimeRewindTargetInRange*))((::PBYTE)hIl2Cpp + CLASS_3_08633E5E16E3C9FA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08633E5E16E3C9FA_ONTASKBEGIN_OFFSET))(this);
	}
};
