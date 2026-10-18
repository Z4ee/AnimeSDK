#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_44C514838B8BE92F;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_6F1D40C6913F1D3F_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x165BEFA0)
#define CLASS_2_6F1D40C6913F1D3F_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165BED40)
#define CLASS_2_6F1D40C6913F1D3F_1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x165BECF0)
#define CLASS_2_6F1D40C6913F1D3F_1_TICK_OFFSET UNITYSDK_OFFSET(0x165BEF40)
#define CLASS_2_6F1D40C6913F1D3F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x165BECE0)
#define CLASS_2_6F1D40C6913F1D3F_1__ONTASKBEGIN_B__4_0_OFFSET UNITYSDK_OFFSET(0x165BF0A0)

inline static constexpr unsigned int Class_2_6F1D40C6913F1D3F_1_TypeDefinitionIndex = 52314;

class Class_2_6F1D40C6913F1D3F_1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_44C514838B8BE92F* IGHAHBNLIJA; // 0x18
	::System::Boolean PPIGLCIEIIM; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_44C514838B8BE92F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_44C514838B8BE92F*))((::PBYTE)hIl2Cpp + CLASS_2_6F1D40C6913F1D3F_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F1D40C6913F1D3F_1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F1D40C6913F1D3F_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6F1D40C6913F1D3F_1_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F1D40C6913F1D3F_1_DISPOSE_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__4_0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6F1D40C6913F1D3F_1__ONTASKBEGIN_B__4_0_OFFSET))(this, a1);
	}
};
