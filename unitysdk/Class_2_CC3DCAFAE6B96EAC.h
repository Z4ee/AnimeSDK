#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B71B8F6C53040516.h"

namespace System { class Object; }

#define CLASS_2_CC3DCAFAE6B96EAC_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x156E70D0)
#define CLASS_2_CC3DCAFAE6B96EAC_METHOD_2_4E140453C4B32F06_OFFSET UNITYSDK_OFFSET(0x156E70E0)
#define CLASS_2_CC3DCAFAE6B96EAC_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x156E71D0)
#define CLASS_2_CC3DCAFAE6B96EAC_RESET_OFFSET UNITYSDK_OFFSET(0x156E7150)
#define CLASS_2_CC3DCAFAE6B96EAC__CTOR_OFFSET UNITYSDK_OFFSET(0x156E70C0)

inline static constexpr unsigned int Class_2_CC3DCAFAE6B96EAC_TypeDefinitionIndex = 79385;

class Class_2_CC3DCAFAE6B96EAC : public ::Class_1_B71B8F6C53040516
{
public:
	::System::Single Field_2_0; // 0x20
	::System::Single Field_2_1; // 0x24

	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CC3DCAFAE6B96EAC__CTOR_OFFSET))(this, a1);
	}

	::System::Object* get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC3DCAFAE6B96EAC_GET_CURRENT_OFFSET))(this);
	}

	::System::Boolean Method_2_4E140453C4B32F06(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CC3DCAFAE6B96EAC_METHOD_2_4E140453C4B32F06_OFFSET))(this, a1);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC3DCAFAE6B96EAC_RESET_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC3DCAFAE6B96EAC_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
