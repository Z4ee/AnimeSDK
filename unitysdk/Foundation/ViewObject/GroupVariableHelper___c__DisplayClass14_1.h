#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_2;
namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace Foundation::ViewObject { class GroupVariableHelper___c__DisplayClass14_0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS14_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1022F320)
#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS14_1__PUSHSINGLE_B__0_OFFSET UNITYSDK_OFFSET(0x1022F330)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int GroupVariableHelper___c__DisplayClass14_1_TypeDefinitionIndex = 46022;

	class GroupVariableHelper___c__DisplayClass14_1 : public ::System::Object
	{
	public:
		::Foundation::ViewObject::GroupVariableHelper___c__DisplayClass14_0* CS___8__locals1; // 0x10
		::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_2*>*>* tcs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS14_1__CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask _PushSingle_b__0(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_2*>* _)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_2*>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS14_1__PUSHSINGLE_B__0_OFFSET))(this, _);
		}
	};
}
