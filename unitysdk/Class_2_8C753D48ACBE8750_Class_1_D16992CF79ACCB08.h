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

#define CLASS_2_8C753D48ACBE8750_CLASS_1_D16992CF79ACCB08_METHOD_1_3E51EEFB06718274_OFFSET UNITYSDK_OFFSET(0x1126A500)
#define CLASS_2_8C753D48ACBE8750_CLASS_1_D16992CF79ACCB08__CTOR_OFFSET UNITYSDK_OFFSET(0x1126A4F0)

inline static constexpr unsigned int Class_2_8C753D48ACBE8750_Class_1_D16992CF79ACCB08_TypeDefinitionIndex = 53603;

class Class_2_8C753D48ACBE8750_Class_1_D16992CF79ACCB08 : public ::System::Object
{
public:
	::Struct_2_596DA7D950138634 Field_1_9; // 0x10
	::Class_2_8C753D48ACBE8750* Field_1_0; // 0x30
	::System::Action_1<::Class_2_CEC585D0736F3660*>* Field_1_6; // 0x38
	::System::String* Field_1_4; // 0x40
	::MoleMole::Battle::Entity* Field_1_8; // 0x48
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_1_5; // 0x50
	::System::Int32 Field_1_7; // 0x58
	::Struct_2_733B8EC4B9916061 Field_1_10; // 0x5C
	::Enum_3_F00DC819D834EFD2 Field_1_11; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_CLASS_1_D16992CF79ACCB08__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_3E51EEFB06718274()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_CLASS_1_D16992CF79ACCB08_METHOD_1_3E51EEFB06718274_OFFSET))(this);
	}
};
