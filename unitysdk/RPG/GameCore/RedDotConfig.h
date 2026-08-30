#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RedDotGroupType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RedDotGroupConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_REDDOTCONFIG_METHOD_2_050379D7C7E41D0D_OFFSET UNITYSDK_OFFSET(0x1D38ED00)
#define RPG_GAMECORE_REDDOTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D38EE00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RedDotConfig_TypeDefinitionIndex = 24136;

	class RedDotConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RedDotGroupType, ::RPG::GameCore::RedDotGroupConfig*>* RedDotMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REDDOTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_050379D7C7E41D0D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RedDotConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RedDotConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REDDOTCONFIG_METHOD_2_050379D7C7E41D0D_OFFSET))(a1, a2);
		}
	};
}
