#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowHintEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1172AC0FAD3B4A1D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12813760)
#define CLASS_2_1172AC0FAD3B4A1D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12813880)
#define CLASS_2_1172AC0FAD3B4A1D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x128137B0)
#define CLASS_2_1172AC0FAD3B4A1D_TICK_OFFSET UNITYSDK_OFFSET(0x12813BD0)
#define CLASS_2_1172AC0FAD3B4A1D__CTOR_OFFSET UNITYSDK_OFFSET(0x12813750)

inline static constexpr unsigned int Class_2_1172AC0FAD3B4A1D_TypeDefinitionIndex = 49127;

class Class_2_1172AC0FAD3B4A1D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowHintEffect* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20
	::System::UInt32 Field_2_3; // 0x28
	::System::UInt32 Field_2_2; // 0x2C

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
