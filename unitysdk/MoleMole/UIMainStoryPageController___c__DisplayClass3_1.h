#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16D969E0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS3_1__ONSHOW_G__STARTPERFORM_2_OFFSET UNITYSDK_OFFSET(0x16D969F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPageController___c__DisplayClass3_1_TypeDefinitionIndex = 76811;

	class UIMainStoryPageController___c__DisplayClass3_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* afterBattlePerformList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS3_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnShow_g__StartPerform_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS3_1__ONSHOW_G__STARTPERFORM_2_OFFSET))(this);
		}
	};
}
