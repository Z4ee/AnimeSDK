#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
namespace Foundation::ViewObject { class ViewObjectManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS62_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10838E90)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS62_0__SETSTATEVALUEIMMEDIATELY_B__0_OFFSET UNITYSDK_OFFSET(0x10838EA0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS62_0__SETSTATEVALUEIMMEDIATELY_B__1_OFFSET UNITYSDK_OFFSET(0x10838F90)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS62_0__SETSTATEVALUEIMMEDIATELY_B__2_OFFSET UNITYSDK_OFFSET(0x10838FE0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS62_0__SETSTATEVALUEIMMEDIATELY_B__3_OFFSET UNITYSDK_OFFSET(0x108390D0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c__DisplayClass62_0_TypeDefinitionIndex = 73610;

	class ViewObjectManager___c__DisplayClass62_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* callback; // 0x10
		::Foundation::ViewObject::ViewObjectManager* __4__this; // 0x18
		::System::String* stateName; // 0x20
		::System::Int32 value; // 0x28
		::Foundation::ViewObject::GroupMemberIdentifier identifier; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS62_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetStateValueImmediately_b__0(::Class_0_16E4307DCC419505_29* success)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS62_0__SETSTATEVALUEIMMEDIATELY_B__0_OFFSET))(this, success);
		}

		::System::Void _SetStateValueImmediately_b__1(::Class_0_16E4307DCC419505_29* error)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS62_0__SETSTATEVALUEIMMEDIATELY_B__1_OFFSET))(this, error);
		}

		::System::Void _SetStateValueImmediately_b__2(::Class_0_16E4307DCC419505_29* success)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS62_0__SETSTATEVALUEIMMEDIATELY_B__2_OFFSET))(this, success);
		}

		::System::Void _SetStateValueImmediately_b__3(::Class_0_16E4307DCC419505_29* error)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS62_0__SETSTATEVALUEIMMEDIATELY_B__3_OFFSET))(this, error);
		}
	};
}
