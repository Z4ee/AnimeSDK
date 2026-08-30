#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DICECOMBATTALKOPTIONEXTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8D9B30)

namespace RPG::Client
{
	inline static constexpr unsigned int DiceCombatTalkOptionExtData_TypeDefinitionIndex = 68035;

	class DiceCombatTalkOptionExtData : public ::System::Object
	{
	public:
		::System::UInt32 StageID; // 0x10
		::System::Boolean IsShowHardLevel; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATTALKOPTIONEXTDATA__CTOR_OFFSET))(this);
		}
	};
}
