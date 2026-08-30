#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SuperScrollView { class LoopGridView; }
namespace System { class Action; }

#define SUPERSCROLLVIEW_LOOPGRIDVIEW__ASYNCUPDATEGRIDVIEWCONTENT_D__118_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1980E610)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW__ASYNCUPDATEGRIDVIEWCONTENT_D__118_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1980F1D0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW__ASYNCUPDATEGRIDVIEWCONTENT_D__118_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1980F230)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW__ASYNCUPDATEGRIDVIEWCONTENT_D__118_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1980F1E0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW__ASYNCUPDATEGRIDVIEWCONTENT_D__118_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1980E600)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW__ASYNCUPDATEGRIDVIEWCONTENT_D__118__CTOR_OFFSET UNITYSDK_OFFSET(0x198068A0)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopGridView__AsyncUpdateGridViewContent_d__118_TypeDefinitionIndex = 48117;

	class LoopGridView__AsyncUpdateGridViewContent_d__118 : public ::System::Object
	{
	public:
		::SuperScrollView::LoopGridView* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Action* callback; // 0x20
		::System::Int32 _count_5__2; // 0x28
		::System::Int32 __1__state; // 0x2C
		::System::Int32 _i_5__3; // 0x30

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW__ASYNCUPDATEGRIDVIEWCONTENT_D__118__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW__ASYNCUPDATEGRIDVIEWCONTENT_D__118_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW__ASYNCUPDATEGRIDVIEWCONTENT_D__118_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW__ASYNCUPDATEGRIDVIEWCONTENT_D__118_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW__ASYNCUPDATEGRIDVIEWCONTENT_D__118_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW__ASYNCUPDATEGRIDVIEWCONTENT_D__118_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
