#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ChangeDynamicOptionalBlock; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_65AC11E9A625BC12_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13813EB0)
#define CLASS_3_65AC11E9A625BC12__CTOR_OFFSET UNITYSDK_OFFSET(0x13813E80)

inline static constexpr unsigned int Class_3_65AC11E9A625BC12_TypeDefinitionIndex = 49234;

class Class_3_65AC11E9A625BC12 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ChangeDynamicOptionalBlock*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeDynamicOptionalBlock* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeDynamicOptionalBlock*))((::PBYTE)hIl2Cpp + CLASS_3_65AC11E9A625BC12__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65AC11E9A625BC12_ONTASKBEGIN_OFFSET))(this);
	}
};
