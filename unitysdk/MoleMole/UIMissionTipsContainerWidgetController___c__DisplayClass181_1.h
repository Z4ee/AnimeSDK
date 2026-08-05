#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController___c__DisplayClass181_0; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS181_1__CTOR_OFFSET UNITYSDK_OFFSET(0x182E77A0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS181_1__PLAYFINISHANIM_B__3_OFFSET UNITYSDK_OFFSET(0x182E77B0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS181_1__PLAYFINISHANIM_B__4_OFFSET UNITYSDK_OFFSET(0x182E78C0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS181_1__PLAYFINISHANIM_B__5_OFFSET UNITYSDK_OFFSET(0x182E7A50)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS181_1__PLAYFINISHANIM_B__8_OFFSET UNITYSDK_OFFSET(0x182E79F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass181_1_TypeDefinitionIndex = 91217;

	class UIMissionTipsContainerWidgetController___c__DisplayClass181_1 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* switchAction; // 0x10
		::System::Action_1<::System::Boolean>* maybeDeferredSwitch; // 0x18
		::MoleMole::UIMissionTipsContainerWidgetController___c__DisplayClass181_0* CS___8__locals1; // 0x20
		::System::Action* __9__8; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS181_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayFinishAnim_b__3(::System::Boolean sound)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS181_1__PLAYFINISHANIM_B__3_OFFSET))(this, sound);
		}

		::System::Void _PlayFinishAnim_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS181_1__PLAYFINISHANIM_B__4_OFFSET))(this);
		}

		::System::Void _PlayFinishAnim_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS181_1__PLAYFINISHANIM_B__8_OFFSET))(this);
		}

		::System::Void _PlayFinishAnim_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS181_1__PLAYFINISHANIM_B__5_OFFSET))(this);
		}
	};
}
