#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RedirectActionDelayChange; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A8DBD935062589FE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9EEF6A0)
#define CLASS_3_A8DBD935062589FE__CTOR_OFFSET UNITYSDK_OFFSET(0x9EEF670)

inline static constexpr unsigned int Class_3_A8DBD935062589FE_TypeDefinitionIndex = 44258;

class Class_3_A8DBD935062589FE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RedirectActionDelayChange*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RedirectActionDelayChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RedirectActionDelayChange*))((::PBYTE)hIl2Cpp + CLASS_3_A8DBD935062589FE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8DBD935062589FE_ONTASKBEGIN_OFFSET))(this);
	}
};
