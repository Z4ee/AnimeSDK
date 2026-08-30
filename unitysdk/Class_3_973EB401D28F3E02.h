#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AddReShaEasterEggMatchRule; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_973EB401D28F3E02_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7727B0)
#define CLASS_3_973EB401D28F3E02__CTOR_OFFSET UNITYSDK_OFFSET(0xB772780)

inline static constexpr unsigned int Class_3_973EB401D28F3E02_TypeDefinitionIndex = 52600;

class Class_3_973EB401D28F3E02 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AddReShaEasterEggMatchRule*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddReShaEasterEggMatchRule* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddReShaEasterEggMatchRule*))((::PBYTE)hIl2Cpp + CLASS_3_973EB401D28F3E02__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_973EB401D28F3E02_ONTASKBEGIN_OFFSET))(this);
	}
};
