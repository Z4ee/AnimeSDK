#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_9FEE7E7D3F46814D_5;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMONSTERFANTASYNEWMONSTERDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17967080)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyNewMonsterDialogPopWindowController_Context_TypeDefinitionIndex = 64152;

	class UIMonsterFantasyNewMonsterDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_3_9FEE7E7D3F46814D_5*>* MonsterInfos; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYNEWMONSTERDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
