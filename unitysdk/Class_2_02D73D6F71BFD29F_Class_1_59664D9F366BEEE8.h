#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F00DC819D834EFD2.h"
#include "unitysdk/Struct_2_733B8EC4B9916061.h"
#include "unitysdk/System/Object.h"

class Class_1_6B8B8EFC8C59DAD1;
class Class_1_D65512A83CF70AB7;
class Class_2_02D73D6F71BFD29F;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_02D73D6F71BFD29F_CLASS_1_59664D9F366BEEE8_METHOD_1_16A7A838275A61AE_OFFSET UNITYSDK_OFFSET(0xEC06B10)
#define CLASS_2_02D73D6F71BFD29F_CLASS_1_59664D9F366BEEE8__CTOR_OFFSET UNITYSDK_OFFSET(0xEC06B00)

inline static constexpr unsigned int Class_2_02D73D6F71BFD29F_Class_1_59664D9F366BEEE8_TypeDefinitionIndex = 75567;

class Class_2_02D73D6F71BFD29F_Class_1_59664D9F366BEEE8 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_8; // 0x10
	::System::String* Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_1_3; // 0x20
	::Class_1_6B8B8EFC8C59DAD1* Field_1_7; // 0x28
	::Class_2_02D73D6F71BFD29F* Field_1_0; // 0x30
	::System::Action_1<::Class_1_D65512A83CF70AB7*>* Field_1_2; // 0x38
	::Enum_3_F00DC819D834EFD2 Field_1_5; // 0x40
	::Struct_2_733B8EC4B9916061 Field_1_6; // 0x44
	::System::Int32 Field_1_1; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_CLASS_1_59664D9F366BEEE8__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_16A7A838275A61AE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_CLASS_1_59664D9F366BEEE8_METHOD_1_16A7A838275A61AE_OFFSET))(this);
	}
};
