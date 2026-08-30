#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class InitGridFightStatisticsBinding; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E34FE742AF64966D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC3EF510)
#define CLASS_3_E34FE742AF64966D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC3EF300)
#define CLASS_3_E34FE742AF64966D__CTOR_OFFSET UNITYSDK_OFFSET(0xC3EF200)

inline static constexpr unsigned int Class_3_E34FE742AF64966D_TypeDefinitionIndex = 55333;

class Class_3_E34FE742AF64966D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::InitGridFightStatisticsBinding*>
{
public:
	::Class_3_07C3C4D2990C49EE* JCLEENONPGI; // 0x28
	::Class_3_07C3C4D2990C49EE* KDMEBFOHHBM; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InitGridFightStatisticsBinding* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InitGridFightStatisticsBinding*))((::PBYTE)hIl2Cpp + CLASS_3_E34FE742AF64966D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E34FE742AF64966D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E34FE742AF64966D_DISPOSE_OFFSET))(this);
	}
};
