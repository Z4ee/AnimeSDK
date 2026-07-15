#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatGlossaryTermData; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__DISPLAYCLASS83_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A42D9B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__DISPLAYCLASS83_0__GETGLOSSARYDATASBYIDLIST_B__0_OFFSET UNITYSDK_OFFSET(0x1A430740)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatUtil___c__DisplayClass83_0_TypeDefinitionIndex = 72190;

	class DiceCombatUtil___c__DisplayClass83_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* selectedIDSet; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__DISPLAYCLASS83_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetGlossaryDatasByIDList_b__0(::RPG::Client::DiceCombat::DiceCombatGlossaryTermData* a1, ::RPG::Client::DiceCombat::DiceCombatGlossaryTermData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGlossaryTermData*, ::RPG::Client::DiceCombat::DiceCombatGlossaryTermData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__DISPLAYCLASS83_0__GETGLOSSARYDATASBYIDLIST_B__0_OFFSET))(this, a1, a2);
		}
	};
}
