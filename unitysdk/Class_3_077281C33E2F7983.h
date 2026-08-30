#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class ToggleTotalDamageFinishNotify; }

#define CLASS_3_077281C33E2F7983_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17917010)
#define CLASS_3_077281C33E2F7983__CTOR_OFFSET UNITYSDK_OFFSET(0x17916FE0)

inline static constexpr unsigned int Class_3_077281C33E2F7983_TypeDefinitionIndex = 55898;

class Class_3_077281C33E2F7983 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ToggleTotalDamageFinishNotify*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ToggleTotalDamageFinishNotify* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ToggleTotalDamageFinishNotify*))((::PBYTE)hIl2Cpp + CLASS_3_077281C33E2F7983__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_077281C33E2F7983_ONTASKBEGIN_OFFSET))(this);
	}
};
