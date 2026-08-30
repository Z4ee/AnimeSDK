#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DICECOMBAT_DICECOMBATPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0xCD2FAD0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatProgress_TypeDefinitionIndex = 75604;

	class DiceCombatProgress : public ::System::Object
	{
	public:
		::System::UInt32 CurProgress; // 0x10
		::System::UInt32 TotalProgress; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPROGRESS__CTOR_OFFSET))(this);
		}
	};
}
