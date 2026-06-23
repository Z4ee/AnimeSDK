#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_3B42BC0680587011;
class Class_3_883E597458B91E77;
class Class_3_B8F2A25A5ADF5CEE;
class Class_3_DFD5D1FDB9D2A4AC;

#define CLASS_2_3C8B3E69CE86835B_METHOD_2_08A500CCFA7B1882_OFFSET UNITYSDK_OFFSET(0x17AAFE10)
#define CLASS_2_3C8B3E69CE86835B_METHOD_2_9D455FE4693966A8_OFFSET UNITYSDK_OFFSET(0x17AAFD00)
#define CLASS_2_3C8B3E69CE86835B__CTOR_OFFSET UNITYSDK_OFFSET(0x17AAFDA0)

inline static constexpr unsigned int Class_2_3C8B3E69CE86835B_TypeDefinitionIndex = 41022;

class Class_2_3C8B3E69CE86835B : public ::Class_1_8377BAB19A574A40
{
public:
	::Class_3_3B42BC0680587011* Field_2_1; // 0x80
	::Class_3_883E597458B91E77* Field_2_3; // 0x88
	::Class_3_DFD5D1FDB9D2A4AC* Field_2_2; // 0x90
	::Class_3_B8F2A25A5ADF5CEE* Field_2_0; // 0x98
	::UnityEngine::Vector3 Field_2_7; // 0xA0
	::System::Single Field_2_4; // 0xAC
	::System::Byte Field_2_5; // 0xB0
	::System::Boolean Field_2_6; // 0xB1

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
