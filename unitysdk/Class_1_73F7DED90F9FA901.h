#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_D65512A83CF70AB7;
class Class_1_DD623DBDE484C8A1;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_73F7DED90F9FA901__CTOR_OFFSET UNITYSDK_OFFSET(0x10134D80)

inline static constexpr unsigned int Class_1_73F7DED90F9FA901_TypeDefinitionIndex = 55366;

class Class_1_73F7DED90F9FA901 : public ::System::Object
{
public:
	::System::Action_1<::Class_1_D65512A83CF70AB7*>* Field_1_6; // 0x10
	::System::Action_1<::Class_1_D65512A83CF70AB7*>* Field_1_5; // 0x18
	::Class_1_DD623DBDE484C8A1* Field_1_3; // 0x20
	::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* Field_1_4; // 0x28
	::System::String* Field_1_1; // 0x30
	::System::Int32 Field_1_2; // 0x38
	::System::Int32 Field_1_0; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73F7DED90F9FA901__CTOR_OFFSET))(this);
	}
};
