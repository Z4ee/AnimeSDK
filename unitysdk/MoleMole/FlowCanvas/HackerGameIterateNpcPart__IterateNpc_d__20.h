#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ChessEntityCollection; }
namespace MoleMole::FlowCanvas { class HackerGameIterateNpcPart; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART__ITERATENPC_D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x12987440)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART__ITERATENPC_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12987990)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART__ITERATENPC_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x129879F0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART__ITERATENPC_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x129879A0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART__ITERATENPC_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12987430)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART__ITERATENPC_D__20__CTOR_OFFSET UNITYSDK_OFFSET(0x12987420)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameIterateNpcPart__IterateNpc_d__20_TypeDefinitionIndex = 69030;

	class HackerGameIterateNpcPart__IterateNpc_d__20 : public ::System::Object
	{
	public:
		::MoleMole::ChessEntityCollection* collection; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* _cachedCells_5__2; // 0x20
		::MoleMole::FlowCanvas::HackerGameIterateNpcPart* __4__this; // 0x28
		::System::Collections::Generic::List_1<::System::Single>* delay; // 0x30
		::System::Int32 __1__state; // 0x38
		::System::Int32 runtimeID; // 0x3C
		::System::Int32 _nextIndex_5__4; // 0x40
		::System::Boolean discreteMode; // 0x44
		::System::Single _timer_5__3; // 0x48

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART__ITERATENPC_D__20__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART__ITERATENPC_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART__ITERATENPC_D__20_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART__ITERATENPC_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART__ITERATENPC_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART__ITERATENPC_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
