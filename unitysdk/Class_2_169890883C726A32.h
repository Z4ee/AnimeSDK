#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EA257C4B28E4CC0D.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"

#define CLASS_2_169890883C726A32_METHOD_2_7356D42BFCF4D715_OFFSET UNITYSDK_OFFSET(0x1B717AC0)
#define CLASS_2_169890883C726A32_METHOD_2_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x1B717670)
#define CLASS_2_169890883C726A32_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1B717B90)
#define CLASS_2_169890883C726A32__CTOR_OFFSET UNITYSDK_OFFSET(0x1B717AB0)

inline static constexpr unsigned int Class_2_169890883C726A32_TypeDefinitionIndex = 87795;

class Class_2_169890883C726A32 : public ::Class_1_EA257C4B28E4CC0D
{
public:
	::System::Single Field_2_2; // 0x40
	::Struct_2_E614D3B245F96744_1 Field_2_0; // 0x44
	::System::Single Field_2_1; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_169890883C726A32__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_169890883C726A32_METHOD_2_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_2_7356D42BFCF4D715(::System::Single a1, ::System::Single a2, ::Struct_2_E614D3B245F96744_1 a3, ::Struct_2_E614D3B245F96744_1 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::Struct_2_E614D3B245F96744_1, ::Struct_2_E614D3B245F96744_1))((::PBYTE)hIl2Cpp + CLASS_2_169890883C726A32_METHOD_2_7356D42BFCF4D715_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_169890883C726A32_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
