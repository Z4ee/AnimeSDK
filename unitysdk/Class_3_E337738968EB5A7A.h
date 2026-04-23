#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RebuildTimeRewindEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E337738968EB5A7A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1183C9D0)
#define CLASS_3_E337738968EB5A7A__CTOR_OFFSET UNITYSDK_OFFSET(0x1183C9A0)

inline static constexpr unsigned int Class_3_E337738968EB5A7A_TypeDefinitionIndex = 49212;

class Class_3_E337738968EB5A7A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RebuildTimeRewindEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RebuildTimeRewindEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RebuildTimeRewindEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E337738968EB5A7A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E337738968EB5A7A_ONTASKBEGIN_OFFSET))(this);
	}
};
