#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DestroyCurvePropGroupPuzzle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8DE8277C13AB9F8C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18C82860)
#define CLASS_3_8DE8277C13AB9F8C__CTOR_OFFSET UNITYSDK_OFFSET(0x18C82830)

inline static constexpr unsigned int Class_3_8DE8277C13AB9F8C_TypeDefinitionIndex = 55495;

class Class_3_8DE8277C13AB9F8C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DestroyCurvePropGroupPuzzle*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DestroyCurvePropGroupPuzzle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DestroyCurvePropGroupPuzzle*))((::PBYTE)hIl2Cpp + CLASS_3_8DE8277C13AB9F8C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DE8277C13AB9F8C_ONTASKBEGIN_OFFSET))(this);
	}
};
