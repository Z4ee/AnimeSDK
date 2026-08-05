#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_5AE71E11067CBD0F;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIBOSSCHALLENGEBADGEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19572730)
#define MOLEMOLE_UIBOSSCHALLENGEBADGEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x195727A0)
#define MOLEMOLE_UIBOSSCHALLENGEBADGEWIDGETCONTROLLER_SETMEDALID_OFFSET UNITYSDK_OFFSET(0x19572860)
#define MOLEMOLE_UIBOSSCHALLENGEBADGEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x195729E0)
#define MOLEMOLE_UIBOSSCHALLENGEBADGEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19572A40)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeBadgeWidgetController_TypeDefinitionIndex = 47830;

	class UIBossChallengeBadgeWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEBADGEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_5AE71E11067CBD0F* get__viewModel()
		{
			return ((::Class_2_5AE71E11067CBD0F*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEBADGEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEBADGEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void SetMedalID(::System::Int32 medalID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEBADGEWIDGETCONTROLLER_SETMEDALID_OFFSET))(this, medalID);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEBADGEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}
	};
}
