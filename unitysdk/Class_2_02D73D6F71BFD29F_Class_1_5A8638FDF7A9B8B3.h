#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F00DC819D834EFD2.h"
#include "unitysdk/System/Object.h"

class Class_2_02D73D6F71BFD29F;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_2_02D73D6F71BFD29F_CLASS_1_5A8638FDF7A9B8B3_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x102F33D0)
#define CLASS_2_02D73D6F71BFD29F_CLASS_1_5A8638FDF7A9B8B3_METHOD_1_95CBA07394A84492_OFFSET UNITYSDK_OFFSET(0x102F3540)
#define CLASS_2_02D73D6F71BFD29F_CLASS_1_5A8638FDF7A9B8B3_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x102F3C80)
#define CLASS_2_02D73D6F71BFD29F_CLASS_1_5A8638FDF7A9B8B3__CTOR_OFFSET UNITYSDK_OFFSET(0x102F33C0)

inline static constexpr unsigned int Class_2_02D73D6F71BFD29F_Class_1_5A8638FDF7A9B8B3_TypeDefinitionIndex = 75575;

class Class_2_02D73D6F71BFD29F_Class_1_5A8638FDF7A9B8B3 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::MoleMole::Battle::Entity* Field_1_1; // 0x18
	::Class_2_02D73D6F71BFD29F* Field_1_0; // 0x20
	::System::UInt32 Field_1_4; // 0x28
	::Enum_3_F00DC819D834EFD2 Field_1_3; // 0x2C
	::System::Boolean Field_1_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_CLASS_1_5A8638FDF7A9B8B3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_CLASS_1_5A8638FDF7A9B8B3_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_95CBA07394A84492(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_CLASS_1_5A8638FDF7A9B8B3_METHOD_1_95CBA07394A84492_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_CLASS_1_5A8638FDF7A9B8B3_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}
};
