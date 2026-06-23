#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_D65512A83CF70AB7;
class Class_1_DD623DBDE484C8A1;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6B8B8EFC8C59DAD1__CTOR_OFFSET UNITYSDK_OFFSET(0xF9901F0)

inline static constexpr unsigned int Class_1_6B8B8EFC8C59DAD1_TypeDefinitionIndex = 80164;

class Class_1_6B8B8EFC8C59DAD1 : public ::System::Object
{
public:
	::System::Action_1<::Class_1_D65512A83CF70AB7*>* Field_1_6; // 0x10
	::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* Field_1_4; // 0x18
	::MoleMole::EntityHandle Field_1_5; // 0x20
	::System::Action_1<::Class_1_D65512A83CF70AB7*>* Field_1_7; // 0x30
	::System::Action* Field_1_8; // 0x38
	::Class_1_DD623DBDE484C8A1* Field_1_3; // 0x40
	::System::String* Field_1_1; // 0x48
	::System::Int32 Field_1_2; // 0x50
	::System::Int32 Field_1_0; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B8B8EFC8C59DAD1__CTOR_OFFSET))(this);
	}
};
