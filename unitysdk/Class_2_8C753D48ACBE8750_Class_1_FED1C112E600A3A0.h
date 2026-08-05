#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F00DC819D834EFD2.h"
#include "unitysdk/Struct_2_596DA7D950138634.h"
#include "unitysdk/Struct_2_733B8EC4B9916061.h"
#include "unitysdk/System/Object.h"

class Class_2_8C753D48ACBE8750;
class Class_2_CEC585D0736F3660;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_8C753D48ACBE8750_CLASS_1_FED1C112E600A3A0_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1028F2A0)
#define CLASS_2_8C753D48ACBE8750_CLASS_1_FED1C112E600A3A0__CTOR_OFFSET UNITYSDK_OFFSET(0x1028F290)

inline static constexpr unsigned int Class_2_8C753D48ACBE8750_Class_1_FED1C112E600A3A0_TypeDefinitionIndex = 53591;

class Class_2_8C753D48ACBE8750_Class_1_FED1C112E600A3A0 : public ::System::Object
{
public:
	::System::String* Field_1_6; // 0x10
	::System::Action_1<::Class_2_CEC585D0736F3660*>* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_1_7; // 0x20
	::Class_2_8C753D48ACBE8750* Field_1_2; // 0x28
	::Struct_2_596DA7D950138634 Field_1_11; // 0x30
	::System::Int32 Field_1_1; // 0x50
	::Struct_2_733B8EC4B9916061 Field_1_4; // 0x54
	::Enum_3_F00DC819D834EFD2 Field_1_5; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_CLASS_1_FED1C112E600A3A0__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_CLASS_1_FED1C112E600A3A0_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
