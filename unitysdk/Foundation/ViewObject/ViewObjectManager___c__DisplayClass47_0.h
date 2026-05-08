#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
namespace Foundation::ViewObject { class ViewObjectManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13817180)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS47_0__SETSTATEVALUEIMMEDIATELY_B__0_OFFSET UNITYSDK_OFFSET(0x13817190)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS47_0__SETSTATEVALUEIMMEDIATELY_B__1_OFFSET UNITYSDK_OFFSET(0x13817280)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS47_0__SETSTATEVALUEIMMEDIATELY_B__2_OFFSET UNITYSDK_OFFSET(0x138172D0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS47_0__SETSTATEVALUEIMMEDIATELY_B__3_OFFSET UNITYSDK_OFFSET(0x138173C0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c__DisplayClass47_0_TypeDefinitionIndex = 66402;

	class ViewObjectManager___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::Foundation::ViewObject::ViewObjectManager* __4__this; // 0x10
		::System::String* stateName; // 0x18
		::System::Action_1<::System::Boolean>* callback; // 0x20
		::Foundation::ViewObject::GroupMemberIdentifier identifier; // 0x28
		::System::Int32 value; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetStateValueImmediately_b__0(::Class_0_16E4307DCC419505_11* success)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS47_0__SETSTATEVALUEIMMEDIATELY_B__0_OFFSET))(this, success);
		}

		::System::Void _SetStateValueImmediately_b__1(::Class_0_16E4307DCC419505_11* error)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS47_0__SETSTATEVALUEIMMEDIATELY_B__1_OFFSET))(this, error);
		}

		::System::Void _SetStateValueImmediately_b__2(::Class_0_16E4307DCC419505_11* success)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS47_0__SETSTATEVALUEIMMEDIATELY_B__2_OFFSET))(this, success);
		}

		::System::Void _SetStateValueImmediately_b__3(::Class_0_16E4307DCC419505_11* error)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS47_0__SETSTATEVALUEIMMEDIATELY_B__3_OFFSET))(this, error);
		}
	};
}
