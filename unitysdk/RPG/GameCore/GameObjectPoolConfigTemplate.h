#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GameObjectPoolGroupConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GAMEOBJECTPOOLCONFIGTEMPLATE_METHOD_2_573E27F21737D51D_OFFSET UNITYSDK_OFFSET(0x1D953570)
#define RPG_GAMECORE_GAMEOBJECTPOOLCONFIGTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D953850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameObjectPoolConfigTemplate_TypeDefinitionIndex = 18049;

	class GameObjectPoolConfigTemplate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 MaxSpawnWaitTimeMs; // 0x10
		::System::Int32 FrameSpawnMaxTimeMs; // 0x14
		::System::Int32 FrameSpawnMaxTimeIncMs; // 0x18
		::System::Int32 FrameSpawnMaxTimeLimitMs; // 0x1C
		::System::Int32 PoolAutoReleaseIntervalMs; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameObjectPoolGroupConfig*>* GroupConfigs; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEOBJECTPOOLCONFIGTEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_573E27F21737D51D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GameObjectPoolConfigTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GameObjectPoolConfigTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEOBJECTPOOLCONFIGTEMPLATE_METHOD_2_573E27F21737D51D_OFFSET))(a1, a2);
		}
	};
}
