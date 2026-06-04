#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A3B9FD0FE703FDC.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_ED829FF84ACB418C_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x18D490D0)
#define CLASS_2_ED829FF84ACB418C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18D49130)
#define CLASS_2_ED829FF84ACB418C_1___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x18D49140)

inline static constexpr unsigned int Class_2_ED829FF84ACB418C_1_TypeDefinitionIndex = 40125;

class Class_2_ED829FF84ACB418C_1 : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::UnityEngine::Vector3 Field_2_0; // 0x338

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED829FF84ACB418C_1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED829FF84ACB418C_1_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED829FF84ACB418C_1___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
