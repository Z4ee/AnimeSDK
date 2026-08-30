#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetSummonUnitTriggerEnable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5A073AE90CA36524_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B26D60)
#define CLASS_3_5A073AE90CA36524_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B26DA0)
#define CLASS_3_5A073AE90CA36524__CTOR_OFFSET UNITYSDK_OFFSET(0x15B26D30)

inline static constexpr unsigned int Class_3_5A073AE90CA36524_TypeDefinitionIndex = 58729;

class Class_3_5A073AE90CA36524 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetSummonUnitTriggerEnable*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetSummonUnitTriggerEnable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetSummonUnitTriggerEnable*))((::PBYTE)hIl2Cpp + CLASS_3_5A073AE90CA36524__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A073AE90CA36524_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A073AE90CA36524_ONTASKBEGIN_OFFSET))(this);
	}
};
