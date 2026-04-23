#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D3F97394EEAB34D6.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_ED829FF84ACB418C_CLEAR_OFFSET UNITYSDK_OFFSET(0x17EDD390)
#define CLASS_2_ED829FF84ACB418C__CTOR_OFFSET UNITYSDK_OFFSET(0x17EDD3F0)
#define CLASS_2_ED829FF84ACB418C___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x17EDD400)

inline static constexpr unsigned int Class_2_ED829FF84ACB418C_TypeDefinitionIndex = 39353;

class Class_2_ED829FF84ACB418C : public ::Class_1_D3F97394EEAB34D6
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
