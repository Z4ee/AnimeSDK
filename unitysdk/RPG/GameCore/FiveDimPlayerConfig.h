#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimEventReceiverConfig; }
namespace RPG::GameCore { class FiveDimMoveConfig; }
namespace RPG::GameCore { class FiveDimPlayerActionConfig; }
namespace RPG::GameCore { class FiveDimPlayerAnimConfig; }
namespace RPG::GameCore { class FiveDimPlayerEffectConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMPLAYERCONFIG_METHOD_2_BF4E450CC3903BBD_OFFSET UNITYSDK_OFFSET(0x18913270)
#define RPG_GAMECORE_FIVEDIMPLAYERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189135F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPlayerConfig_TypeDefinitionIndex = 15786;

	class FiveDimPlayerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID Entry3DText; // 0x10
		::System::String* PlayerPhysicsPrefab; // 0x20
		::RPG::GameCore::FiveDimMoveConfig* MoveConfig; // 0x28
		::RPG::GameCore::FiveDimPlayerEffectConfig* EffectConfig; // 0x30
		::RPG::GameCore::FiveDimPlayerAnimConfig* AnimConfig; // 0x38
		::RPG::GameCore::FiveDimPlayerActionConfig* InteractConfig; // 0x40
		::RPG::GameCore::FiveDimPlayerActionConfig* BeatBackActions; // 0x48
		::RPG::GameCore::FiveDimPlayerActionConfig* DeadActions; // 0x50
		::RPG::GameCore::FiveDimPlayerActionConfig* ResetActions; // 0x58
		::RPG::GameCore::FiveDimPlayerActionConfig* MediumLandActions; // 0x60
		::RPG::GameCore::FiveDimPlayerActionConfig* HeavyLandActions; // 0x68
		::RPG::GameCore::FiveDimEventReceiverConfig* EventReceiverConfig; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BF4E450CC3903BBD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlayerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlayerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERCONFIG_METHOD_2_BF4E450CC3903BBD_OFFSET))(a1, a2);
		}
	};
}
