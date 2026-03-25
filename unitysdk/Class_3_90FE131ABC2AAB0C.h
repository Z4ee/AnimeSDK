#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RefreshChangePhaseUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_90FE131ABC2AAB0C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1069DF10)
#define CLASS_3_90FE131ABC2AAB0C__CTOR_OFFSET UNITYSDK_OFFSET(0x1069DEE0)

inline static constexpr unsigned int Class_3_90FE131ABC2AAB0C_TypeDefinitionIndex = 44261;

class Class_3_90FE131ABC2AAB0C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RefreshChangePhaseUI*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RefreshChangePhaseUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RefreshChangePhaseUI*))((::PBYTE)hIl2Cpp + CLASS_3_90FE131ABC2AAB0C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90FE131ABC2AAB0C_ONTASKBEGIN_OFFSET))(this);
	}
};
