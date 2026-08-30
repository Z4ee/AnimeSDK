#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class EnableSpecificModifierSpecialMark; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E6E126F44F49CB32_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1522B4D0)
#define CLASS_3_E6E126F44F49CB32__CTOR_OFFSET UNITYSDK_OFFSET(0x1522B4A0)

inline static constexpr unsigned int Class_3_E6E126F44F49CB32_TypeDefinitionIndex = 48059;

class Class_3_E6E126F44F49CB32 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EnableSpecificModifierSpecialMark*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableSpecificModifierSpecialMark* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableSpecificModifierSpecialMark*))((::PBYTE)hIl2Cpp + CLASS_3_E6E126F44F49CB32__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E6E126F44F49CB32_ONTASKBEGIN_OFFSET))(this);
	}
};
