#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvSetNpcAlertConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0CED2D30067A10A7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1849A810)
#define CLASS_3_0CED2D30067A10A7__CTOR_OFFSET UNITYSDK_OFFSET(0x1849A7E0)

inline static constexpr unsigned int Class_3_0CED2D30067A10A7_TypeDefinitionIndex = 52774;

class Class_3_0CED2D30067A10A7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvSetNpcAlertConfig*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetNpcAlertConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetNpcAlertConfig*))((::PBYTE)hIl2Cpp + CLASS_3_0CED2D30067A10A7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0CED2D30067A10A7_ONTASKBEGIN_OFFSET))(this);
	}
};
