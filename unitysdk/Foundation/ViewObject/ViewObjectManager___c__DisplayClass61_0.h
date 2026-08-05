#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS61_0__CTOR_OFFSET UNITYSDK_OFFSET(0x132749F0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS61_0___REALGETVOGROUPSTATEVALUE_B__0_OFFSET UNITYSDK_OFFSET(0x13274A00)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS61_0___REALGETVOGROUPSTATEVALUE_B__1_OFFSET UNITYSDK_OFFSET(0x13274AC0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c__DisplayClass61_0_TypeDefinitionIndex = 55546;

	class ViewObjectManager___c__DisplayClass61_0 : public ::System::Object
	{
	public:
		::System::Action_2<::System::Boolean, ::System::Int32>* callback; // 0x10
		::System::String* stateName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS61_0__CTOR_OFFSET))(this);
		}

		::System::Void __RealGetVOGroupStateValue_b__0(::Class_0_16E4307DCC419505_36* success)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS61_0___REALGETVOGROUPSTATEVALUE_B__0_OFFSET))(this, success);
		}

		::System::Void __RealGetVOGroupStateValue_b__1(::Class_0_16E4307DCC419505_36* error)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS61_0___REALGETVOGROUPSTATEVALUE_B__1_OFFSET))(this, error);
		}
	};
}
