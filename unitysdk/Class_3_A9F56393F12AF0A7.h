#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PlayVideoSequence; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A9F56393F12AF0A7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAF228A0)
#define CLASS_3_A9F56393F12AF0A7__CTOR_OFFSET UNITYSDK_OFFSET(0xAF22870)

inline static constexpr unsigned int Class_3_A9F56393F12AF0A7_TypeDefinitionIndex = 49627;

class Class_3_A9F56393F12AF0A7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PlayVideoSequence*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayVideoSequence* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayVideoSequence*))((::PBYTE)hIl2Cpp + CLASS_3_A9F56393F12AF0A7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A9F56393F12AF0A7_ONTASKBEGIN_OFFSET))(this);
	}
};
