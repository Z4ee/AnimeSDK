#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_5436AF4270279182;
class Class_4_03EFB37613466871_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_957448EA02188F04_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12AC1290)
#define CLASS_3_957448EA02188F04_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12AC1440)
#define CLASS_3_957448EA02188F04_TICK_OFFSET UNITYSDK_OFFSET(0x12AC1490)
#define CLASS_3_957448EA02188F04__CTOR_OFFSET UNITYSDK_OFFSET(0x12AC1260)
#define CLASS_3_957448EA02188F04___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x12AC1510)

inline static constexpr unsigned int Class_3_957448EA02188F04_TypeDefinitionIndex = 48752;

class Class_3_957448EA02188F04 : public ::RPG::GameCore::ST_Task_1<::Class_4_03EFB37613466871_1*>
{
public:
	::Class_2_5436AF4270279182* Field_3_0; // 0x28

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

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_957448EA02188F04___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
