#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

class Class_1_38CD02622A43811A;

#define CLASS_1_9DB6F6BB628BF86A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18C1A2B0)
#define CLASS_1_9DB6F6BB628BF86A__CTOR_OFFSET UNITYSDK_OFFSET(0x18C1A310)

inline static constexpr unsigned int Class_1_9DB6F6BB628BF86A_TypeDefinitionIndex = 39682;

class Class_1_9DB6F6BB628BF86A : public ::System::Object
{
public:
	::Class_1_38CD02622A43811A* Field_1_0; // 0x10
	::Class_1_38CD02622A43811A* Field_1_1; // 0x18
	::RPG::MVector2 Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x28
	::System::Single Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DB6F6BB628BF86A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DB6F6BB628BF86A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
