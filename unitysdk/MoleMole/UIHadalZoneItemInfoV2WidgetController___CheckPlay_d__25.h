#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHadalZoneItemInfoV2WidgetController; }
namespace System { class String; }

#define MOLEMOLE_UIHADALZONEITEMINFOV2WIDGETCONTROLLER___CHECKPLAY_D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x177F53F0)
#define MOLEMOLE_UIHADALZONEITEMINFOV2WIDGETCONTROLLER___CHECKPLAY_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x177F57B0)
#define MOLEMOLE_UIHADALZONEITEMINFOV2WIDGETCONTROLLER___CHECKPLAY_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x177F5810)
#define MOLEMOLE_UIHADALZONEITEMINFOV2WIDGETCONTROLLER___CHECKPLAY_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x177F57C0)
#define MOLEMOLE_UIHADALZONEITEMINFOV2WIDGETCONTROLLER___CHECKPLAY_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x177F53E0)
#define MOLEMOLE_UIHADALZONEITEMINFOV2WIDGETCONTROLLER___CHECKPLAY_D__25__CTOR_OFFSET UNITYSDK_OFFSET(0x177F53D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZoneItemInfoV2WidgetController___CheckPlay_d__25_TypeDefinitionIndex = 48159;

	class UIHadalZoneItemInfoV2WidgetController___CheckPlay_d__25 : public ::System::Object
	{
	public:
		::MoleMole::UIHadalZoneItemInfoV2WidgetController* __4__this; // 0x10
		::System::String* _targetAnim_5__2; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Single __2__current; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONEITEMINFOV2WIDGETCONTROLLER___CHECKPLAY_D__25__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONEITEMINFOV2WIDGETCONTROLLER___CHECKPLAY_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONEITEMINFOV2WIDGETCONTROLLER___CHECKPLAY_D__25_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONEITEMINFOV2WIDGETCONTROLLER___CHECKPLAY_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONEITEMINFOV2WIDGETCONTROLLER___CHECKPLAY_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONEITEMINFOV2WIDGETCONTROLLER___CHECKPLAY_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
