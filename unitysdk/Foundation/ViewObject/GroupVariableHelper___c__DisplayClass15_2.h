#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
namespace Foundation::ViewObject { class GroupVariableHelper___c__DisplayClass15_1; }

#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS15_2__CTOR_OFFSET UNITYSDK_OFFSET(0x12AE4940)
#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS15_2__PUSH_B__0_OFFSET UNITYSDK_OFFSET(0x12AE4950)
#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS15_2__PUSH_B__1_OFFSET UNITYSDK_OFFSET(0x12AE4AE0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int GroupVariableHelper___c__DisplayClass15_2_TypeDefinitionIndex = 46020;

	class GroupVariableHelper___c__DisplayClass15_2 : public ::System::Object
	{
	public:
		::Foundation::ViewObject::GroupVariableHelper___c__DisplayClass15_1* CS___8__locals2; // 0x10
		::System::UInt32 groupID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS15_2__CTOR_OFFSET))(this);
		}

		::System::Void _Push_b__0(::Class_0_16E4307DCC419505_11* message)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS15_2__PUSH_B__0_OFFSET))(this, message);
		}

		::System::Void _Push_b__1(::Class_0_16E4307DCC419505_11* message)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS15_2__PUSH_B__1_OFFSET))(this, message);
		}
	};
}
