#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetupActionDelayLink; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8F56C6FE67967998_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17A7CAA0)
#define CLASS_3_8F56C6FE67967998__CTOR_OFFSET UNITYSDK_OFFSET(0x17A7CA70)

inline static constexpr unsigned int Class_3_8F56C6FE67967998_TypeDefinitionIndex = 55790;

class Class_3_8F56C6FE67967998 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetupActionDelayLink*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetupActionDelayLink* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetupActionDelayLink*))((::PBYTE)hIl2Cpp + CLASS_3_8F56C6FE67967998__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F56C6FE67967998_ONTASKBEGIN_OFFSET))(this);
	}
};
