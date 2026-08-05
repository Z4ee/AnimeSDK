#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_3B42BC0680587011;
class Class_3_707412604A129938;
class Class_3_883E597458B91E77;
class Class_3_C93CC3D2C2AC4067;

#define CLASS_2_AE8C4F4D7ED6FC16_METHOD_2_15F4E4F86182D646_OFFSET UNITYSDK_OFFSET(0x14E43650)
#define CLASS_2_AE8C4F4D7ED6FC16_METHOD_2_502E4F13BFB605D5_OFFSET UNITYSDK_OFFSET(0x14E43760)
#define CLASS_2_AE8C4F4D7ED6FC16__CTOR_OFFSET UNITYSDK_OFFSET(0x14E436F0)

inline static constexpr unsigned int Class_2_AE8C4F4D7ED6FC16_TypeDefinitionIndex = 71256;

class Class_2_AE8C4F4D7ED6FC16 : public ::Class_1_8377BAB19A574A40
{
public:
	::Class_3_3B42BC0680587011* Field_2_7; // 0x80
	::Class_3_C93CC3D2C2AC4067* Field_2_6; // 0x88
	::Class_3_707412604A129938* Field_2_0; // 0x90
	::Class_3_883E597458B91E77* Field_2_5; // 0x98
	::System::Boolean Field_2_10; // 0xA0
	::System::Byte Field_2_11; // 0xA1
	::System::Single Field_2_4; // 0xA4
	::UnityEngine::Vector3 Field_2_9; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE8C4F4D7ED6FC16__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_15F4E4F86182D646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE8C4F4D7ED6FC16_METHOD_2_15F4E4F86182D646_OFFSET))(this);
	}

	::System::Void Method_2_502E4F13BFB605D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE8C4F4D7ED6FC16_METHOD_2_502E4F13BFB605D5_OFFSET))(this);
	}
};
