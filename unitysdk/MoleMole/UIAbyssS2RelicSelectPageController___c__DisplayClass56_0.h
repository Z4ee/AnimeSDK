#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAbyssS2RelicSelectPageController; }
namespace MoleMole { class UserLocalDataItem; }
namespace System { class String; }

#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER___C__DISPLAYCLASS56_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17420570)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2RelicSelectPageController___c__DisplayClass56_0_TypeDefinitionIndex = 49354;

	class UIAbyssS2RelicSelectPageController___c__DisplayClass56_0 : public ::System::Object
	{
	public:
		::MoleMole::UserLocalDataItem* localData; // 0x10
		::System::String* localKey; // 0x18
		::MoleMole::UIAbyssS2RelicSelectPageController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER___C__DISPLAYCLASS56_0__CTOR_OFFSET))(this);
		}
	};
}
