#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIMonsterFantasyBossInfoPageController_PageType.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER_PAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x183C9070)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyBossInfoPageController_PageContext_TypeDefinitionIndex = 49449;

	class UIMonsterFantasyBossInfoPageController_PageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Collections::Generic::List_1<::System::Int32>*>* OnCloseCallBack; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* TeamInfo; // 0x30
		::System::Int32 SourceConfigID; // 0x38
		::System::Int32 SourceIndex; // 0x3C
		::MoleMole::UIMonsterFantasyBossInfoPageController_PageType Type; // 0x40
		::System::Int32 LevelID; // 0x44
		::System::Int32 SourceEntityID; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER_PAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
