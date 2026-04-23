#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WriteCustomValueToStatistic; }

#define CLASS_3_4043354E662A7209_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1280F7E0)
#define CLASS_3_4043354E662A7209__CTOR_OFFSET UNITYSDK_OFFSET(0x1280F7B0)

inline static constexpr unsigned int Class_3_4043354E662A7209_TypeDefinitionIndex = 51465;

class Class_3_4043354E662A7209 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::WriteCustomValueToStatistic*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WriteCustomValueToStatistic* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WriteCustomValueToStatistic*))((::PBYTE)hIl2Cpp + CLASS_3_4043354E662A7209__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4043354E662A7209_ONTASKBEGIN_OFFSET))(this);
	}
};
