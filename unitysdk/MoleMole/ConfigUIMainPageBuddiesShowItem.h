#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIMainPageShowSetting; }
namespace MoleMole { class MainPageItemShowSetting; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUIMAINPAGEBUDDIESSHOWITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x16276580)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIMainPageBuddiesShowItem_TypeDefinitionIndex = 81565;

	class ConfigUIMainPageBuddiesShowItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::MainPageItemShowSetting*>* BuddyShowSettings; // 0x10
		::MoleMole::ConfigUIMainPageShowSetting* MainPageShowSetting; // 0x18
		::System::Int32 PostGirlID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINPAGEBUDDIESSHOWITEM__CTOR_OFFSET))(this);
		}
	};
}
