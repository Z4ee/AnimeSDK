#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowHintEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1172AC0FAD3B4A1D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17EBDD90)
#define CLASS_2_1172AC0FAD3B4A1D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17EBDEB0)
#define CLASS_2_1172AC0FAD3B4A1D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17EBDDE0)
#define CLASS_2_1172AC0FAD3B4A1D_TICK_OFFSET UNITYSDK_OFFSET(0x17EBE3E0)
#define CLASS_2_1172AC0FAD3B4A1D__CTOR_OFFSET UNITYSDK_OFFSET(0x17EBDD80)

inline static constexpr unsigned int Class_2_1172AC0FAD3B4A1D_TypeDefinitionIndex = 53532;

class Class_2_1172AC0FAD3B4A1D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowHintEffect* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::System::UInt32 JGGDKOCIEGH; // 0x28
	::System::UInt32 PEEFHNHDBMF; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowHintEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowHintEffect*))((::PBYTE)hIl2Cpp + CLASS_2_1172AC0FAD3B4A1D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1172AC0FAD3B4A1D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1172AC0FAD3B4A1D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1172AC0FAD3B4A1D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1172AC0FAD3B4A1D_TICK_OFFSET))(this, a1);
	}
};
