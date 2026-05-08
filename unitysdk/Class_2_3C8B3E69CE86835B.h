#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_677CEA8C88AC78AB.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_3A3A95CA33F5CFBC;
class Class_3_883E597458B91E77;
class Class_3_BA709FB56ED5FAC4;
class Class_3_DFD5D1FDB9D2A4AC;

#define CLASS_2_3C8B3E69CE86835B_METHOD_2_08A500CCFA7B1882_OFFSET UNITYSDK_OFFSET(0xFD73420)
#define CLASS_2_3C8B3E69CE86835B_METHOD_2_9D455FE4693966A8_OFFSET UNITYSDK_OFFSET(0xFD73310)
#define CLASS_2_3C8B3E69CE86835B__CTOR_OFFSET UNITYSDK_OFFSET(0xFD733B0)

inline static constexpr unsigned int Class_2_3C8B3E69CE86835B_TypeDefinitionIndex = 53552;

class Class_2_3C8B3E69CE86835B : public ::Class_1_677CEA8C88AC78AB
{
public:
	::Class_3_DFD5D1FDB9D2A4AC* Field_2_2; // 0x80
	::Class_3_3A3A95CA33F5CFBC* Field_2_0; // 0x88
	::Class_3_BA709FB56ED5FAC4* Field_2_1; // 0x90
	::Class_3_883E597458B91E77* Field_2_3; // 0x98
	::System::Byte Field_2_5; // 0xA0
	::System::Boolean Field_2_6; // 0xA1
	::System::Single Field_2_4; // 0xA4
	::UnityEngine::Vector3 Field_2_7; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8B3E69CE86835B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9D455FE4693966A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8B3E69CE86835B_METHOD_2_9D455FE4693966A8_OFFSET))(this);
	}

	::System::Void Method_2_08A500CCFA7B1882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8B3E69CE86835B_METHOD_2_08A500CCFA7B1882_OFFSET))(this);
	}
};
