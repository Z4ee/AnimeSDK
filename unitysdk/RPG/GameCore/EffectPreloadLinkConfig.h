#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EFFECTPRELOADLINKCONFIG_METHOD_2_4D5433D7DA61872D_OFFSET UNITYSDK_OFFSET(0x1DB246C0)
#define RPG_GAMECORE_EFFECTPRELOADLINKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB247D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EffectPreloadLinkConfig_TypeDefinitionIndex = 16175;

	class EffectPreloadLinkConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Target; // 0x10
		::System::String* ItemName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTPRELOADLINKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4D5433D7DA61872D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EffectPreloadLinkConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EffectPreloadLinkConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTPRELOADLINKCONFIG_METHOD_2_4D5433D7DA61872D_OFFSET))(a1, a2);
		}
	};
}
