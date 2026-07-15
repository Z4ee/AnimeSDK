#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DestroyPropTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1B5EB25CDA780EB2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x171D11C0)
#define CLASS_3_1B5EB25CDA780EB2__CTOR_OFFSET UNITYSDK_OFFSET(0x171D1190)

inline static constexpr unsigned int Class_3_1B5EB25CDA780EB2_TypeDefinitionIndex = 55499;

class Class_3_1B5EB25CDA780EB2 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DestroyPropTrigger*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DestroyPropTrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DestroyPropTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_1B5EB25CDA780EB2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1B5EB25CDA780EB2_ONTASKBEGIN_OFFSET))(this);
	}
};
