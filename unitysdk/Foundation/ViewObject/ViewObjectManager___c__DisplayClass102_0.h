#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
namespace System { template <typename T> class Action_1; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS102_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11720CA0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS102_0__MARKGROUPCOMPLETE_B__0_OFFSET UNITYSDK_OFFSET(0x11720CB0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS102_0__MARKGROUPCOMPLETE_B__1_OFFSET UNITYSDK_OFFSET(0x11720D00)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c__DisplayClass102_0_TypeDefinitionIndex = 73628;

	class ViewObjectManager___c__DisplayClass102_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS102_0__CTOR_OFFSET))(this);
		}

		::System::Void _MarkGroupComplete_b__0(::Class_0_16E4307DCC419505_29* message)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS102_0__MARKGROUPCOMPLETE_B__0_OFFSET))(this, message);
		}

		::System::Void _MarkGroupComplete_b__1(::Class_0_16E4307DCC419505_29* err)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS102_0__MARKGROUPCOMPLETE_B__1_OFFSET))(this, err);
		}
	};
}
