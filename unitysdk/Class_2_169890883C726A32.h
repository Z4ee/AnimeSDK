#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EA257C4B28E4CC0D.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"

#define CLASS_2_169890883C726A32_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x1CF76060)
#define CLASS_2_169890883C726A32_METHOD_2_7356D42BFCF4D715_OFFSET UNITYSDK_OFFSET(0x1CF76490)
#define CLASS_2_169890883C726A32_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1CF76560)
#define CLASS_2_169890883C726A32__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF76480)

inline static constexpr unsigned int Class_2_169890883C726A32_TypeDefinitionIndex = 92379;

class Class_2_169890883C726A32 : public ::Class_1_EA257C4B28E4CC0D
{
public:
	::Struct_2_E614D3B245F96744 Field_2_1; // 0x40
	::System::Single Field_2_0; // 0x48
	::System::Single Field_2_7; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_169890883C726A32__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_169890883C726A32_METHOD_2_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_2_7356D42BFCF4D715(::System::Single a1, ::System::Single a2, ::Struct_2_E614D3B245F96744 a3, ::Struct_2_E614D3B245F96744 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::Struct_2_E614D3B245F96744, ::Struct_2_E614D3B245F96744))((::PBYTE)hIl2Cpp + CLASS_2_169890883C726A32_METHOD_2_7356D42BFCF4D715_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_169890883C726A32_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
