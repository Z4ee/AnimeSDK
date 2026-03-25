#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MarbleLaunchAIConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GLOBALMARBLEAICONFIG_METHOD_2_24AAF11F1284A612_OFFSET UNITYSDK_OFFSET(0x1722FAE0)
#define RPG_GAMECORE_GLOBALMARBLEAICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x172488B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GlobalMarbleAIConfig_TypeDefinitionIndex = 15482;

	class GlobalMarbleAIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single PositiveScoreRate; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::MarbleLaunchAIConfig*>* LaunchAIDict; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMARBLEAICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_24AAF11F1284A612(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GlobalMarbleAIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GlobalMarbleAIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMARBLEAICONFIG_METHOD_2_24AAF11F1284A612_OFFSET))(a1, a2);
		}
	};
}
