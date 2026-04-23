#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_4EBEA112A94807DC_CLASS_1_61A89E2AE773A3FD__CTOR_OFFSET UNITYSDK_OFFSET(0xB1F7CC0)

inline static constexpr unsigned int Class_1_4EBEA112A94807DC_Class_1_61A89E2AE773A3FD_TypeDefinitionIndex = 51570;

class Class_1_4EBEA112A94807DC_Class_1_61A89E2AE773A3FD : public ::System::Object
{
public:
	::System::Boolean Field_1_3; // 0x10
	::System::Boolean Field_1_4; // 0x11
	::System::Boolean Field_1_2; // 0x12
	::System::Boolean Field_1_1; // 0x13
	::RPG::GameCore::AnimZoneType Field_1_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4EBEA112A94807DC_CLASS_1_61A89E2AE773A3FD__CTOR_OFFSET))(this);
	}
};
