#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISkillButtonBaseController; }

#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER__CLICKHIGHLIGHT_D__73_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x154F55A0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER__CLICKHIGHLIGHT_D__73_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x154F5650)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER__CLICKHIGHLIGHT_D__73_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x154F56B0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER__CLICKHIGHLIGHT_D__73_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x154F5660)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER__CLICKHIGHLIGHT_D__73_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x154F5590)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER__CLICKHIGHLIGHT_D__73__CTOR_OFFSET UNITYSDK_OFFSET(0x154F5580)

namespace MoleMole
{
	inline static constexpr unsigned int UISkillButtonBaseController__ClickHighLight_d__73_TypeDefinitionIndex = 65480;

	class UISkillButtonBaseController__ClickHighLight_d__73 : public ::System::Object
	{
	public:
		::MoleMole::UISkillButtonBaseController* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER__CLICKHIGHLIGHT_D__73__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER__CLICKHIGHLIGHT_D__73_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER__CLICKHIGHLIGHT_D__73_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER__CLICKHIGHLIGHT_D__73_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER__CLICKHIGHLIGHT_D__73_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER__CLICKHIGHLIGHT_D__73_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
