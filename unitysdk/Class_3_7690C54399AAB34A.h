#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetCharacterVisibleInViewMode; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7690C54399AAB34A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x105F81E0)
#define CLASS_3_7690C54399AAB34A__CTOR_OFFSET UNITYSDK_OFFSET(0x105F81B0)

inline static constexpr unsigned int Class_3_7690C54399AAB34A_TypeDefinitionIndex = 47228;

class Class_3_7690C54399AAB34A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetCharacterVisibleInViewMode*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterVisibleInViewMode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterVisibleInViewMode*))((::PBYTE)hIl2Cpp + CLASS_3_7690C54399AAB34A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7690C54399AAB34A_ONTASKBEGIN_OFFSET))(this);
	}
};
