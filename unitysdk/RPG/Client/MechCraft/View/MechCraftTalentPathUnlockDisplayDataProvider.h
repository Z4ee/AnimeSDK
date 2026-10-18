#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_103;
class Class_0_16E4307DCC419505_151;
namespace RPG::Client::MechCraft::View { class MechCraftTalentPathUnlockDisplayData; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHUNLOCKDISPLAYDATAPROVIDER_GETDATA_OFFSET UNITYSDK_OFFSET(0xD6611F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHUNLOCKDISPLAYDATAPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD661130)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftTalentPathUnlockDisplayDataProvider_TypeDefinitionIndex = 79981;

	class MechCraftTalentPathUnlockDisplayDataProvider : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_151* _TalentPathConfigRepository; // 0x10
		::Class_0_16E4307DCC419505_103* _ActorConfigRepository; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHUNLOCKDISPLAYDATAPROVIDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftTalentPathUnlockDisplayData* GetData(::System::UInt32 a1)
		{
			return ((::RPG::Client::MechCraft::View::MechCraftTalentPathUnlockDisplayData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHUNLOCKDISPLAYDATAPROVIDER_GETDATA_OFFSET))(this, a1);
		}
	};
}
