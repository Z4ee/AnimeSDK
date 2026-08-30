#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_5436AF4270279182;
class Class_4_03ACF4ACF552E9A0;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_65550F8ED0A2CD50_METHOD_3_C7D016870487812F_OFFSET UNITYSDK_OFFSET(0xDACCD90)
#define CLASS_3_65550F8ED0A2CD50_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDACCBF0)
#define CLASS_3_65550F8ED0A2CD50_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDACCCB0)
#define CLASS_3_65550F8ED0A2CD50_TICK_OFFSET UNITYSDK_OFFSET(0xDACCD00)
#define CLASS_3_65550F8ED0A2CD50__CTOR_OFFSET UNITYSDK_OFFSET(0xDACCBC0)

inline static constexpr unsigned int Class_3_65550F8ED0A2CD50_TypeDefinitionIndex = 52426;

class Class_3_65550F8ED0A2CD50 : public ::RPG::GameCore::ST_Task_1<::Class_4_03ACF4ACF552E9A0*>
{
public:
	::Class_2_5436AF4270279182* DPOJGPNDPMD; // 0x28
	::System::Single NKLBMFBABGC; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_03ACF4ACF552E9A0* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_03ACF4ACF552E9A0*))((::PBYTE)hIl2Cpp + CLASS_3_65550F8ED0A2CD50__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65550F8ED0A2CD50_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65550F8ED0A2CD50_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_65550F8ED0A2CD50_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_C7D016870487812F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65550F8ED0A2CD50_METHOD_3_C7D016870487812F_OFFSET))(this);
	}
};
