#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_C1E7AE5A0B40A05A_METHOD_1_CF1A9DD8735A1069_OFFSET UNITYSDK_OFFSET(0x87ECA10)
#define CLASS_1_C1E7AE5A0B40A05A_METHOD_1_DAB9087B1AF0C469_OFFSET UNITYSDK_OFFSET(0x87ECAB0)
#define CLASS_1_C1E7AE5A0B40A05A__CTOR_OFFSET UNITYSDK_OFFSET(0x87ECB10)

inline static constexpr unsigned int Class_1_C1E7AE5A0B40A05A_TypeDefinitionIndex = 59791;

class Class_1_C1E7AE5A0B40A05A : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_0 = 0x4E00; // 0x0
	// static const ::System::UInt32 Field_1_1 = 0x9FFF; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1E7AE5A0B40A05A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CF1A9DD8735A1069(::System::Char a1, ::System::Char& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Char&))((::PBYTE)hIl2Cpp + CLASS_1_C1E7AE5A0B40A05A_METHOD_1_CF1A9DD8735A1069_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DAB9087B1AF0C469(::System::Char a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + CLASS_1_C1E7AE5A0B40A05A_METHOD_1_DAB9087B1AF0C469_OFFSET))(this, a1);
	}
};
