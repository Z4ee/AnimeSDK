#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_5436AF4270279182;
class Class_4_E78A58126E449419;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_957448EA02188F04_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17CC7F90)
#define CLASS_3_957448EA02188F04_1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17CC8030)
#define CLASS_3_957448EA02188F04_1_TICK_OFFSET UNITYSDK_OFFSET(0x17CC8080)
#define CLASS_3_957448EA02188F04_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17CC7F60)

inline static constexpr unsigned int Class_3_957448EA02188F04_1_TypeDefinitionIndex = 52429;

class Class_3_957448EA02188F04_1 : public ::RPG::GameCore::ST_Task_1<::Class_4_E78A58126E449419*>
{
public:
	::Class_2_5436AF4270279182* DPOJGPNDPMD; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_E78A58126E449419* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_E78A58126E449419*))((::PBYTE)hIl2Cpp + CLASS_3_957448EA02188F04_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_957448EA02188F04_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_957448EA02188F04_1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_957448EA02188F04_1_TICK_OFFSET))(this, a1);
	}
};
