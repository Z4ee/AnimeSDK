#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_14521B1DE226D851_METHOD_1_D44B7F51DEAAFB41_OFFSET UNITYSDK_OFFSET(0x17999C00)
#define CLASS_1_14521B1DE226D851__CTOR_OFFSET UNITYSDK_OFFSET(0x17999D20)

inline static constexpr unsigned int Class_1_14521B1DE226D851_TypeDefinitionIndex = 12693;

class Class_1_14521B1DE226D851 : public ::System::Object
{
public:
	::RPG::GameCore::ItemSubType Field_1_0; // 0x10
	::RPG::GameCore::ItemRarity Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14521B1DE226D851__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_D44B7F51DEAAFB41(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_14521B1DE226D851*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_14521B1DE226D851*&))((::PBYTE)hIl2Cpp + CLASS_1_14521B1DE226D851_METHOD_1_D44B7F51DEAAFB41_OFFSET))(a1, a2);
	}
};
