#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGachaStage3DModelControllerBase; }
namespace MoleMole { class UIGachaStage3DModelControllerBase___c__DisplayClass17_0; }
namespace System { class Action; }

#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE__PRELOADITEMSTAGE_D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18EB2B20)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE__PRELOADITEMSTAGE_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18EB2DD0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE__PRELOADITEMSTAGE_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18EB2E30)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE__PRELOADITEMSTAGE_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18EB2DE0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE__PRELOADITEMSTAGE_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18EB2B10)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE__PRELOADITEMSTAGE_D__17__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB2B00)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaStage3DModelControllerBase__PreloadItemStage_d__17_TypeDefinitionIndex = 54986;

	class UIGachaStage3DModelControllerBase__PreloadItemStage_d__17 : public ::System::Object
	{
	public:
		::MoleMole::UIGachaStage3DModelControllerBase___c__DisplayClass17_0* __8__1; // 0x10
		::System::Action* completeCb; // 0x18
		::Il2CppArray<::Foundation::AssetPath>* preloadAssets; // 0x20
		::MoleMole::UIGachaStage3DModelControllerBase* __4__this; // 0x28
		::System::Object* __2__current; // 0x30
		::System::Int32 __1__state; // 0x38

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE__PRELOADITEMSTAGE_D__17__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE__PRELOADITEMSTAGE_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE__PRELOADITEMSTAGE_D__17_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE__PRELOADITEMSTAGE_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE__PRELOADITEMSTAGE_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE__PRELOADITEMSTAGE_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
