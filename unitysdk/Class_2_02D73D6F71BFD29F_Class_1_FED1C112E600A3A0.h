#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F00DC819D834EFD2.h"
#include "unitysdk/Struct_2_733B8EC4B9916061.h"
#include "unitysdk/System/Object.h"

class Class_1_D65512A83CF70AB7;
class Class_2_02D73D6F71BFD29F;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_02D73D6F71BFD29F_CLASS_1_FED1C112E600A3A0_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xFBB9E20)
#define CLASS_2_02D73D6F71BFD29F_CLASS_1_FED1C112E600A3A0__CTOR_OFFSET UNITYSDK_OFFSET(0xFBB9E10)

inline static constexpr unsigned int Class_2_02D73D6F71BFD29F_Class_1_FED1C112E600A3A0_TypeDefinitionIndex = 75579;

class Class_2_02D73D6F71BFD29F_Class_1_FED1C112E600A3A0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_1_3; // 0x10
	::Class_2_02D73D6F71BFD29F* Field_1_0; // 0x18
	::System::String* Field_1_4; // 0x20
	::System::Action_1<::Class_1_D65512A83CF70AB7*>* Field_1_2; // 0x28
	::Enum_3_F00DC819D834EFD2 Field_1_5; // 0x30
	::Struct_2_733B8EC4B9916061 Field_1_6; // 0x34
	::System::Int32 Field_1_1; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_CLASS_1_FED1C112E600A3A0__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_CLASS_1_FED1C112E600A3A0_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
