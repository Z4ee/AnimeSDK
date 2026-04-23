#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace RPG::Client { template <typename T> class PrefHashSet_1; }

#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS249_0__CANSHOWNEWTRAITQUESTREDDOT_B__0_OFFSET UNITYSDK_OFFSET(0xA50C920)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS249_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA505E50)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModule___c__DisplayClass249_0_TypeDefinitionIndex = 59724;

	class GridFightModule___c__DisplayClass249_0 : public ::System::Object
	{
	public:
		::RPG::Client::PrefHashSet_1<::System::UInt32>* seenTraitQuestIDs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS249_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CanShowNewTraitQuestReddot_b__0(::RPG::Client::QuestData* quest)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS249_0__CANSHOWNEWTRAITQUESTREDDOT_B__0_OFFSET))(this, quest);
		}
	};
}
