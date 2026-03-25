#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace RPG::Client { template <typename T> class PrefHashSet_1; }

#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS240_0__CANSHOWNEWTRAITQUESTREDDOT_B__0_OFFSET UNITYSDK_OFFSET(0x986A2A0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS240_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9864040)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModule___c__DisplayClass240_0_TypeDefinitionIndex = 52671;

	class GridFightModule___c__DisplayClass240_0 : public ::System::Object
	{
	public:
		::RPG::Client::PrefHashSet_1<::System::UInt32>* seenTraitQuestIDs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS240_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CanShowNewTraitQuestReddot_b__0(::RPG::Client::QuestData* quest)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS240_0__CANSHOWNEWTRAITQUESTREDDOT_B__0_OFFSET))(this, quest);
		}
	};
}
