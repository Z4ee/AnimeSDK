#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_5552224DB705CA0D_1_Class_1_C85822BDDEBA98C1;
class MonoUITableScrollV2;
class UIWidgetGroup;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_5552224DB705CA0D_1_CLASS_1_C05F69E9D131AC43_METHOD_1_C41128796CCBD860_OFFSET UNITYSDK_OFFSET(0x188582A0)
#define CLASS_2_5552224DB705CA0D_1_CLASS_1_C05F69E9D131AC43__CTOR_OFFSET UNITYSDK_OFFSET(0x18858290)

inline static constexpr unsigned int Class_2_5552224DB705CA0D_1_Class_1_C05F69E9D131AC43_TypeDefinitionIndex = 78669;

class Class_2_5552224DB705CA0D_1_Class_1_C05F69E9D131AC43 : public ::System::Object
{
public:
	::System::Func_2<::MonoUITableScrollV2*, ::UIWidgetGroup*>* Field_1_5; // 0x10
	::System::Action_1<::System::Int32>* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::Class_2_5552224DB705CA0D_1_Class_1_C85822BDDEBA98C1*>* Field_1_2; // 0x20
	::System::String* Field_1_4; // 0x28
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_5552224DB705CA0D_1_Class_1_C85822BDDEBA98C1*>*>* Field_1_3; // 0x30
	::System::Boolean Field_1_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5552224DB705CA0D_1_CLASS_1_C05F69E9D131AC43__CTOR_OFFSET))(this);
	}

	::Class_2_5552224DB705CA0D_1_Class_1_C85822BDDEBA98C1* Method_1_C41128796CCBD860(::System::Int32 a1)
	{
		return ((::Class_2_5552224DB705CA0D_1_Class_1_C85822BDDEBA98C1*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5552224DB705CA0D_1_CLASS_1_C05F69E9D131AC43_METHOD_1_C41128796CCBD860_OFFSET))(this, a1);
	}
};
