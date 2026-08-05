#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_412776396A6B9A05_1;
class Class_4_8D1AD90A8B2D39F9_3;

#define CLASS_1_669019582704F0BF_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1DF00730)
#define CLASS_1_669019582704F0BF_METHOD_1_4AA7827CFB505DDD_OFFSET UNITYSDK_OFFSET(0x1DF00650)
#define CLASS_1_669019582704F0BF_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1DF007A0)
#define CLASS_1_669019582704F0BF_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1DF007B0)
#define CLASS_1_669019582704F0BF__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF00610)

inline static constexpr unsigned int Class_1_669019582704F0BF_TypeDefinitionIndex = 93157;

class Class_1_669019582704F0BF : public ::System::Object
{
public:
	::Class_4_8D1AD90A8B2D39F9_3* Field_1_0; // 0x10
	::Class_3_412776396A6B9A05_1* Field_1_4; // 0x18
	::System::UInt64 Field_1_7; // 0x20
	::System::Boolean Field_1_5; // 0x28
	::System::Boolean Field_1_6; // 0x29

	::System::Void _ctor(::Class_4_8D1AD90A8B2D39F9_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_8D1AD90A8B2D39F9_3*))((::PBYTE)hIl2Cpp + CLASS_1_669019582704F0BF__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_669019582704F0BF_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_669019582704F0BF_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Class_3_412776396A6B9A05_1* Method_1_4AA7827CFB505DDD()
	{
		return ((::Class_3_412776396A6B9A05_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_669019582704F0BF_METHOD_1_4AA7827CFB505DDD_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_669019582704F0BF_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
