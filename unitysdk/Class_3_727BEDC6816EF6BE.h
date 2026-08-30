#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class EnableFieldEffectSoftZOffset; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_727BEDC6816EF6BE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17EA3320)
#define CLASS_3_727BEDC6816EF6BE__CTOR_OFFSET UNITYSDK_OFFSET(0x17EA32F0)

inline static constexpr unsigned int Class_3_727BEDC6816EF6BE_TypeDefinitionIndex = 55221;

class Class_3_727BEDC6816EF6BE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EnableFieldEffectSoftZOffset*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableFieldEffectSoftZOffset* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableFieldEffectSoftZOffset*))((::PBYTE)hIl2Cpp + CLASS_3_727BEDC6816EF6BE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_727BEDC6816EF6BE_ONTASKBEGIN_OFFSET))(this);
	}
};
