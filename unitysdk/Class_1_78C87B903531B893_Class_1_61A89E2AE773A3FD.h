#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_78C87B903531B893_CLASS_1_61A89E2AE773A3FD__CTOR_OFFSET UNITYSDK_OFFSET(0x8DBAAC0)

inline static constexpr unsigned int Class_1_78C87B903531B893_Class_1_61A89E2AE773A3FD_TypeDefinitionIndex = 44823;

class Class_1_78C87B903531B893_Class_1_61A89E2AE773A3FD : public ::System::Object
{
public:
	::RPG::GameCore::AnimZoneType Field_1_0; // 0x10
	::System::Boolean Field_1_4; // 0x14
	::System::Boolean Field_1_2; // 0x15
	::System::Boolean Field_1_1; // 0x16
	::System::Boolean Field_1_3; // 0x17

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78C87B903531B893_CLASS_1_61A89E2AE773A3FD__CTOR_OFFSET))(this);
	}
};
