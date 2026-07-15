#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetEffectAnimatorTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F4188061251DC3EB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15DF8760)
#define CLASS_3_F4188061251DC3EB__CTOR_OFFSET UNITYSDK_OFFSET(0x15DF8730)

inline static constexpr unsigned int Class_3_F4188061251DC3EB_TypeDefinitionIndex = 52977;

class Class_3_F4188061251DC3EB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetEffectAnimatorTrigger*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEffectAnimatorTrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEffectAnimatorTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_F4188061251DC3EB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F4188061251DC3EB_ONTASKBEGIN_OFFSET))(this);
	}
};
