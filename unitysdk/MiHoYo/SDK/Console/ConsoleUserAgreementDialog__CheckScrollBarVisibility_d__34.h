#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console { class ConsoleUserAgreementDialog; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Scrollbar; }

#define MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__34_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BBA68F0)
#define MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__34_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BBA6D80)
#define MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BBA6DE0)
#define MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1BBA6D90)
#define MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__34_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BBA68E0)
#define MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__34__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBA68D0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleUserAgreementDialog__CheckScrollBarVisibility_d__34_TypeDefinitionIndex = 20757;

	class ConsoleUserAgreementDialog__CheckScrollBarVisibility_d__34 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Console::ConsoleUserAgreementDialog* __4__this; // 0x10
		::UnityEngine::UI::Scrollbar* _scrollBar_5__2; // 0x18
		::System::Object* __2__current; // 0x20
		::UnityEngine::GameObject* _obj_5__1; // 0x28
		::System::Int32 __1__state; // 0x30

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__34__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__34_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__34_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__34_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
