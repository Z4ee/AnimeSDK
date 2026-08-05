#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_GALGAME_MODIFYTIMECFG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B19130)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int ModifyTimeCfg_TypeDefinitionIndex = 63710;

	class ModifyTimeCfg : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MODIFYTIMECFG__CTOR_OFFSET))(this);
		}
	};
}
