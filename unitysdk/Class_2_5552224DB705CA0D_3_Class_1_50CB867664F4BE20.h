#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_5552224DB705CA0D_3_Class_1_C85822BDDEBA98C1;
class MonoUITableScrollV2;
class UIWidgetGroup;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_5552224DB705CA0D_3_CLASS_1_50CB867664F4BE20_METHOD_1_6DF8178B4D2AFE11_OFFSET UNITYSDK_OFFSET(0x158DC350)
#define CLASS_2_5552224DB705CA0D_3_CLASS_1_50CB867664F4BE20__CTOR_OFFSET UNITYSDK_OFFSET(0x158DC340)

inline static constexpr unsigned int Class_2_5552224DB705CA0D_3_Class_1_50CB867664F4BE20_TypeDefinitionIndex = 78381;

class Class_2_5552224DB705CA0D_3_Class_1_50CB867664F4BE20 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_5552224DB705CA0D_3_Class_1_C85822BDDEBA98C1*>*>* Field_1_6; // 0x10
	::System::Func_2<::MonoUITableScrollV2*, ::UIWidgetGroup*>* Field_1_4; // 0x18
	::System::String* Field_1_5; // 0x20
	::System::Action_1<::System::Int32>* Field_1_1; // 0x28
	::System::Collections::Generic::List_1<::Class_2_5552224DB705CA0D_3_Class_1_C85822BDDEBA98C1*>* Field_1_7; // 0x30
	::System::Boolean Field_1_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5552224DB705CA0D_3_CLASS_1_50CB867664F4BE20__CTOR_OFFSET))(this);
	}

	::Class_2_5552224DB705CA0D_3_Class_1_C85822BDDEBA98C1* Method_1_6DF8178B4D2AFE11(::System::Int32 a1)
	{
		return ((::Class_2_5552224DB705CA0D_3_Class_1_C85822BDDEBA98C1*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5552224DB705CA0D_3_CLASS_1_50CB867664F4BE20_METHOD_1_6DF8178B4D2AFE11_OFFSET))(this, a1);
	}
};
