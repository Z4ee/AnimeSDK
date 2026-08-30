#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class HideEffectAutoLayout; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_61E99E9996AEF798_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x188DCAD0)
#define CLASS_3_61E99E9996AEF798__CTOR_OFFSET UNITYSDK_OFFSET(0x188DCAA0)

inline static constexpr unsigned int Class_3_61E99E9996AEF798_TypeDefinitionIndex = 55298;

class Class_3_61E99E9996AEF798 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::HideEffectAutoLayout*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideEffectAutoLayout* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideEffectAutoLayout*))((::PBYTE)hIl2Cpp + CLASS_3_61E99E9996AEF798__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61E99E9996AEF798_ONTASKBEGIN_OFFSET))(this);
	}
};
