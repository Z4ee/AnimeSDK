#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D3F97394EEAB34D6.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_10A6147EB6588722_CLEAR_OFFSET UNITYSDK_OFFSET(0x16812040)
#define CLASS_2_10A6147EB6588722__CTOR_OFFSET UNITYSDK_OFFSET(0x168120A0)
#define CLASS_2_10A6147EB6588722___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x168120B0)

inline static constexpr unsigned int Class_2_10A6147EB6588722_TypeDefinitionIndex = 33556;

class Class_2_10A6147EB6588722 : public ::Class_1_D3F97394EEAB34D6
{
public:
	::UnityEngine::Vector3 Field_2_0; // 0x338
	::System::Single Field_2_1; // 0x344

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10A6147EB6588722__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10A6147EB6588722_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10A6147EB6588722___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
