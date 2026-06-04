#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CakeRaceWaitFinishLineTip; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_90D8EF9D3ECCDD4C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA537B90)
#define CLASS_2_90D8EF9D3ECCDD4C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA537D50)
#define CLASS_2_90D8EF9D3ECCDD4C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA537FA0)
#define CLASS_2_90D8EF9D3ECCDD4C_TICK_OFFSET UNITYSDK_OFFSET(0xA537FF0)
#define CLASS_2_90D8EF9D3ECCDD4C__CTOR_OFFSET UNITYSDK_OFFSET(0xA537B80)
#define CLASS_2_90D8EF9D3ECCDD4C__ONTASKBEGIN_B__4_0_OFFSET UNITYSDK_OFFSET(0xA538050)

inline static constexpr unsigned int Class_2_90D8EF9D3ECCDD4C_TypeDefinitionIndex = 49217;

class Class_2_90D8EF9D3ECCDD4C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::CakeRaceWaitFinishLineTip* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CakeRaceWaitFinishLineTip* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CakeRaceWaitFinishLineTip*))((::PBYTE)hIl2Cpp + CLASS_2_90D8EF9D3ECCDD4C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90D8EF9D3ECCDD4C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90D8EF9D3ECCDD4C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90D8EF9D3ECCDD4C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_90D8EF9D3ECCDD4C_TICK_OFFSET))(this, a1);
	}

	::System::Void _OnTaskBegin_b__4_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90D8EF9D3ECCDD4C__ONTASKBEGIN_B__4_0_OFFSET))(this);
	}
};
