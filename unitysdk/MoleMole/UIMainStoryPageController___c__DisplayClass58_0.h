#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainStoryPageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS58_0__CTOR_OFFSET UNITYSDK_OFFSET(0x179EB940)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPageController___c__DisplayClass58_0_TypeDefinitionIndex = 84571;

	class UIMainStoryPageController___c__DisplayClass58_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* archiveTypes; // 0x10
		::MoleMole::UIMainStoryPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS58_0__CTOR_OFFSET))(this);
		}
	};
}
