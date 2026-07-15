#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ActivityDiceCombatDiceContentRow; }

#define RPG_CLIENT_DICECOMBATDICECONTENTINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x19FF2230)
#define RPG_CLIENT_DICECOMBATDICECONTENTINFO_GET_ISSKILLCONTENT_OFFSET UNITYSDK_OFFSET(0x19FF1B90)
#define RPG_CLIENT_DICECOMBATDICECONTENTINFO_GET_ROW_OFFSET UNITYSDK_OFFSET(0x19FF2250)
#define RPG_CLIENT_DICECOMBATDICECONTENTINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x19FF2240)
#define RPG_CLIENT_DICECOMBATDICECONTENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF19A0)

namespace RPG::Client
{
	inline static constexpr unsigned int DiceCombatDiceContentInfo_TypeDefinitionIndex = 60762;

	class DiceCombatDiceContentInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityDiceCombatDiceContentRow* _Row; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICECONTENTINFO__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICECONTENTINFO_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICECONTENTINFO_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::ActivityDiceCombatDiceContentRow* get_Row()
		{
			return ((::RPG::GameCore::ActivityDiceCombatDiceContentRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICECONTENTINFO_GET_ROW_OFFSET))(this);
		}

		::System::Boolean get_IsSkillContent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICECONTENTINFO_GET_ISSKILLCONTENT_OFFSET))(this);
		}
	};
}
