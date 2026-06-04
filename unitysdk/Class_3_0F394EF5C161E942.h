#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class StopAim; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0F394EF5C161E942_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13FFDC40)
#define CLASS_3_0F394EF5C161E942__CTOR_OFFSET UNITYSDK_OFFSET(0x13FFDC10)

inline static constexpr unsigned int Class_3_0F394EF5C161E942_TypeDefinitionIndex = 52221;

class Class_3_0F394EF5C161E942 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StopAim*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopAim* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopAim*))((::PBYTE)hIl2Cpp + CLASS_3_0F394EF5C161E942__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F394EF5C161E942_ONTASKBEGIN_OFFSET))(this);
	}
};
