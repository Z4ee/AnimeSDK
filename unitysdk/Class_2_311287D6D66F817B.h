#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::GameCore { class CakeRaceWaitDragPropByCatRank; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_311287D6D66F817B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A234F0)
#define CLASS_2_311287D6D66F817B_METHOD_2_51A08614E022B43D_OFFSET UNITYSDK_OFFSET(0x13A23960)
#define CLASS_2_311287D6D66F817B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A236D0)
#define CLASS_2_311287D6D66F817B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13A23B00)
#define CLASS_2_311287D6D66F817B_TICK_OFFSET UNITYSDK_OFFSET(0x13A23B50)
#define CLASS_2_311287D6D66F817B__CTOR_OFFSET UNITYSDK_OFFSET(0x13A234E0)
#define CLASS_2_311287D6D66F817B__ONTASKBEGIN_B__4_0_OFFSET UNITYSDK_OFFSET(0x13A23BB0)

inline static constexpr unsigned int Class_2_311287D6D66F817B_TypeDefinitionIndex = 49221;

class Class_2_311287D6D66F817B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::CakeRaceWaitDragPropByCatRank* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CakeRaceWaitDragPropByCatRank* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CakeRaceWaitDragPropByCatRank*))((::PBYTE)hIl2Cpp + CLASS_2_311287D6D66F817B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_311287D6D66F817B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_311287D6D66F817B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_311287D6D66F817B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_311287D6D66F817B_TICK_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_2_51A08614E022B43D(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_311287D6D66F817B_METHOD_2_51A08614E022B43D_OFFSET))(this, a1, a2);
	}

	::System::Void _OnTaskBegin_b__4_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_311287D6D66F817B__ONTASKBEGIN_B__4_0_OFFSET))(this);
	}
};
