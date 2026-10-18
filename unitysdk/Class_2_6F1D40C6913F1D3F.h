#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_FC1D173B0E9199B5_2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_6F1D40C6913F1D3F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB86DD10)
#define CLASS_2_6F1D40C6913F1D3F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB86DA80)
#define CLASS_2_6F1D40C6913F1D3F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB86DA30)
#define CLASS_2_6F1D40C6913F1D3F_TICK_OFFSET UNITYSDK_OFFSET(0xB86DCB0)
#define CLASS_2_6F1D40C6913F1D3F__CTOR_OFFSET UNITYSDK_OFFSET(0xB86DA20)
#define CLASS_2_6F1D40C6913F1D3F__ONTASKBEGIN_B__4_0_OFFSET UNITYSDK_OFFSET(0xB86DE10)

inline static constexpr unsigned int Class_2_6F1D40C6913F1D3F_TypeDefinitionIndex = 52313;

class Class_2_6F1D40C6913F1D3F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_FC1D173B0E9199B5_2* IGHAHBNLIJA; // 0x18
	::System::Boolean PPIGLCIEIIM; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FC1D173B0E9199B5_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FC1D173B0E9199B5_2*))((::PBYTE)hIl2Cpp + CLASS_2_6F1D40C6913F1D3F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F1D40C6913F1D3F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F1D40C6913F1D3F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6F1D40C6913F1D3F_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F1D40C6913F1D3F_DISPOSE_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__4_0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6F1D40C6913F1D3F__ONTASKBEGIN_B__4_0_OFFSET))(this, a1);
	}
};
