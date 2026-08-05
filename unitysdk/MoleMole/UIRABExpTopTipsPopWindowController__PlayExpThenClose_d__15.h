#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRABExpTopTipsPopWindowController; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER__PLAYEXPTHENCLOSE_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1748A460)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER__PLAYEXPTHENCLOSE_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1748A7B0)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER__PLAYEXPTHENCLOSE_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1748A810)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER__PLAYEXPTHENCLOSE_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1748A7C0)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER__PLAYEXPTHENCLOSE_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1748A450)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER__PLAYEXPTHENCLOSE_D__15__CTOR_OFFSET UNITYSDK_OFFSET(0x1748A440)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABExpTopTipsPopWindowController__PlayExpThenClose_d__15_TypeDefinitionIndex = 43148;

	class UIRABExpTopTipsPopWindowController__PlayExpThenClose_d__15 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::System::Single>* _seq_5__2; // 0x10
		::MoleMole::UIRABExpTopTipsPopWindowController* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Single __2__current; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER__PLAYEXPTHENCLOSE_D__15__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER__PLAYEXPTHENCLOSE_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER__PLAYEXPTHENCLOSE_D__15_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER__PLAYEXPTHENCLOSE_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER__PLAYEXPTHENCLOSE_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER__PLAYEXPTHENCLOSE_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
