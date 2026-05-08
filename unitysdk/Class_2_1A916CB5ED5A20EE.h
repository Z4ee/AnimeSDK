#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_677CEA8C88AC78AB.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_1A916CB5ED5A20EE_METHOD_2_08A500CCFA7B1882_OFFSET UNITYSDK_OFFSET(0x134FAA30)
#define CLASS_2_1A916CB5ED5A20EE_METHOD_2_BA8DA10955CBCD4F_OFFSET UNITYSDK_OFFSET(0x134FA8E0)
#define CLASS_2_1A916CB5ED5A20EE__CTOR_OFFSET UNITYSDK_OFFSET(0x134FA9B0)

inline static constexpr unsigned int Class_2_1A916CB5ED5A20EE_TypeDefinitionIndex = 65556;

class Class_2_1A916CB5ED5A20EE : public ::Class_1_677CEA8C88AC78AB
{
public:
	::System::Single Field_2_2; // 0x80
	::System::Boolean Field_2_0; // 0x84
	::UnityEngine::Vector3 Field_2_6; // 0x88
	::System::Single Field_2_3; // 0x94
	::System::Single Field_2_1; // 0x98
	::System::Int32 Field_2_4; // 0x9C
	::System::Int32 Field_2_5; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A916CB5ED5A20EE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BA8DA10955CBCD4F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A916CB5ED5A20EE_METHOD_2_BA8DA10955CBCD4F_OFFSET))(this);
	}

	::System::Void Method_2_08A500CCFA7B1882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A916CB5ED5A20EE_METHOD_2_08A500CCFA7B1882_OFFSET))(this);
	}
};
