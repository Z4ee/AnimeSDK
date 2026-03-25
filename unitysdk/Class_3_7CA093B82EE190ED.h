#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetActionBarItemAnimatorTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7CA093B82EE190ED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x110CB100)
#define CLASS_3_7CA093B82EE190ED__CTOR_OFFSET UNITYSDK_OFFSET(0x110CB0D0)

inline static constexpr unsigned int Class_3_7CA093B82EE190ED_TypeDefinitionIndex = 38467;

class Class_3_7CA093B82EE190ED : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetActionBarItemAnimatorTrigger*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetActionBarItemAnimatorTrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetActionBarItemAnimatorTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_7CA093B82EE190ED__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7CA093B82EE190ED_ONTASKBEGIN_OFFSET))(this);
	}
};
