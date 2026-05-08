#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_15;
namespace MoleMole { class UITabBtn03RowScrollViewWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_208F86C6FC69A766_METHOD_1_B182B5B164EB8D50_OFFSET UNITYSDK_OFFSET(0x12852BC0)
#define CLASS_1_208F86C6FC69A766__CTOR_OFFSET UNITYSDK_OFFSET(0x12852C70)

inline static constexpr unsigned int Class_1_208F86C6FC69A766_TypeDefinitionIndex = 65806;

class Class_1_208F86C6FC69A766 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_15*>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_208F86C6FC69A766__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B182B5B164EB8D50(::MoleMole::UITabBtn03RowScrollViewWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITabBtn03RowScrollViewWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_208F86C6FC69A766_METHOD_1_B182B5B164EB8D50_OFFSET))(this, a1);
	}
};
