#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DBF2701137F18AA6.h"
#include "unitysdk/MoleMole/UIBossChallengeHistoryRowBaseWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIBOSSCHALLENGEHISTORYHARDROWWIDGETCONTROLLER_CREATEROWVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18E48B60)
#define MOLEMOLE_UIBOSSCHALLENGEHISTORYHARDROWWIDGETCONTROLLER_GET_BINDERCTRLKEY_OFFSET UNITYSDK_OFFSET(0x18E48B50)
#define MOLEMOLE_UIBOSSCHALLENGEHISTORYHARDROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18E48BF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeHistoryHardRowWidgetController_TypeDefinitionIndex = 56309;

	class UIBossChallengeHistoryHardRowWidgetController : public ::MoleMole::UIBossChallengeHistoryRowBaseWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEHISTORYHARDROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_DBF2701137F18AA6 get_BinderCtrlKey()
		{
			return ((::Enum_3_DBF2701137F18AA6(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEHISTORYHARDROWWIDGETCONTROLLER_GET_BINDERCTRLKEY_OFFSET))(this);
		}

		::System::Void CreateRowViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEHISTORYHARDROWWIDGETCONTROLLER_CREATEROWVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}
	};
}
