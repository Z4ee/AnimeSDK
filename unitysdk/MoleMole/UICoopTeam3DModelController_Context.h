#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UICoopTeamNameRowWidgetController_Context; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x164848B0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopTeam3DModelController_Context_TypeDefinitionIndex = 51817;

	class UICoopTeam3DModelController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UICoopTeamNameRowWidgetController_Context*>* TeamList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAM3DMODELCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
