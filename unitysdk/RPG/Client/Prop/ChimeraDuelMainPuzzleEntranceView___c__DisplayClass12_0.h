#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraDuelBattlePrefabConfig_Master; }

#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCEVIEW___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA050CD0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCEVIEW___C__DISPLAYCLASS12_0___LOADMASTER_B__0_OFFSET UNITYSDK_OFFSET(0xA050ED0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMainPuzzleEntranceView___c__DisplayClass12_0_TypeDefinitionIndex = 63827;

	class ChimeraDuelMainPuzzleEntranceView___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::UInt32 masterID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCEVIEW___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __LoadMaster_b__0(::RPG::Client::Prop::ChimeraDuelBattlePrefabConfig_Master* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBattlePrefabConfig_Master*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEENTRANCEVIEW___C__DISPLAYCLASS12_0___LOADMASTER_B__0_OFFSET))(this, m);
		}
	};
}
