#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_2_5436AF4270279182;
class Class_4_03ACF4ACF552E9A0_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8D795888C790834D_METHOD_3_3215AC64FF8F0B10_OFFSET UNITYSDK_OFFSET(0x15D81E40)
#define CLASS_3_8D795888C790834D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D81BC0)
#define CLASS_3_8D795888C790834D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15D820E0)
#define CLASS_3_8D795888C790834D_TICK_OFFSET UNITYSDK_OFFSET(0x15D82130)
#define CLASS_3_8D795888C790834D__CTOR_OFFSET UNITYSDK_OFFSET(0x15D81B90)

inline static constexpr unsigned int Class_3_8D795888C790834D_TypeDefinitionIndex = 52140;

class Class_3_8D795888C790834D : public ::RPG::GameCore::ST_Task_1<::Class_4_03ACF4ACF552E9A0_1*>
{
public:
	::Class_2_5436AF4270279182* DPOJGPNDPMD; // 0x28
	::UnityEngine::Quaternion ACDOFFNEDEF; // 0x30
	::System::Single CLFBEHPCHOE; // 0x40
	::UnityEngine::Quaternion HBAIICJGPGC; // 0x44
	::System::Single PGMIOKKLHIE; // 0x54

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_03ACF4ACF552E9A0_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_03ACF4ACF552E9A0_1*))((::PBYTE)hIl2Cpp + CLASS_3_8D795888C790834D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8D795888C790834D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8D795888C790834D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8D795888C790834D_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_3215AC64FF8F0B10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8D795888C790834D_METHOD_3_3215AC64FF8F0B10_OFFSET))(this);
	}
};
