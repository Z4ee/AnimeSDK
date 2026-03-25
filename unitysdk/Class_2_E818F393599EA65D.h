#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ResetTargetListIndex; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E818F393599EA65D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1193AC20)
#define CLASS_2_E818F393599EA65D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1193AC60)
#define CLASS_2_E818F393599EA65D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1193AD50)
#define CLASS_2_E818F393599EA65D_TICK_OFFSET UNITYSDK_OFFSET(0x1193ADA0)
#define CLASS_2_E818F393599EA65D__CTOR_OFFSET UNITYSDK_OFFSET(0x1193AC10)

inline static constexpr unsigned int Class_2_E818F393599EA65D_TypeDefinitionIndex = 44291;

class Class_2_E818F393599EA65D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ResetTargetListIndex* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetTargetListIndex* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetTargetListIndex*))((::PBYTE)hIl2Cpp + CLASS_2_E818F393599EA65D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E818F393599EA65D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E818F393599EA65D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E818F393599EA65D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E818F393599EA65D_TICK_OFFSET))(this, a1);
	}
};
