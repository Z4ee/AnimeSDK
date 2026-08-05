#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_14;
namespace MoleMole { class UITabBtn03RowScrollViewWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1910126201EC593B_METHOD_1_477DA416C480A143_OFFSET UNITYSDK_OFFSET(0x18B82A80)
#define CLASS_1_1910126201EC593B__CTOR_OFFSET UNITYSDK_OFFSET(0x18B82B60)

inline static constexpr unsigned int Class_1_1910126201EC593B_TypeDefinitionIndex = 60251;

class Class_1_1910126201EC593B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_14*>* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1910126201EC593B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_477DA416C480A143(::MoleMole::UITabBtn03RowScrollViewWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITabBtn03RowScrollViewWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_1910126201EC593B_METHOD_1_477DA416C480A143_OFFSET))(this, a1);
	}
};
