#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
namespace System { template <typename T> class Action_1; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS103_0__CTOR_OFFSET UNITYSDK_OFFSET(0x147997F0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS103_0__MARKGROUPCOMPLETE_B__0_OFFSET UNITYSDK_OFFSET(0x14799800)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS103_0__MARKGROUPCOMPLETE_B__1_OFFSET UNITYSDK_OFFSET(0x14799850)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c__DisplayClass103_0_TypeDefinitionIndex = 55562;

	class ViewObjectManager___c__DisplayClass103_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS103_0__CTOR_OFFSET))(this);
		}

		::System::Void _MarkGroupComplete_b__0(::Class_0_16E4307DCC419505_36* message)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS103_0__MARKGROUPCOMPLETE_B__0_OFFSET))(this, message);
		}

		::System::Void _MarkGroupComplete_b__1(::Class_0_16E4307DCC419505_36* err)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS103_0__MARKGROUPCOMPLETE_B__1_OFFSET))(this, err);
		}
	};
}
