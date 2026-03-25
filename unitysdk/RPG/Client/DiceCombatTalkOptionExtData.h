#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DICECOMBATTALKOPTIONEXTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x94A0C10)

namespace RPG::Client
{
	inline static constexpr unsigned int DiceCombatTalkOptionExtData_TypeDefinitionIndex = 55532;

	class DiceCombatTalkOptionExtData : public ::System::Object
	{
	public:
		::System::Boolean IsShowHardLevel; // 0x10
		::System::UInt32 StageID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATTALKOPTIONEXTDATA__CTOR_OFFSET))(this);
		}
	};
}
