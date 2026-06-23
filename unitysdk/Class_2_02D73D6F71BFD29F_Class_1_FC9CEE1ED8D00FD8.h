#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_54FCE7C27CC6FA7F.h"
#include "unitysdk/System/Object.h"

class Class_2_02D73D6F71BFD29F;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_2_02D73D6F71BFD29F_CLASS_1_FC9CEE1ED8D00FD8_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xE056860)
#define CLASS_2_02D73D6F71BFD29F_CLASS_1_FC9CEE1ED8D00FD8__CTOR_OFFSET UNITYSDK_OFFSET(0xE056850)

inline static constexpr unsigned int Class_2_02D73D6F71BFD29F_Class_1_FC9CEE1ED8D00FD8_TypeDefinitionIndex = 75568;

class Class_2_02D73D6F71BFD29F_Class_1_FC9CEE1ED8D00FD8 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::Struct_2_54FCE7C27CC6FA7F Field_1_5; // 0x18
	::System::String* Field_1_4; // 0x38
	::Class_2_02D73D6F71BFD29F* Field_1_0; // 0x40
	::MoleMole::Battle::Entity* Field_1_3; // 0x48
	::System::Int32 Field_1_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_CLASS_1_FC9CEE1ED8D00FD8__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_CLASS_1_FC9CEE1ED8D00FD8_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}
};
