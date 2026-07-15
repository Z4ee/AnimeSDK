#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvNpcMoveTo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5426F2854D7B6728_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15854ED0)
#define CLASS_3_5426F2854D7B6728__CTOR_OFFSET UNITYSDK_OFFSET(0x15854EA0)

inline static constexpr unsigned int Class_3_5426F2854D7B6728_TypeDefinitionIndex = 50069;

class Class_3_5426F2854D7B6728 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvNpcMoveTo*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcMoveTo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcMoveTo*))((::PBYTE)hIl2Cpp + CLASS_3_5426F2854D7B6728__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5426F2854D7B6728_ONTASKBEGIN_OFFSET))(this);
	}
};
