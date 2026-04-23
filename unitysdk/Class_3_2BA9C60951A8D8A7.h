#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class BreakMunicipalChat; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2BA9C60951A8D8A7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x119E7C60)
#define CLASS_3_2BA9C60951A8D8A7__CTOR_OFFSET UNITYSDK_OFFSET(0x119E7C30)

inline static constexpr unsigned int Class_3_2BA9C60951A8D8A7_TypeDefinitionIndex = 53447;

class Class_3_2BA9C60951A8D8A7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::BreakMunicipalChat*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BreakMunicipalChat* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BreakMunicipalChat*))((::PBYTE)hIl2Cpp + CLASS_3_2BA9C60951A8D8A7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2BA9C60951A8D8A7_ONTASKBEGIN_OFFSET))(this);
	}
};
