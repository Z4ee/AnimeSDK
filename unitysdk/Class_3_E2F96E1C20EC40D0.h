#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialClose; }

#define CLASS_3_E2F96E1C20EC40D0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9B5100)
#define CLASS_3_E2F96E1C20EC40D0__CTOR_OFFSET UNITYSDK_OFFSET(0xB9B50D0)

inline static constexpr unsigned int Class_3_E2F96E1C20EC40D0_TypeDefinitionIndex = 58969;

class Class_3_E2F96E1C20EC40D0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TutorialClose*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialClose* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialClose*))((::PBYTE)hIl2Cpp + CLASS_3_E2F96E1C20EC40D0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2F96E1C20EC40D0_ONTASKBEGIN_OFFSET))(this);
	}
};
