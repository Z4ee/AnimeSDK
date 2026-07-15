#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FourRotateVoxelFloorMapInfoConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_FOURROTATEVOXELLEVELUICONFIG_METHOD_2_60AAE946E7233B6C_OFFSET UNITYSDK_OFFSET(0x1B97B5E0)
#define RPG_GAMECORE_FOURROTATEVOXELLEVELUICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B97C720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelLevelUIConfig_TypeDefinitionIndex = 16092;

	class FourRotateVoxelLevelUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID FinishDesc; // 0x10
		::RPG::Client::TextID UnlockDesc; // 0x20
		::RPG::Client::TextID GetRewardHintDesc; // 0x30
		::System::UInt32 DisplayRewardID; // 0x40
		::RPG::Client::TextID ToGetRewardHintDesc; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FourRotateVoxelFloorMapInfoConfig*>* FloorMapInfoConfigs; // 0x58
		::System::Single ObserveDeltaX; // 0x60
		::System::Single ObserveDeltaY; // 0x64
		::System::Single CtrlInputScale; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELLEVELUICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_60AAE946E7233B6C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelLevelUIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelLevelUIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELLEVELUICONFIG_METHOD_2_60AAE946E7233B6C_OFFSET))(a1, a2);
		}
	};
}
