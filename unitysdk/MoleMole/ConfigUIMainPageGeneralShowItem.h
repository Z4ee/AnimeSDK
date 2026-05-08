#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIMainPageShowSetting; }
namespace MoleMole { class MainPageItemShowSetting; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUIMAINPAGEGENERALSHOWITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x17D38FD0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIMainPageGeneralShowItem_TypeDefinitionIndex = 39445;

	class ConfigUIMainPageGeneralShowItem : public ::System::Object
	{
	public:
		::MoleMole::ConfigUIMainPageShowSetting* MainPageShowSetting; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::MainPageItemShowSetting*>* ItemShowSettings; // 0x18
		::System::Int32 PostGirlID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINPAGEGENERALSHOWITEM__CTOR_OFFSET))(this);
		}
	};
}
