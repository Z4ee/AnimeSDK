#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_2679F01039F3FC24;
namespace RPG::Client::Prop { class TeleportGatePuzzleBoard; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class String; }

#define RPG_CLIENT_PROP_TELEPORTGATESWITCH_INITSWITCH_OFFSET UNITYSDK_OFFSET(0xC6349C0)
#define RPG_CLIENT_PROP_TELEPORTGATESWITCH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC634BD0)
#define RPG_CLIENT_PROP_TELEPORTGATESWITCH_ONUSESWITCH_OFFSET UNITYSDK_OFFSET(0xC634C60)
#define RPG_CLIENT_PROP_TELEPORTGATESWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0xC634CA0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int TeleportGateSwitch_TypeDefinitionIndex = 73423;

	class TeleportGateSwitch : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* Field_5_0; // 0x0
		::System::Int32 Field_5_1; // 0x18
		::RPG::Client::Prop::TeleportGatePuzzleBoard* Field_5_2; // 0x20
		::RPG::GameCore::PropComponent* Field_5_3; // 0x28
		::Class_2_2679F01039F3FC24* Field_5_4; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATESWITCH__CTOR_OFFSET))(this);
		}

		::System::Void InitSwitch(::RPG::Client::Prop::TeleportGatePuzzleBoard* a1, ::RPG::GameCore::PropComponent* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::TeleportGatePuzzleBoard*, ::RPG::GameCore::PropComponent*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATESWITCH_INITSWITCH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATESWITCH_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUseSwitch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATESWITCH_ONUSESWITCH_OFFSET))(this);
		}
	};
}
