#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
namespace Foundation::ViewObject { class ViewObjectManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS64_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17F2A140)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS64_0___REALSETVOGROUPSTATEVALUE_B__0_OFFSET UNITYSDK_OFFSET(0x17F2A150)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS64_0___REALSETVOGROUPSTATEVALUE_B__1_OFFSET UNITYSDK_OFFSET(0x17F2A240)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c__DisplayClass64_0_TypeDefinitionIndex = 55573;

	class ViewObjectManager___c__DisplayClass64_0 : public ::System::Object
	{
	public:
		::Foundation::ViewObject::ViewObjectManager* __4__this; // 0x10
		::System::String* stateName; // 0x18
		::System::Action_1<::System::Boolean>* callback; // 0x20
		::System::Int32 value; // 0x28
		::Foundation::ViewObject::GroupMemberIdentifier identifier; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS64_0__CTOR_OFFSET))(this);
		}

		::System::Void __RealSetVOGroupStateValue_b__0(::Class_0_16E4307DCC419505_36* success)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS64_0___REALSETVOGROUPSTATEVALUE_B__0_OFFSET))(this, success);
		}

		::System::Void __RealSetVOGroupStateValue_b__1(::Class_0_16E4307DCC419505_36* error)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS64_0___REALSETVOGROUPSTATEVALUE_B__1_OFFSET))(this, error);
		}
	};
}
