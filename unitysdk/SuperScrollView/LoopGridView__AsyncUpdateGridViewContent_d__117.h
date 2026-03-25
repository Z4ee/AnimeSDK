#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SuperScrollView { class LoopGridView; }
namespace System { class Action; }

#define SUPERSCROLLVIEW_LOOPGRIDVIEW__ASYNCUPDATEGRIDVIEWCONTENT_D__117_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xABFA450)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW__ASYNCUPDATEGRIDVIEWCONTENT_D__117_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xABFADE0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW__ASYNCUPDATEGRIDVIEWCONTENT_D__117_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xABFAE40)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW__ASYNCUPDATEGRIDVIEWCONTENT_D__117_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xABFADF0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW__ASYNCUPDATEGRIDVIEWCONTENT_D__117_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xABFA440)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW__ASYNCUPDATEGRIDVIEWCONTENT_D__117__CTOR_OFFSET UNITYSDK_OFFSET(0xABFA430)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopGridView__AsyncUpdateGridViewContent_d__117_TypeDefinitionIndex = 38518;

	class LoopGridView__AsyncUpdateGridViewContent_d__117 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Object* __2__current; // 0x18
		::SuperScrollView::LoopGridView* __4__this; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Int32 _count_5__2; // 0x2C
		::System::Int32 _i_5__3; // 0x30

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW__ASYNCUPDATEGRIDVIEWCONTENT_D__117__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW__ASYNCUPDATEGRIDVIEWCONTENT_D__117_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW__ASYNCUPDATEGRIDVIEWCONTENT_D__117_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW__ASYNCUPDATEGRIDVIEWCONTENT_D__117_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW__ASYNCUPDATEGRIDVIEWCONTENT_D__117_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW__ASYNCUPDATEGRIDVIEWCONTENT_D__117_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
