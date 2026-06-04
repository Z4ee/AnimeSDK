#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowBonusUIEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1D510A62874EF98D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDE5B130)
#define CLASS_2_1D510A62874EF98D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDE5B1D0)
#define CLASS_2_1D510A62874EF98D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDE5B330)
#define CLASS_2_1D510A62874EF98D_TICK_OFFSET UNITYSDK_OFFSET(0xDE5B170)
#define CLASS_2_1D510A62874EF98D__CTOR_OFFSET UNITYSDK_OFFSET(0xDE5B120)

inline static constexpr unsigned int Class_2_1D510A62874EF98D_TypeDefinitionIndex = 54768;

class Class_2_1D510A62874EF98D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::ShowBonusUIEffect* Field_2_1; // 0x20
	::RPG::GameCore::ShowBonusUIEffect* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBonusUIEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBonusUIEffect*))((::PBYTE)hIl2Cpp + CLASS_2_1D510A62874EF98D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D510A62874EF98D_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1D510A62874EF98D_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D510A62874EF98D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D510A62874EF98D_ONTASKRESET_OFFSET))(this);
	}
};
