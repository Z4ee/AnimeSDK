#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_C421019F70ED865F_METHOD_2_502E4F13BFB605D5_OFFSET UNITYSDK_OFFSET(0x12ACCC90)
#define CLASS_2_C421019F70ED865F_METHOD_2_EBBC49A9109F0F2F_OFFSET UNITYSDK_OFFSET(0x12ACCB70)
#define CLASS_2_C421019F70ED865F__CTOR_OFFSET UNITYSDK_OFFSET(0x12ACCC20)

inline static constexpr unsigned int Class_2_C421019F70ED865F_TypeDefinitionIndex = 49382;

class Class_2_C421019F70ED865F : public ::Class_1_8377BAB19A574A40
{
public:
	::UnityEngine::Vector3 Field_2_7; // 0x80
	::System::Boolean Field_2_6; // 0x8C
	::UnityEngine::Vector3 Field_2_0; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C421019F70ED865F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EBBC49A9109F0F2F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C421019F70ED865F_METHOD_2_EBBC49A9109F0F2F_OFFSET))(this);
	}

	::System::Void Method_2_502E4F13BFB605D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C421019F70ED865F_METHOD_2_502E4F13BFB605D5_OFFSET))(this);
	}
};
