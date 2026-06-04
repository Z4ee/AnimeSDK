#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetEntityForceVisible; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0FF7F9C3DE458F9F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1445F6C0)
#define CLASS_3_0FF7F9C3DE458F9F__CTOR_OFFSET UNITYSDK_OFFSET(0x1445F690)

inline static constexpr unsigned int Class_3_0FF7F9C3DE458F9F_TypeDefinitionIndex = 52665;

class Class_3_0FF7F9C3DE458F9F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetEntityForceVisible*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEntityForceVisible* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEntityForceVisible*))((::PBYTE)hIl2Cpp + CLASS_3_0FF7F9C3DE458F9F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0FF7F9C3DE458F9F_ONTASKBEGIN_OFFSET))(this);
	}
};
