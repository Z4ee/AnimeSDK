#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3D70A89F566F506A;
class Class_1_70697F531F566942;
class Class_1_E3E37125DAA7A899;

#define CLASS_1_B5CB9AB596223833__CTOR_OFFSET UNITYSDK_OFFSET(0x17BAD050)

inline static constexpr unsigned int Class_1_B5CB9AB596223833_TypeDefinitionIndex = 34719;

class Class_1_B5CB9AB596223833 : public ::System::Object
{
public:
	::Class_1_70697F531F566942* Field_1_0; // 0x10
	::Class_1_E3E37125DAA7A899* Field_1_1; // 0x18
	::Class_1_3D70A89F566F506A* Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5CB9AB596223833__CTOR_OFFSET))(this);
	}
};
