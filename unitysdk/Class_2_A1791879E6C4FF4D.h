#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RoadRash/CarControlConfig_1.h"

class Class_2_CBCC842D240C2A9B;
namespace System { class String; }

#define CLASS_2_A1791879E6C4FF4D_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x159BEF10)
#define CLASS_2_A1791879E6C4FF4D_GET_LV3TOGGLENAME_OFFSET UNITYSDK_OFFSET(0x159BEEF0)
#define CLASS_2_A1791879E6C4FF4D_GET_REQUIREDCASTTIME_OFFSET UNITYSDK_OFFSET(0x159BEED0)
#define CLASS_2_A1791879E6C4FF4D_SET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x159BEF20)
#define CLASS_2_A1791879E6C4FF4D_SET_LV3TOGGLENAME_OFFSET UNITYSDK_OFFSET(0x159BEF00)
#define CLASS_2_A1791879E6C4FF4D_SET_REQUIREDCASTTIME_OFFSET UNITYSDK_OFFSET(0x159BEEE0)
#define CLASS_2_A1791879E6C4FF4D__CTOR_OFFSET UNITYSDK_OFFSET(0x159BEF30)

inline static constexpr unsigned int Class_2_A1791879E6C4FF4D_TypeDefinitionIndex = 75422;

class Class_2_A1791879E6C4FF4D : public ::RPG::Client::RoadRash::CarControlConfig_1<::Class_2_CBCC842D240C2A9B*>
{
public:
	::System::String* _LV3ToggleName_k__BackingField; // 0x18
	::System::Single _RequiredCastTime_k__BackingField; // 0x20
	::System::Single _CurrentTime_k__BackingField; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1791879E6C4FF4D__CTOR_OFFSET))(this);
	}

	::System::Single get_RequiredCastTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1791879E6C4FF4D_GET_REQUIREDCASTTIME_OFFSET))(this);
	}

	::System::Void set_RequiredCastTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A1791879E6C4FF4D_SET_REQUIREDCASTTIME_OFFSET))(this, a1);
	}

	::System::String* get_LV3ToggleName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1791879E6C4FF4D_GET_LV3TOGGLENAME_OFFSET))(this);
	}

	::System::Void set_LV3ToggleName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A1791879E6C4FF4D_SET_LV3TOGGLENAME_OFFSET))(this, a1);
	}

	::System::Single get_CurrentTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1791879E6C4FF4D_GET_CURRENTTIME_OFFSET))(this);
	}

	::System::Void set_CurrentTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A1791879E6C4FF4D_SET_CURRENTTIME_OFFSET))(this, a1);
	}
};
