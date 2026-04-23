#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_FFBC8C99F6B84D8F;
namespace System { class String; }

#define CLASS_4_2BA3C4D67C30B3BA_METHOD_4_637CBE131CC2826D_OFFSET UNITYSDK_OFFSET(0x18792A70)
#define CLASS_4_2BA3C4D67C30B3BA_METHOD_4_D0DFE8D5305B9B00_OFFSET UNITYSDK_OFFSET(0x18792B90)
#define CLASS_4_2BA3C4D67C30B3BA__CTOR_OFFSET UNITYSDK_OFFSET(0x18792B10)

inline static constexpr unsigned int Class_4_2BA3C4D67C30B3BA_TypeDefinitionIndex = 19065;

class Class_4_2BA3C4D67C30B3BA : public ::RPG::GameCore::STTaskConfig
{
public:
	::System::String* Field_4_1; // 0x18
	::Il2CppArray<::Class_2_FFBC8C99F6B84D8F*>* Field_4_0; // 0x20
	::System::Single Field_4_3; // 0x28
	::System::Single Field_4_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2BA3C4D67C30B3BA__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_637CBE131CC2826D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_2BA3C4D67C30B3BA*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_2BA3C4D67C30B3BA*&))((::PBYTE)hIl2Cpp + CLASS_4_2BA3C4D67C30B3BA_METHOD_4_637CBE131CC2826D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_D0DFE8D5305B9B00(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_2BA3C4D67C30B3BA* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_2BA3C4D67C30B3BA*))((::PBYTE)hIl2Cpp + CLASS_4_2BA3C4D67C30B3BA_METHOD_4_D0DFE8D5305B9B00_OFFSET))(a1, a2);
	}
};
