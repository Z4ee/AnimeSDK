#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_21;
namespace MoleMole { class UITabBtn03RowScrollViewWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1910126201EC593B_METHOD_1_477DA416C480A143_OFFSET UNITYSDK_OFFSET(0x13163150)
#define CLASS_1_1910126201EC593B__CTOR_OFFSET UNITYSDK_OFFSET(0x13163230)

inline static constexpr unsigned int Class_1_1910126201EC593B_TypeDefinitionIndex = 71218;

class Class_1_1910126201EC593B : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_21*>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1910126201EC593B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_477DA416C480A143(::MoleMole::UITabBtn03RowScrollViewWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITabBtn03RowScrollViewWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_1910126201EC593B_METHOD_1_477DA416C480A143_OFFSET))(this, a1);
	}
};
