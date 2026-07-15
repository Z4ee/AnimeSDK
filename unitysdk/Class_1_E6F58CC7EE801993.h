#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }

#define CLASS_1_E6F58CC7EE801993_METHOD_1_2DC5F2340E511B3A_OFFSET UNITYSDK_OFFSET(0x18750E90)
#define CLASS_1_E6F58CC7EE801993_METHOD_1_6D049B1E39768DC5_OFFSET UNITYSDK_OFFSET(0x18751200)
#define CLASS_1_E6F58CC7EE801993__CTOR_OFFSET UNITYSDK_OFFSET(0x187513D0)

inline static constexpr unsigned int Class_1_E6F58CC7EE801993_TypeDefinitionIndex = 63236;

class Class_1_E6F58CC7EE801993 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6F58CC7EE801993__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_2DC5F2340E511B3A(::RPG::Client::MainMissionData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + CLASS_1_E6F58CC7EE801993_METHOD_1_2DC5F2340E511B3A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6D049B1E39768DC5(::RPG::Client::MainMissionData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + CLASS_1_E6F58CC7EE801993_METHOD_1_6D049B1E39768DC5_OFFSET))(this, a1);
	}
};
