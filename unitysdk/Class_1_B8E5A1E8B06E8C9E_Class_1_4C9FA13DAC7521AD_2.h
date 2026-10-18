#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_B8E5A1E8B06E8C9E_CLASS_1_4C9FA13DAC7521AD_2_GET_CHIPID_OFFSET UNITYSDK_OFFSET(0x156C1EA0)
#define CLASS_1_B8E5A1E8B06E8C9E_CLASS_1_4C9FA13DAC7521AD_2_SET_CHIPID_OFFSET UNITYSDK_OFFSET(0x156C1EB0)
#define CLASS_1_B8E5A1E8B06E8C9E_CLASS_1_4C9FA13DAC7521AD_2__CTOR_OFFSET UNITYSDK_OFFSET(0x156C1EC0)

inline static constexpr unsigned int Class_1_B8E5A1E8B06E8C9E_Class_1_4C9FA13DAC7521AD_2_TypeDefinitionIndex = 79464;

class Class_1_B8E5A1E8B06E8C9E_Class_1_4C9FA13DAC7521AD_2 : public ::System::Object
{
public:
	::System::UInt32 _ChipID_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8E5A1E8B06E8C9E_CLASS_1_4C9FA13DAC7521AD_2__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_ChipID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8E5A1E8B06E8C9E_CLASS_1_4C9FA13DAC7521AD_2_GET_CHIPID_OFFSET))(this);
	}

	::System::Void set_ChipID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B8E5A1E8B06E8C9E_CLASS_1_4C9FA13DAC7521AD_2_SET_CHIPID_OFFSET))(this, a1);
	}
};
