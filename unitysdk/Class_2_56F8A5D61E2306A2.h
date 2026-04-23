#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8F813B9AC04644C0.h"
#include "unitysdk/Struct_2_0814C3CA012BD292.h"

#define CLASS_2_56F8A5D61E2306A2_METHOD_2_0998A02BAA295AFA_OFFSET UNITYSDK_OFFSET(0xB00DF60)
#define CLASS_2_56F8A5D61E2306A2_METHOD_2_0A1D252F3DC67906_OFFSET UNITYSDK_OFFSET(0xB00E030)
#define CLASS_2_56F8A5D61E2306A2__CTOR_OFFSET UNITYSDK_OFFSET(0xB00E260)

inline static constexpr unsigned int Class_2_56F8A5D61E2306A2_TypeDefinitionIndex = 59785;

class Class_2_56F8A5D61E2306A2 : public ::Class_1_8F813B9AC04644C0
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56F8A5D61E2306A2__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_2_0998A02BAA295AFA(::System::UInt32 a1, ::System::UInt32 a2, ::Struct_2_0814C3CA012BD292 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Struct_2_0814C3CA012BD292))((::PBYTE)hIl2Cpp + CLASS_2_56F8A5D61E2306A2_METHOD_2_0998A02BAA295AFA_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_0A1D252F3DC67906(::System::UInt32 a1, ::Struct_2_0814C3CA012BD292 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Struct_2_0814C3CA012BD292))((::PBYTE)hIl2Cpp + CLASS_2_56F8A5D61E2306A2_METHOD_2_0A1D252F3DC67906_OFFSET))(this, a1, a2);
	}
};
