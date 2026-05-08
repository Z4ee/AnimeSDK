#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UIBossBattleData; }

#define MOLEMOLE_UIBOSSBATTLEDATADIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14EC0590)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossBattleDataDialogContext_TypeDefinitionIndex = 57675;

	class UIBossBattleDataDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIBossBattleData* uiBosBattleData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSBATTLEDATADIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
