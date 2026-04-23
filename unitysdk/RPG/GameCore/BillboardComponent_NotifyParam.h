#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BillboardShowType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/InwardBubbleTalkType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Billboard { class IBillboardHost; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BILLBOARDCOMPONENT_NOTIFYPARAM_COPYTO_OFFSET UNITYSDK_OFFSET(0xB5D82F0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_NOTIFYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xB5D8480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BillboardComponent_NotifyParam_TypeDefinitionIndex = 52685;

	class BillboardComponent_NotifyParam : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Entity; // 0x10
		::System::String* TypeIconPath; // 0x18
		::System::Tuple_2<::System::String*, ::System::String*>* FiveDimSidePuzzlePanelPaths; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::Client::BillboardShowType, ::System::Single>* TypeToShowDistance; // 0x28
		::RPG::Client::Billboard::IBillboardHost* Host; // 0x30
		::RPG::Client::TextID TextIDName; // 0x38
		::RPG::Client::TextID FloatingText; // 0x48
		::System::UInt32 NPCID; // 0x58
		::RPG::GameCore::InwardBubbleTalkType InwardType; // 0x5C
		::RPG::Client::BillboardShowType BoardShowBit; // 0x60
		::System::Boolean IsShowFiveDimSidePuzzleChest; // 0x64
		::System::Boolean ShowTop; // 0x65
		::System::Boolean ShowInStoryMode; // 0x66
		::System::Single YOffset; // 0x68
		::System::Single ZOffset; // 0x6C
		::System::Single XOffset; // 0x70
		::RPG::Client::TextID TextTitle; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_NOTIFYPARAM__CTOR_OFFSET))(this);
		}

		::System::Void CopyTo(::RPG::GameCore::BillboardComponent_NotifyParam* dest)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BillboardComponent_NotifyParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_NOTIFYPARAM_COPYTO_OFFSET))(this, dest);
		}
	};
}
