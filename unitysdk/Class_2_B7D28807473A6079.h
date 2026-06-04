#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BasePhaseContext.h"

#define CLASS_2_B7D28807473A6079_GET_ISENETERWORLD_OFFSET UNITYSDK_OFFSET(0x14538C30)
#define CLASS_2_B7D28807473A6079_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x14538B40)
#define CLASS_2_B7D28807473A6079_ONENTERMAP_OFFSET UNITYSDK_OFFSET(0x14538B00)
#define CLASS_2_B7D28807473A6079_ONFIRSTENTERMAPFINISH_OFFSET UNITYSDK_OFFSET(0x14538BF0)
#define CLASS_2_B7D28807473A6079_SET_ISENETERWORLD_OFFSET UNITYSDK_OFFSET(0x14538C40)
#define CLASS_2_B7D28807473A6079__CTOR_OFFSET UNITYSDK_OFFSET(0x14538C50)

inline static constexpr unsigned int Class_2_B7D28807473A6079_TypeDefinitionIndex = 57125;

class Class_2_B7D28807473A6079 : public ::RPG::Client::BasePhaseContext
{
public:
	::System::Boolean _IsEneterWorld_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7D28807473A6079__CTOR_OFFSET))(this);
	}

	::System::Void OnEnterMap()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7D28807473A6079_ONENTERMAP_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7D28807473A6079_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void OnFirstEnterMapFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7D28807473A6079_ONFIRSTENTERMAPFINISH_OFFSET))(this);
	}

	::System::Boolean get_IsEneterWorld()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7D28807473A6079_GET_ISENETERWORLD_OFFSET))(this);
	}

	::System::Void set_IsEneterWorld(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B7D28807473A6079_SET_ISENETERWORLD_OFFSET))(this, a1);
	}
};
