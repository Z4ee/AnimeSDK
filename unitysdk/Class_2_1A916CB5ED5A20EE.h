#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_1A916CB5ED5A20EE_METHOD_2_08A500CCFA7B1882_OFFSET UNITYSDK_OFFSET(0x160822E0)
#define CLASS_2_1A916CB5ED5A20EE_METHOD_2_BA8DA10955CBCD4F_OFFSET UNITYSDK_OFFSET(0x16082190)
#define CLASS_2_1A916CB5ED5A20EE__CTOR_OFFSET UNITYSDK_OFFSET(0x16082260)

inline static constexpr unsigned int Class_2_1A916CB5ED5A20EE_TypeDefinitionIndex = 62598;

class Class_2_1A916CB5ED5A20EE : public ::Class_1_8377BAB19A574A40
{
public:
	::System::Single Field_2_3; // 0x80
	::UnityEngine::Vector3 Field_2_6; // 0x84
	::System::Int32 Field_2_5; // 0x90
	::System::Single Field_2_2; // 0x94
	::System::Boolean Field_2_0; // 0x98
	::System::Int32 Field_2_4; // 0x9C
	::System::Single Field_2_1; // 0xA0

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
