#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_BAA2904334E372FE;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_2504DFD00442E50D_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19C9E680)
#define CLASS_2_2504DFD00442E50D_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19C9E210)
#define CLASS_2_2504DFD00442E50D_1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19C9E590)
#define CLASS_2_2504DFD00442E50D_1_TICK_OFFSET UNITYSDK_OFFSET(0x19C9E6D0)
#define CLASS_2_2504DFD00442E50D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19C9E1A0)
#define CLASS_2_2504DFD00442E50D_1__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x19C9E730)

inline static constexpr unsigned int Class_2_2504DFD00442E50D_1_TypeDefinitionIndex = 58694;

class Class_2_2504DFD00442E50D_1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::Client::Stage* PKLNPNKEJOO; // 0x20
	::Class_3_BAA2904334E372FE* OFKGLJOAMLD; // 0x28
	::System::String* FKFFINDOLOJ; // 0x30

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
