#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_3658EDFC90175F78_1_METHOD_3_1AB393A627D53235_OFFSET UNITYSDK_OFFSET(0x1CDB87B0)
#define CLASS_3_3658EDFC90175F78_1_METHOD_3_2D7F1F3EE65089A0_OFFSET UNITYSDK_OFFSET(0x1CDB8770)
#define CLASS_3_3658EDFC90175F78_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB87A0)

inline static constexpr unsigned int Class_3_3658EDFC90175F78_1_TypeDefinitionIndex = 22372;

class Class_3_3658EDFC90175F78_1 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::UInt32 KGCHOCCBMHK; // 0x18
	::System::UInt32 LOMMDIBKAJB; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3658EDFC90175F78_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2D7F1F3EE65089A0(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3658EDFC90175F78_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3658EDFC90175F78_1*&))((::PBYTE)hIl2Cpp + CLASS_3_3658EDFC90175F78_1_METHOD_3_2D7F1F3EE65089A0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1AB393A627D53235(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3658EDFC90175F78_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3658EDFC90175F78_1*))((::PBYTE)hIl2Cpp + CLASS_3_3658EDFC90175F78_1_METHOD_3_1AB393A627D53235_OFFSET))(a1, a2);
	}
};
