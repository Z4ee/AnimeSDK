#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetOverrideColliderCamera; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_508E9872B5E4711B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x124E7850)
#define CLASS_3_508E9872B5E4711B__CTOR_OFFSET UNITYSDK_OFFSET(0x124E7820)

inline static constexpr unsigned int Class_3_508E9872B5E4711B_TypeDefinitionIndex = 51218;

class Class_3_508E9872B5E4711B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetOverrideColliderCamera*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetOverrideColliderCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetOverrideColliderCamera*))((::PBYTE)hIl2Cpp + CLASS_3_508E9872B5E4711B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_508E9872B5E4711B_ONTASKBEGIN_OFFSET))(this);
	}
};
