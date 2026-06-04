#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace RPG::Client { template <typename T> class PrefHashSet_1; }

#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS239_0__CANSHOWNEWTRAITQUESTREDDOT_B__0_OFFSET UNITYSDK_OFFSET(0xBBB36F0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS239_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBBB36E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModule___c__DisplayClass239_0_TypeDefinitionIndex = 60659;

	class GridFightModule___c__DisplayClass239_0 : public ::System::Object
	{
	public:
		::RPG::Client::PrefHashSet_1<::System::UInt32>* seenTraitQuestIDs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS239_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CanShowNewTraitQuestReddot_b__0(::RPG::Client::QuestData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS239_0__CANSHOWNEWTRAITQUESTREDDOT_B__0_OFFSET))(this, a1);
		}
	};
}
