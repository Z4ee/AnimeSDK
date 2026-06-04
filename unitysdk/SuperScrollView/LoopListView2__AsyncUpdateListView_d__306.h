#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SuperScrollView { class LoopListView2; }
namespace System { class Action; }

#define SUPERSCROLLVIEW_LOOPLISTVIEW2__ASYNCUPDATELISTVIEW_D__306_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD0D2FE0)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2__ASYNCUPDATELISTVIEW_D__306_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD0D31A0)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2__ASYNCUPDATELISTVIEW_D__306_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD0D3200)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2__ASYNCUPDATELISTVIEW_D__306_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD0D31B0)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2__ASYNCUPDATELISTVIEW_D__306_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD0D2FD0)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2__ASYNCUPDATELISTVIEW_D__306__CTOR_OFFSET UNITYSDK_OFFSET(0xD0D1D40)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopListView2__AsyncUpdateListView_d__306_TypeDefinitionIndex = 44956;

	class LoopListView2__AsyncUpdateListView_d__306 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::SuperScrollView::LoopListView2* __4__this; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Single distanceForNew1; // 0x28
		::System::Int32 __1__state; // 0x2C
		::System::Single distanceForRecycle1; // 0x30
		::System::Int32 _maxCount_5__4; // 0x34
		::System::Int32 _checkCount_5__3; // 0x38
		::System::Boolean _needContinueCheck_5__2; // 0x3C
		::System::Single distanceForRecycle0; // 0x40
		::System::Single distanceForNew0; // 0x44

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2__ASYNCUPDATELISTVIEW_D__306__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2__ASYNCUPDATELISTVIEW_D__306_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2__ASYNCUPDATELISTVIEW_D__306_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2__ASYNCUPDATELISTVIEW_D__306_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2__ASYNCUPDATELISTVIEW_D__306_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2__ASYNCUPDATELISTVIEW_D__306_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
