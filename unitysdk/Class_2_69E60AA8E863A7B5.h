#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RoadRash/CarControlConfig_1.h"

class Class_2_28B6C350E6F0B59A;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { class String; }

#define CLASS_2_69E60AA8E863A7B5_GET_ACTUALFIRELEVEL_OFFSET UNITYSDK_OFFSET(0x180FE100)
#define CLASS_2_69E60AA8E863A7B5_GET_CURRENTSTAGE_OFFSET UNITYSDK_OFFSET(0x180FE0C0)
#define CLASS_2_69E60AA8E863A7B5_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x180FE0A0)
#define CLASS_2_69E60AA8E863A7B5_GET_LV2REQUIRECASTTIME_OFFSET UNITYSDK_OFFSET(0x180FE060)
#define CLASS_2_69E60AA8E863A7B5_GET_LV2TOGGLENAME_OFFSET UNITYSDK_OFFSET(0x180FE080)
#define CLASS_2_69E60AA8E863A7B5_GET_REQUIREDCASTTIME_OFFSET UNITYSDK_OFFSET(0x180FE040)
#define CLASS_2_69E60AA8E863A7B5_GET_TARGETS_OFFSET UNITYSDK_OFFSET(0x180FE0E0)
#define CLASS_2_69E60AA8E863A7B5_SET_ACTUALFIRELEVEL_OFFSET UNITYSDK_OFFSET(0x180FE110)
#define CLASS_2_69E60AA8E863A7B5_SET_CURRENTSTAGE_OFFSET UNITYSDK_OFFSET(0x180FE0D0)
#define CLASS_2_69E60AA8E863A7B5_SET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x180FE0B0)
#define CLASS_2_69E60AA8E863A7B5_SET_LV2REQUIRECASTTIME_OFFSET UNITYSDK_OFFSET(0x180FE070)
#define CLASS_2_69E60AA8E863A7B5_SET_LV2TOGGLENAME_OFFSET UNITYSDK_OFFSET(0x180FE090)
#define CLASS_2_69E60AA8E863A7B5_SET_REQUIREDCASTTIME_OFFSET UNITYSDK_OFFSET(0x180FE050)
#define CLASS_2_69E60AA8E863A7B5_SET_TARGETS_OFFSET UNITYSDK_OFFSET(0x180FE0F0)
#define CLASS_2_69E60AA8E863A7B5__CTOR_OFFSET UNITYSDK_OFFSET(0x180FE120)

inline static constexpr unsigned int Class_2_69E60AA8E863A7B5_TypeDefinitionIndex = 75409;

class Class_2_69E60AA8E863A7B5 : public ::RPG::Client::RoadRash::CarControlConfig_1<::Class_2_28B6C350E6F0B59A*>
{
public:
	::Collections::Pooled::PooledList_1<::System::Int32>* _Targets_k__BackingField; // 0x18
	::System::String* _LV2ToggleName_k__BackingField; // 0x20
	::System::Int32 _ActualFireLevel_k__BackingField; // 0x28
	::System::Single _Lv2RequireCastTime_k__BackingField; // 0x2C
	::System::Single _CurrentTime_k__BackingField; // 0x30
	::System::Int32 _CurrentStage_k__BackingField; // 0x34
	::System::Single _RequiredCastTime_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69E60AA8E863A7B5__CTOR_OFFSET))(this);
	}

	::System::Single get_RequiredCastTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69E60AA8E863A7B5_GET_REQUIREDCASTTIME_OFFSET))(this);
	}

	::System::Void set_RequiredCastTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_69E60AA8E863A7B5_SET_REQUIREDCASTTIME_OFFSET))(this, a1);
	}

	::System::Single get_Lv2RequireCastTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69E60AA8E863A7B5_GET_LV2REQUIRECASTTIME_OFFSET))(this);
	}

	::System::Void set_Lv2RequireCastTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_69E60AA8E863A7B5_SET_LV2REQUIRECASTTIME_OFFSET))(this, a1);
	}

	::System::String* get_LV2ToggleName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69E60AA8E863A7B5_GET_LV2TOGGLENAME_OFFSET))(this);
	}

	::System::Void set_LV2ToggleName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_69E60AA8E863A7B5_SET_LV2TOGGLENAME_OFFSET))(this, a1);
	}

	::System::Single get_CurrentTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69E60AA8E863A7B5_GET_CURRENTTIME_OFFSET))(this);
	}

	::System::Void set_CurrentTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_69E60AA8E863A7B5_SET_CURRENTTIME_OFFSET))(this, a1);
	}

	::System::Int32 get_CurrentStage()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69E60AA8E863A7B5_GET_CURRENTSTAGE_OFFSET))(this);
	}

	::System::Void set_CurrentStage(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_69E60AA8E863A7B5_SET_CURRENTSTAGE_OFFSET))(this, a1);
	}

	::Collections::Pooled::PooledList_1<::System::Int32>* get_Targets()
	{
		return ((::Collections::Pooled::PooledList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69E60AA8E863A7B5_GET_TARGETS_OFFSET))(this);
	}

	::System::Void set_Targets(::Collections::Pooled::PooledList_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Collections::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_69E60AA8E863A7B5_SET_TARGETS_OFFSET))(this, a1);
	}

	::System::Int32 get_ActualFireLevel()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69E60AA8E863A7B5_GET_ACTUALFIRELEVEL_OFFSET))(this);
	}

	::System::Void set_ActualFireLevel(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_69E60AA8E863A7B5_SET_ACTUALFIRELEVEL_OFFSET))(this, a1);
	}
};
