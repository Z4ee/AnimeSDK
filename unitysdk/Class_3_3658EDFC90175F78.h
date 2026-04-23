#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_3658EDFC90175F78_METHOD_3_1AB393A627D53235_OFFSET UNITYSDK_OFFSET(0x183C3CB0)
#define CLASS_3_3658EDFC90175F78_METHOD_3_C6AAD90EBB6BB822_OFFSET UNITYSDK_OFFSET(0x183C3C30)
#define CLASS_3_3658EDFC90175F78__CTOR_OFFSET UNITYSDK_OFFSET(0x183C3C80)

inline static constexpr unsigned int Class_3_3658EDFC90175F78_TypeDefinitionIndex = 10118;

class Class_3_3658EDFC90175F78 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::UInt32 Field_3_1; // 0x18
	::System::UInt32 Field_3_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3658EDFC90175F78__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6AAD90EBB6BB822(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3658EDFC90175F78*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3658EDFC90175F78*&))((::PBYTE)hIl2Cpp + CLASS_3_3658EDFC90175F78_METHOD_3_C6AAD90EBB6BB822_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1AB393A627D53235(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3658EDFC90175F78* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3658EDFC90175F78*))((::PBYTE)hIl2Cpp + CLASS_3_3658EDFC90175F78_METHOD_3_1AB393A627D53235_OFFSET))(a1, a2);
	}
};
