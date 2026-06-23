#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_54FCE7C27CC6FA7F.h"
#include "unitysdk/System/Object.h"

class Class_2_02D73D6F71BFD29F;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_2_02D73D6F71BFD29F_CLASS_1_1FC77CB93D40C49B_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x17FED490)
#define CLASS_2_02D73D6F71BFD29F_CLASS_1_1FC77CB93D40C49B__CTOR_OFFSET UNITYSDK_OFFSET(0x17FED480)

inline static constexpr unsigned int Class_2_02D73D6F71BFD29F_Class_1_1FC77CB93D40C49B_TypeDefinitionIndex = 75576;

class Class_2_02D73D6F71BFD29F_Class_1_1FC77CB93D40C49B : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_2; // 0x10
	::System::String* Field_1_3; // 0x18
	::Class_2_02D73D6F71BFD29F* Field_1_0; // 0x20
	::Struct_2_54FCE7C27CC6FA7F Field_1_5; // 0x28
	::System::Int32 Field_1_1; // 0x48
	::System::Int32 Field_1_4; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_CLASS_1_1FC77CB93D40C49B__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_CLASS_1_1FC77CB93D40C49B_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
