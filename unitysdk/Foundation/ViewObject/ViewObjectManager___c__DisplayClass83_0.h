#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
namespace System { template <typename T> class Action_1; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS83_0__CTOR_OFFSET UNITYSDK_OFFSET(0x132796F0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS83_0__MARKGROUPCOMPLETE_B__0_OFFSET UNITYSDK_OFFSET(0x13279700)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS83_0__MARKGROUPCOMPLETE_B__1_OFFSET UNITYSDK_OFFSET(0x13279750)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c__DisplayClass83_0_TypeDefinitionIndex = 66410;

	class ViewObjectManager___c__DisplayClass83_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS83_0__CTOR_OFFSET))(this);
		}

		::System::Void _MarkGroupComplete_b__0(::Class_0_16E4307DCC419505_11* message)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS83_0__MARKGROUPCOMPLETE_B__0_OFFSET))(this, message);
		}

		::System::Void _MarkGroupComplete_b__1(::Class_0_16E4307DCC419505_11* err)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS83_0__MARKGROUPCOMPLETE_B__1_OFFSET))(this, err);
		}
	};
}
