#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_4385C14088733CE3_2;

#define CLASS_1_D665102750CF22FE_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x13C113B0)
#define CLASS_1_D665102750CF22FE_METHOD_1_BE2560CAAAA127D9_OFFSET UNITYSDK_OFFSET(0x13C11410)
#define CLASS_1_D665102750CF22FE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13C119A0)
#define CLASS_1_D665102750CF22FE_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x13C11A00)
#define CLASS_1_D665102750CF22FE__CTOR_OFFSET UNITYSDK_OFFSET(0x13C119F0)

inline static constexpr unsigned int Class_1_D665102750CF22FE_TypeDefinitionIndex = 76677;

class Class_1_D665102750CF22FE : public ::System::Object
{
public:
	::Class_1_4385C14088733CE3_2* Field_1_1; // 0x10
	::System::Single Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D665102750CF22FE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D665102750CF22FE_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_BE2560CAAAA127D9(::UnityEngine::Vector4& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + CLASS_1_D665102750CF22FE_METHOD_1_BE2560CAAAA127D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D665102750CF22FE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_4385C14088733CE3_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4385C14088733CE3_2*))((::PBYTE)hIl2Cpp + CLASS_1_D665102750CF22FE_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};
