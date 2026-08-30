#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowBonusUIEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1D510A62874EF98D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFA6DDE0)
#define CLASS_2_1D510A62874EF98D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFA6DE80)
#define CLASS_2_1D510A62874EF98D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xFA6DFB0)
#define CLASS_2_1D510A62874EF98D_TICK_OFFSET UNITYSDK_OFFSET(0xFA6DE20)
#define CLASS_2_1D510A62874EF98D__CTOR_OFFSET UNITYSDK_OFFSET(0xFA6DDD0)

inline static constexpr unsigned int Class_2_1D510A62874EF98D_TypeDefinitionIndex = 58770;

class Class_2_1D510A62874EF98D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowBonusUIEffect* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::ShowBonusUIEffect* HAOKDAIPDIM; // 0x20
	::RPG::GameCore::TaskContext* OEGOIILHDOD; // 0x28

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
