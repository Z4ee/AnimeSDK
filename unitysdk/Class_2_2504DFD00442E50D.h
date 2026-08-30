#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_0A6AEAAB98E550F1_3;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_2504DFD00442E50D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18B85D60)
#define CLASS_2_2504DFD00442E50D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18B85B40)
#define CLASS_2_2504DFD00442E50D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18B85C80)
#define CLASS_2_2504DFD00442E50D_TICK_OFFSET UNITYSDK_OFFSET(0x18B85DB0)
#define CLASS_2_2504DFD00442E50D__CTOR_OFFSET UNITYSDK_OFFSET(0x18B85AD0)

inline static constexpr unsigned int Class_2_2504DFD00442E50D_TypeDefinitionIndex = 58227;

class Class_2_2504DFD00442E50D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_0A6AEAAB98E550F1_3* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::Client::Stage* PKLNPNKEJOO; // 0x28
	::System::String* FKFFINDOLOJ; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_0A6AEAAB98E550F1_3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_0A6AEAAB98E550F1_3*))((::PBYTE)hIl2Cpp + CLASS_2_2504DFD00442E50D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2504DFD00442E50D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2504DFD00442E50D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2504DFD00442E50D_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2504DFD00442E50D_TICK_OFFSET))(this, a1);
	}
};
