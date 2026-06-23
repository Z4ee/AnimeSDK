#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIMainPageShowSetting; }
namespace MoleMole { class MainPageItemShowSetting; }

#define MOLEMOLE_CONFIGUIMAINPAGESKINSHOWITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x115F7E80)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIMainPageSkinShowItem_TypeDefinitionIndex = 41709;

	class ConfigUIMainPageSkinShowItem : public ::System::Object
	{
	public:
		::MoleMole::MainPageItemShowSetting* SkinShowSetting; // 0x10
		::MoleMole::ConfigUIMainPageShowSetting* MainPageShowSetting; // 0x18
		::System::Int32 PostGirlID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINPAGESKINSHOWITEM__CTOR_OFFSET))(this);
		}
	};
}
