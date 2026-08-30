#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class HideFieldEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_09D7E82A69ED6001_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AAC7E0)
#define CLASS_3_09D7E82A69ED6001__CTOR_OFFSET UNITYSDK_OFFSET(0x15AAC7B0)

inline static constexpr unsigned int Class_3_09D7E82A69ED6001_TypeDefinitionIndex = 55304;

class Class_3_09D7E82A69ED6001 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::HideFieldEffect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideFieldEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideFieldEffect*))((::PBYTE)hIl2Cpp + CLASS_3_09D7E82A69ED6001__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_09D7E82A69ED6001_ONTASKBEGIN_OFFSET))(this);
	}
};
