#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A3B9FD0FE703FDC.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_ED829FF84ACB418C_CLEAR_OFFSET UNITYSDK_OFFSET(0x18C88B30)
#define CLASS_2_ED829FF84ACB418C__CTOR_OFFSET UNITYSDK_OFFSET(0x18C88B90)
#define CLASS_2_ED829FF84ACB418C___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x18C88BA0)

inline static constexpr unsigned int Class_2_ED829FF84ACB418C_TypeDefinitionIndex = 40124;

class Class_2_ED829FF84ACB418C : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::UnityEngine::Vector3 Field_2_0; // 0x338

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED829FF84ACB418C__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED829FF84ACB418C_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED829FF84ACB418C___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
