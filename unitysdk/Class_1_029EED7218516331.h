#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_029EED7218516331__CTOR_OFFSET UNITYSDK_OFFSET(0x16A0F8C0)

inline static constexpr unsigned int Class_1_029EED7218516331_TypeDefinitionIndex = 32822;

class Class_1_029EED7218516331 : public ::System::Object
{
public:
	::System::Single Field_1_8; // 0x10
	::System::Single Field_1_7; // 0x14
	::System::Single Field_1_2; // 0x18
	::RPG::MVector3 Field_1_3; // 0x1C
	::System::Int32 Field_1_0; // 0x28
	::RPG::MVector3 Field_1_4; // 0x2C
	::RPG::MVector3 Field_1_5; // 0x38
	::System::Single Field_1_6; // 0x44
	::System::Single Field_1_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_029EED7218516331__CTOR_OFFSET))(this);
	}
};
