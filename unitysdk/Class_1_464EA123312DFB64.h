#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_927AEEA01B635CB6_1;

#define CLASS_1_464EA123312DFB64_GET_DIYMECHATRONID_OFFSET UNITYSDK_OFFSET(0xBF4A280)
#define CLASS_1_464EA123312DFB64_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xBF4A2A0)
#define CLASS_1_464EA123312DFB64_GET_PAINTCOLORID_OFFSET UNITYSDK_OFFSET(0xBF4A290)
#define CLASS_1_464EA123312DFB64__CTOR_OFFSET UNITYSDK_OFFSET(0xBF4A2B0)

inline static constexpr unsigned int Class_1_464EA123312DFB64_TypeDefinitionIndex = 80118;

class Class_1_464EA123312DFB64 : public ::System::Object
{
public:
	::System::UInt32 _DiyMechatronID_k__BackingField; // 0x10
	::System::UInt32 _PaintColorID_k__BackingField; // 0x14
	::System::UInt32 _InstanceID_k__BackingField; // 0x18

	::System::Void _ctor(::Class_1_927AEEA01B635CB6_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_927AEEA01B635CB6_1*))((::PBYTE)hIl2Cpp + CLASS_1_464EA123312DFB64__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_DiyMechatronID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_464EA123312DFB64_GET_DIYMECHATRONID_OFFSET))(this);
	}

	::System::UInt32 get_PaintColorID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_464EA123312DFB64_GET_PAINTCOLORID_OFFSET))(this);
	}

	::System::UInt32 get_InstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_464EA123312DFB64_GET_INSTANCEID_OFFSET))(this);
	}
};
