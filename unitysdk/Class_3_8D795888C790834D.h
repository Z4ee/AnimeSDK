#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_2_5436AF4270279182;
class Class_4_03ACF4ACF552E9A0_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8D795888C790834D_METHOD_3_3215AC64FF8F0B10_OFFSET UNITYSDK_OFFSET(0x15A6FDB0)
#define CLASS_3_8D795888C790834D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A6FB30)
#define CLASS_3_8D795888C790834D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15A70050)
#define CLASS_3_8D795888C790834D_TICK_OFFSET UNITYSDK_OFFSET(0x15A700A0)
#define CLASS_3_8D795888C790834D__CTOR_OFFSET UNITYSDK_OFFSET(0x15A6FB00)

inline static constexpr unsigned int Class_3_8D795888C790834D_TypeDefinitionIndex = 52427;

class Class_3_8D795888C790834D : public ::RPG::GameCore::ST_Task_1<::Class_4_03ACF4ACF552E9A0_1*>
{
public:
	::Class_2_5436AF4270279182* DPOJGPNDPMD; // 0x28
	::System::Single CLFBEHPCHOE; // 0x30
	::UnityEngine::Quaternion HBAIICJGPGC; // 0x34
	::System::Single PGMIOKKLHIE; // 0x44
	::UnityEngine::Quaternion ACDOFFNEDEF; // 0x48

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
