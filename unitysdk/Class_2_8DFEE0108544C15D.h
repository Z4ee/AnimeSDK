#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RoadRash/CarControlConfig_1.h"

class Class_1_C048811FA9F91629;
class Class_2_FE9E055CA6C12502;

#define CLASS_2_8DFEE0108544C15D_GET_ADDITIVECONFIGS_OFFSET UNITYSDK_OFFSET(0x1A862440)
#define CLASS_2_8DFEE0108544C15D_GET_ADDITIVECONFIG_OFFSET UNITYSDK_OFFSET(0x1A862460)
#define CLASS_2_8DFEE0108544C15D_GET_CURRENTCHARGEVALUE_OFFSET UNITYSDK_OFFSET(0x1A8624C0)
#define CLASS_2_8DFEE0108544C15D_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x1A8624A0)
#define CLASS_2_8DFEE0108544C15D_GET_ISRELEASECHARGING_OFFSET UNITYSDK_OFFSET(0x1A862480)
#define CLASS_2_8DFEE0108544C15D_SET_ADDITIVECONFIGS_OFFSET UNITYSDK_OFFSET(0x1A862450)
#define CLASS_2_8DFEE0108544C15D_SET_ADDITIVECONFIG_OFFSET UNITYSDK_OFFSET(0x1A862470)
#define CLASS_2_8DFEE0108544C15D_SET_CURRENTCHARGEVALUE_OFFSET UNITYSDK_OFFSET(0x1A8624D0)
#define CLASS_2_8DFEE0108544C15D_SET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x1A8624B0)
#define CLASS_2_8DFEE0108544C15D_SET_ISRELEASECHARGING_OFFSET UNITYSDK_OFFSET(0x1A862490)
#define CLASS_2_8DFEE0108544C15D__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8624E0)

inline static constexpr unsigned int Class_2_8DFEE0108544C15D_TypeDefinitionIndex = 75413;

class Class_2_8DFEE0108544C15D : public ::RPG::Client::RoadRash::CarControlConfig_1<::Class_2_FE9E055CA6C12502*>
{
public:
	::Class_1_C048811FA9F91629* _AdditiveConfig_k__BackingField; // 0x18
	::Il2CppArray<::Class_1_C048811FA9F91629*>* _AdditiveConfigs_k__BackingField; // 0x20
	::System::Single _CurrentChargeValue_k__BackingField; // 0x28
	::System::Single _CurrentTime_k__BackingField; // 0x2C
	::System::Boolean _IsReleaseCharging_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DFEE0108544C15D__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_C048811FA9F91629*>* get_AdditiveConfigs()
	{
		return ((::Il2CppArray<::Class_1_C048811FA9F91629*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DFEE0108544C15D_GET_ADDITIVECONFIGS_OFFSET))(this);
	}

	::System::Void set_AdditiveConfigs(::Il2CppArray<::Class_1_C048811FA9F91629*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_C048811FA9F91629*>*))((::PBYTE)hIl2Cpp + CLASS_2_8DFEE0108544C15D_SET_ADDITIVECONFIGS_OFFSET))(this, a1);
	}

	::Class_1_C048811FA9F91629* get_AdditiveConfig()
	{
		return ((::Class_1_C048811FA9F91629*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DFEE0108544C15D_GET_ADDITIVECONFIG_OFFSET))(this);
	}

	::System::Void set_AdditiveConfig(::Class_1_C048811FA9F91629* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C048811FA9F91629*))((::PBYTE)hIl2Cpp + CLASS_2_8DFEE0108544C15D_SET_ADDITIVECONFIG_OFFSET))(this, a1);
	}

	::System::Boolean get_IsReleaseCharging()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DFEE0108544C15D_GET_ISRELEASECHARGING_OFFSET))(this);
	}

	::System::Void set_IsReleaseCharging(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DFEE0108544C15D_SET_ISRELEASECHARGING_OFFSET))(this, a1);
	}

	::System::Single get_CurrentTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DFEE0108544C15D_GET_CURRENTTIME_OFFSET))(this);
	}

	::System::Void set_CurrentTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8DFEE0108544C15D_SET_CURRENTTIME_OFFSET))(this, a1);
	}

	::System::Single get_CurrentChargeValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DFEE0108544C15D_GET_CURRENTCHARGEVALUE_OFFSET))(this);
	}

	::System::Void set_CurrentChargeValue(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8DFEE0108544C15D_SET_CURRENTCHARGEVALUE_OFFSET))(this, a1);
	}
};
