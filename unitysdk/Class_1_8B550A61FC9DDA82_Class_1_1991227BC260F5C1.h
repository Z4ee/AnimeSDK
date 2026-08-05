#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
namespace MoleMole { class UIWindowController; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8B550A61FC9DDA82_CLASS_1_1991227BC260F5C1_METHOD_1_653644BEE1098C14_OFFSET UNITYSDK_OFFSET(0x12943D40)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_1991227BC260F5C1_METHOD_1_BC921F4876135ACB_OFFSET UNITYSDK_OFFSET(0x12943BA0)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_1991227BC260F5C1__CTOR_OFFSET UNITYSDK_OFFSET(0x12943B90)

inline static constexpr unsigned int Class_1_8B550A61FC9DDA82_Class_1_1991227BC260F5C1_TypeDefinitionIndex = 50193;

class Class_1_8B550A61FC9DDA82_Class_1_1991227BC260F5C1 : public ::System::Object
{
public:
	::MoleMole::UIWindowController* Field_1_7; // 0x10
	::System::Action_1<::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*>* Field_1_6; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_1991227BC260F5C1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BC921F4876135ACB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_1991227BC260F5C1_METHOD_1_BC921F4876135ACB_OFFSET))(this, a1);
	}

	::System::Void Method_1_653644BEE1098C14(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_1991227BC260F5C1_METHOD_1_653644BEE1098C14_OFFSET))(this, a1);
	}
};
