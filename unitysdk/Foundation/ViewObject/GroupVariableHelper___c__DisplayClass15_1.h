#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class AutoResetUniTaskCompletionSource; }
namespace Foundation::ViewObject { class GroupVariableHelper___c__DisplayClass15_0; }

#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS15_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11EB08A0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int GroupVariableHelper___c__DisplayClass15_1_TypeDefinitionIndex = 51596;

	class GroupVariableHelper___c__DisplayClass15_1 : public ::System::Object
	{
	public:
		::Foundation::ViewObject::GroupVariableHelper___c__DisplayClass15_0* CS___8__locals1; // 0x10
		::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* tcs; // 0x18
		::System::Int32 count; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS15_1__CTOR_OFFSET))(this);
		}
	};
}
