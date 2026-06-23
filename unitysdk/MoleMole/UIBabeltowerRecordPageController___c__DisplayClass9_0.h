#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBabeltowerRecordPageController; }

#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x172BDED0)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER___C__DISPLAYCLASS9_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x172BDEE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerRecordPageController___c__DisplayClass9_0_TypeDefinitionIndex = 63662;

	class UIBabeltowerRecordPageController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBabeltowerRecordPageController* __4__this; // 0x10
		::System::Int32 curIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER___C__DISPLAYCLASS9_0__REFRESHVIEW_B__0_OFFSET))(this);
		}
	};
}
