#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBallGameCollectBulletWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_3_F59B5360489F89C4;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIBALLGAMEINLEVELCOLLECTBULLETWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18BFDAC0)
#define MOLEMOLE_UIBALLGAMEINLEVELCOLLECTBULLETWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18BFDB30)
#define MOLEMOLE_UIBALLGAMEINLEVELCOLLECTBULLETWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18BFDBD0)
#define MOLEMOLE_UIBALLGAMEINLEVELCOLLECTBULLETWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18BFDC30)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameInLevelCollectBulletWidgetController_TypeDefinitionIndex = 67469;

	class UIBallGameInLevelCollectBulletWidgetController : public ::MoleMole::UIBallGameCollectBulletWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEINLEVELCOLLECTBULLETWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_3_F59B5360489F89C4* get__viewModel()
		{
			return ((::Class_3_F59B5360489F89C4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEINLEVELCOLLECTBULLETWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEINLEVELCOLLECTBULLETWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEINLEVELCOLLECTBULLETWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}
	};
}
