#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GlobalVisibilityControl; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7550C286F3FAF2E1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16B641A0)
#define CLASS_3_7550C286F3FAF2E1__CTOR_OFFSET UNITYSDK_OFFSET(0x16B64170)

inline static constexpr unsigned int Class_3_7550C286F3FAF2E1_TypeDefinitionIndex = 55290;

class Class_3_7550C286F3FAF2E1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::GlobalVisibilityControl*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GlobalVisibilityControl* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GlobalVisibilityControl*))((::PBYTE)hIl2Cpp + CLASS_3_7550C286F3FAF2E1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7550C286F3FAF2E1_ONTASKBEGIN_OFFSET))(this);
	}
};
