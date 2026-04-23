#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BasePhaseContext.h"

#define CLASS_2_8CF02C3C8507EA90_GET_ISENETERWORLD_OFFSET UNITYSDK_OFFSET(0x9249A30)
#define CLASS_2_8CF02C3C8507EA90_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x9249940)
#define CLASS_2_8CF02C3C8507EA90_ONENTERMAP_OFFSET UNITYSDK_OFFSET(0x9249900)
#define CLASS_2_8CF02C3C8507EA90_ONFIRSTENTERMAPFINISH_OFFSET UNITYSDK_OFFSET(0x92499F0)
#define CLASS_2_8CF02C3C8507EA90_SET_ISENETERWORLD_OFFSET UNITYSDK_OFFSET(0x9249A40)
#define CLASS_2_8CF02C3C8507EA90__CTOR_OFFSET UNITYSDK_OFFSET(0x9249A50)

inline static constexpr unsigned int Class_2_8CF02C3C8507EA90_TypeDefinitionIndex = 56363;

class Class_2_8CF02C3C8507EA90 : public ::RPG::Client::BasePhaseContext
{
public:
	::System::Boolean _IsEneterWorld_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CF02C3C8507EA90__CTOR_OFFSET))(this);
	}

	::System::Void OnEnterMap()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CF02C3C8507EA90_ONENTERMAP_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CF02C3C8507EA90_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void OnFirstEnterMapFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CF02C3C8507EA90_ONFIRSTENTERMAPFINISH_OFFSET))(this);
	}

	::System::Boolean get_IsEneterWorld()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CF02C3C8507EA90_GET_ISENETERWORLD_OFFSET))(this);
	}

	::System::Void set_IsEneterWorld(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8CF02C3C8507EA90_SET_ISENETERWORLD_OFFSET))(this, value);
	}
};
