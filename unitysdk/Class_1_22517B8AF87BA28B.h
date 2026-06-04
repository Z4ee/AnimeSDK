#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_22517B8AF87BA28B_METHOD_1_A11DA571CFC922B3_OFFSET UNITYSDK_OFFSET(0x19E8B760)
#define CLASS_1_22517B8AF87BA28B__CTOR_OFFSET UNITYSDK_OFFSET(0x19E8B8B0)

inline static constexpr unsigned int Class_1_22517B8AF87BA28B_TypeDefinitionIndex = 13239;

class Class_1_22517B8AF87BA28B : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::RPG::GameCore::ItemRarity Field_1_1; // 0x14
	::RPG::GameCore::ItemSubType Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22517B8AF87BA28B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_A11DA571CFC922B3(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_22517B8AF87BA28B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_22517B8AF87BA28B*&))((::PBYTE)hIl2Cpp + CLASS_1_22517B8AF87BA28B_METHOD_1_A11DA571CFC922B3_OFFSET))(a1, a2);
	}
};
