#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_3AD7450D1E94454F_4_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x14C7CE80)
#define CLASS_2_3AD7450D1E94454F_4_METHOD_2_A3E94568D5184024_OFFSET UNITYSDK_OFFSET(0x14C7CFA0)
#define CLASS_2_3AD7450D1E94454F_4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14C7CF10)
#define CLASS_2_3AD7450D1E94454F_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C7CE00)
#define CLASS_2_3AD7450D1E94454F_4__CTOR_OFFSET UNITYSDK_OFFSET(0x14C7CE70)

inline static constexpr unsigned int Class_2_3AD7450D1E94454F_4_TypeDefinitionIndex = 65490;

class Class_2_3AD7450D1E94454F_4 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0x82; // 0x0
	::System::Int32 Field_2_0; // 0x20
	::System::Int32 Field_2_1; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3AD7450D1E94454F_4__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AD7450D1E94454F_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AD7450D1E94454F_4_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AD7450D1E94454F_4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_A3E94568D5184024(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3AD7450D1E94454F_4_METHOD_2_A3E94568D5184024_OFFSET))(this, a1, a2);
	}
};
