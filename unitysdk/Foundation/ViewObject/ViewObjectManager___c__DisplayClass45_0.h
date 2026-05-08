#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0xF5D2980)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS45_0___REALGETVOGROUPSTATEVALUE_B__0_OFFSET UNITYSDK_OFFSET(0xF5D2990)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS45_0___REALGETVOGROUPSTATEVALUE_B__1_OFFSET UNITYSDK_OFFSET(0xF5D2A50)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c__DisplayClass45_0_TypeDefinitionIndex = 66388;

	class ViewObjectManager___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::System::String* stateName; // 0x10
		::System::Action_2<::System::Boolean, ::System::Int32>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Void __RealGetVOGroupStateValue_b__0(::Class_0_16E4307DCC419505_11* success)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS45_0___REALGETVOGROUPSTATEVALUE_B__0_OFFSET))(this, success);
		}

		::System::Void __RealGetVOGroupStateValue_b__1(::Class_0_16E4307DCC419505_11* error)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS45_0___REALGETVOGROUPSTATEVALUE_B__1_OFFSET))(this, error);
		}
	};
}
