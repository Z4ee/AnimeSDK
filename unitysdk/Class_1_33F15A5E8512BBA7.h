#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7AEF4D15E4700EEA.h"
#include "unitysdk/System/Object.h"

class Class_1_59ACE1D68DDF9B15;
class Class_1_C9FCD193B2E091DD;
namespace MoleMole { class ActivityWidgetContext; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_33F15A5E8512BBA7_METHOD_1_2EA0E19C27E7D93B_OFFSET UNITYSDK_OFFSET(0x13A1D410)
#define CLASS_1_33F15A5E8512BBA7_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x13A1C250)
#define CLASS_1_33F15A5E8512BBA7__CTOR_OFFSET UNITYSDK_OFFSET(0x13A1C240)

inline static constexpr unsigned int Class_1_33F15A5E8512BBA7_TypeDefinitionIndex = 87123;

class Class_1_33F15A5E8512BBA7 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Enum_3_7AEF4D15E4700EEA, ::System::Func_2<::MoleMole::ActivityWidgetContext*, ::Class_1_C9FCD193B2E091DD*>*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::Enum_3_7AEF4D15E4700EEA, ::System::Action_2<::Class_1_59ACE1D68DDF9B15*, ::MoleMole::UIControllerContextBase*>*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33F15A5E8512BBA7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33F15A5E8512BBA7_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_2EA0E19C27E7D93B(::Class_1_59ACE1D68DDF9B15* a1, ::MoleMole::UIControllerContextBase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_59ACE1D68DDF9B15*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_1_33F15A5E8512BBA7_METHOD_1_2EA0E19C27E7D93B_OFFSET))(this, a1, a2);
	}
};
