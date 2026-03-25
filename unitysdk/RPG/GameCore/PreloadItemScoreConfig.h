#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PRELOADITEMSCORECONFIG_METHOD_2_23FD47AA81CBD8B4_OFFSET UNITYSDK_OFFSET(0x175118A0)
#define RPG_GAMECORE_PRELOADITEMSCORECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17511970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PreloadItemScoreConfig_TypeDefinitionIndex = 14983;

	class PreloadItemScoreConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* ItemScoreMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADITEMSCORECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_23FD47AA81CBD8B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PreloadItemScoreConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PreloadItemScoreConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADITEMSCORECONFIG_METHOD_2_23FD47AA81CBD8B4_OFFSET))(a1, a2);
		}
	};
}
