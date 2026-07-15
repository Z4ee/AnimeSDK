#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BasePhaseContext.h"

#define CLASS_2_B7D28807473A6079_GET_ISENETERWORLD_OFFSET UNITYSDK_OFFSET(0x15FA95C0)
#define CLASS_2_B7D28807473A6079_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x15FA9470)
#define CLASS_2_B7D28807473A6079_ONENTERMAP_OFFSET UNITYSDK_OFFSET(0x15FA9430)
#define CLASS_2_B7D28807473A6079_ONFIRSTENTERMAPFINISH_OFFSET UNITYSDK_OFFSET(0x15FA9580)
#define CLASS_2_B7D28807473A6079_SET_ISENETERWORLD_OFFSET UNITYSDK_OFFSET(0x15FA95D0)
#define CLASS_2_B7D28807473A6079__CTOR_OFFSET UNITYSDK_OFFSET(0x15FA95E0)

inline static constexpr unsigned int Class_2_B7D28807473A6079_TypeDefinitionIndex = 58383;

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

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7D28807473A6079_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
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
