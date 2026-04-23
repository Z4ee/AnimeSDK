#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_BAA2904334E372FE;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_2504DFD00442E50D_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x98FB090)
#define CLASS_2_2504DFD00442E50D_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x98FAD30)
#define CLASS_2_2504DFD00442E50D_1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x98FB010)
#define CLASS_2_2504DFD00442E50D_1_TICK_OFFSET UNITYSDK_OFFSET(0x98FB130)
#define CLASS_2_2504DFD00442E50D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x98FACC0)
#define CLASS_2_2504DFD00442E50D_1__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x98FB190)

inline static constexpr unsigned int Class_2_2504DFD00442E50D_1_TypeDefinitionIndex = 53972;

class Class_2_2504DFD00442E50D_1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_2; // 0x18
	::System::String* Field_2_1; // 0x20
	::RPG::Client::Stage* Field_2_0; // 0x28
	::Class_3_BAA2904334E372FE* Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_BAA2904334E372FE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_BAA2904334E372FE*))((::PBYTE)hIl2Cpp + CLASS_2_2504DFD00442E50D_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2504DFD00442E50D_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2504DFD00442E50D_1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2504DFD00442E50D_1_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2504DFD00442E50D_1_TICK_OFFSET))(this, a1);
	}

	::System::Void _OnTaskBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2504DFD00442E50D_1__ONTASKBEGIN_B__1_0_OFFSET))(this);
	}
};
