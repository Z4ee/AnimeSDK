#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_5436AF4270279182;
class Class_4_03EFB37613466871_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_957448EA02188F04_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19BFC2C0)
#define CLASS_3_957448EA02188F04_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19BFC470)
#define CLASS_3_957448EA02188F04_TICK_OFFSET UNITYSDK_OFFSET(0x19BFC4C0)
#define CLASS_3_957448EA02188F04__CTOR_OFFSET UNITYSDK_OFFSET(0x19BFC290)

inline static constexpr unsigned int Class_3_957448EA02188F04_TypeDefinitionIndex = 52425;

class Class_3_957448EA02188F04 : public ::RPG::GameCore::ST_Task_1<::Class_4_03EFB37613466871_1*>
{
public:
	::Class_2_5436AF4270279182* DPOJGPNDPMD; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_03EFB37613466871_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_03EFB37613466871_1*))((::PBYTE)hIl2Cpp + CLASS_3_957448EA02188F04__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_957448EA02188F04_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_957448EA02188F04_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_957448EA02188F04_TICK_OFFSET))(this, a1);
	}
};
