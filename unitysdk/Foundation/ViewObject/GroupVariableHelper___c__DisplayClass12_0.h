#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_34;
class Class_0_16E4307DCC419505_36;
namespace Cysharp::Threading::Tasks { template <typename T> class AutoResetUniTaskCompletionSource_1; }

#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11EB07D0)
#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS12_0__PULL_B__0_OFFSET UNITYSDK_OFFSET(0x11EB07E0)
#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS12_0__PULL_B__1_OFFSET UNITYSDK_OFFSET(0x11EB0840)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int GroupVariableHelper___c__DisplayClass12_0_TypeDefinitionIndex = 51598;

	class GroupVariableHelper___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<::Class_0_16E4307DCC419505_34*>* tcs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _Pull_b__0(::Class_0_16E4307DCC419505_36* message)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS12_0__PULL_B__0_OFFSET))(this, message);
		}

		::System::Void _Pull_b__1(::Class_0_16E4307DCC419505_36* message)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS12_0__PULL_B__1_OFFSET))(this, message);
		}
	};
}
