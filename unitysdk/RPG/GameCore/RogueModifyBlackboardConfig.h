#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFYBLACKBOARDCONFIG_METHOD_2_DBC13D0961A21C97_OFFSET UNITYSDK_OFFSET(0x1D166980)
#define RPG_GAMECORE_ROGUEMODIFYBLACKBOARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1669C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifyBlackboardConfig_TypeDefinitionIndex = 19025;

	class RogueModifyBlackboardConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFYBLACKBOARDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DBC13D0961A21C97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifyBlackboardConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifyBlackboardConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFYBLACKBOARDCONFIG_METHOD_2_DBC13D0961A21C97_OFFSET))(a1, a2);
		}
	};
}
