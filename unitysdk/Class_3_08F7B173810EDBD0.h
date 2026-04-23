#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::Client { class AdventureGameplayLockWithDelay; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_08F7B173810EDBD0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x119DB260)
#define CLASS_3_08F7B173810EDBD0_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x119DB2D0)
#define CLASS_3_08F7B173810EDBD0_METHOD_3_D478A39E78B993CD_1_OFFSET UNITYSDK_OFFSET(0x119DB080)
#define CLASS_3_08F7B173810EDBD0_METHOD_3_D478A39E78B993CD_OFFSET UNITYSDK_OFFSET(0x119DAEF0)
#define CLASS_3_08F7B173810EDBD0_ONSKIP_OFFSET UNITYSDK_OFFSET(0x119DB210)
#define CLASS_3_08F7B173810EDBD0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x119DACA0)
#define CLASS_3_08F7B173810EDBD0__CTOR_OFFSET UNITYSDK_OFFSET(0x119DAC10)
#define CLASS_3_08F7B173810EDBD0___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x119DB2E0)

inline static constexpr unsigned int Class_3_08F7B173810EDBD0_TypeDefinitionIndex = 48654;

class Class_3_08F7B173810EDBD0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::Client::AdventureGameplayLockWithDelay*>
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::AdventureGameplayLockWithDelay* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::AdventureGameplayLockWithDelay*))((::PBYTE)hIl2Cpp + CLASS_3_08F7B173810EDBD0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08F7B173810EDBD0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08F7B173810EDBD0_ONSKIP_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08F7B173810EDBD0_DISPOSE_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08F7B173810EDBD0_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void Method_3_D478A39E78B993CD(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_08F7B173810EDBD0_METHOD_3_D478A39E78B993CD_OFFSET))(this, a1);
	}

	::System::Void Method_3_D478A39E78B993CD_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_08F7B173810EDBD0_METHOD_3_D478A39E78B993CD_1_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08F7B173810EDBD0___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
