#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }

#define CLASS_1_E6F58CC7EE801993_METHOD_1_2DC5F2340E511B3A_OFFSET UNITYSDK_OFFSET(0xA778020)
#define CLASS_1_E6F58CC7EE801993_METHOD_1_90B15CC134C5B328_OFFSET UNITYSDK_OFFSET(0xA778350)
#define CLASS_1_E6F58CC7EE801993__CTOR_OFFSET UNITYSDK_OFFSET(0xA778550)

inline static constexpr unsigned int Class_1_E6F58CC7EE801993_TypeDefinitionIndex = 61873;

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

	::System::Boolean Method_1_90B15CC134C5B328(::RPG::Client::MainMissionData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + CLASS_1_E6F58CC7EE801993_METHOD_1_90B15CC134C5B328_OFFSET))(this, a1);
	}
};
