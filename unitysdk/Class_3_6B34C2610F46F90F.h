#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_6B34C2610F46F90F_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11677110)
#define CLASS_3_6B34C2610F46F90F_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11677490)
#define CLASS_3_6B34C2610F46F90F_METHOD_3_D31DB5B9F5D277C0_OFFSET UNITYSDK_OFFSET(0x116771A0)
#define CLASS_3_6B34C2610F46F90F__CTOR_OFFSET UNITYSDK_OFFSET(0x116773F0)

inline static constexpr unsigned int Class_3_6B34C2610F46F90F_TypeDefinitionIndex = 76702;

class Class_3_6B34C2610F46F90F : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_8D3E479B491881B3<::UnityEngine::Vector3>* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6B34C2610F46F90F__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6B34C2610F46F90F_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_D31DB5B9F5D277C0(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_6B34C2610F46F90F_METHOD_3_D31DB5B9F5D277C0_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6B34C2610F46F90F_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
