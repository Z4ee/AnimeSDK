#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeviceSettingConfigItemBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GameObjectPoolGroupSetting; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GAMEOBJECTPOOLSETTING_METHOD_3_53E0AEB69D1B32DB_OFFSET UNITYSDK_OFFSET(0x1D953D10)
#define RPG_GAMECORE_GAMEOBJECTPOOLSETTING_METHOD_3_81C6C0186756E0B0_OFFSET UNITYSDK_OFFSET(0x1D953D50)
#define RPG_GAMECORE_GAMEOBJECTPOOLSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1D953D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameObjectPoolSetting_TypeDefinitionIndex = 16290;

	class GameObjectPoolSetting : public ::RPG::GameCore::DeviceSettingConfigItemBase
	{
	public:
		::System::Int32 MaxSpawnWaitTimeMs; // 0x18
		::System::Int32 BattleMaxSpawnWaitTimeMs; // 0x1C
		::System::Int32 FrameSpawnMaxTimeMs; // 0x20
		::System::Int32 BattleFrameSpawnMaxTimeMs; // 0x24
		::System::Int32 FrameSpawnMaxTimeIncMs; // 0x28
		::System::Int32 FrameSpawnMaxTimeLimitMs; // 0x2C
		::System::Int32 PoolAutoReleaseIntervalMs; // 0x30
		::System::Int32 PoolAutoReleaseMemoryThresh; // 0x34
		::System::Single PoolAutoReleaseMemoryRatioThresh; // 0x38
		::System::Int32 PoolImmediatelyReleaseMemoryThresh; // 0x3C
		::System::Single PoolImmediatelyReleaseMemoryRatioThresh; // 0x40
		::System::Boolean EnableBinaryPrefab; // 0x44
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameObjectPoolGroupSetting*>* GroupSettings; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEOBJECTPOOLSETTING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_53E0AEB69D1B32DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GameObjectPoolSetting*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GameObjectPoolSetting*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEOBJECTPOOLSETTING_METHOD_3_53E0AEB69D1B32DB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_81C6C0186756E0B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GameObjectPoolSetting* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GameObjectPoolSetting*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEOBJECTPOOLSETTING_METHOD_3_81C6C0186756E0B0_OFFSET))(a1, a2);
		}
	};
}
