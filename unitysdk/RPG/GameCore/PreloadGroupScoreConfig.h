#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PreloadGroupType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PreloadItemScoreConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PRELOADGROUPSCORECONFIG_METHOD_2_6250FF2B6678082F_OFFSET UNITYSDK_OFFSET(0x1D16E0B0)
#define RPG_GAMECORE_PRELOADGROUPSCORECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D16E1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PreloadGroupScoreConfig_TypeDefinitionIndex = 16198;

	class PreloadGroupScoreConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PreloadGroupType GroupType; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::PreloadItemScoreConfig*>* GroupIdScoreConfigMap; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADGROUPSCORECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6250FF2B6678082F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PreloadGroupScoreConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PreloadGroupScoreConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADGROUPSCORECONFIG_METHOD_2_6250FF2B6678082F_OFFSET))(a1, a2);
		}
	};
}
