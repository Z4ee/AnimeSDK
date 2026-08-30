#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C41E7A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__DISPLAYCLASS18_0__SORTFOREDITTEAMAVATARLIST_B__0_OFFSET UNITYSDK_OFFSET(0x1C428E60)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatUtil___c__DisplayClass18_0_TypeDefinitionIndex = 75624;

	class DiceCombatUtil___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* selectedAvatarIDs; // 0x10
		::System::UInt32 stageID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _SortForEditTeamAvatarList_b__0(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__DISPLAYCLASS18_0__SORTFOREDITTEAMAVATARLIST_B__0_OFFSET))(this, a1, a2);
		}
	};
}
