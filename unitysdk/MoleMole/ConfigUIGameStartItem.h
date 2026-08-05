#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigLazyLoadItem_1.h"

namespace MoleMole { class ConfigUICommon_GameStart; }

#define MOLEMOLE_CONFIGUIGAMESTARTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19AD9F90)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIGameStartItem_TypeDefinitionIndex = 42369;

	class ConfigUIGameStartItem : public ::MoleMole::ConfigLazyLoadItem_1<::MoleMole::ConfigUICommon_GameStart*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIGAMESTARTITEM__CTOR_OFFSET))(this);
		}
	};
}
