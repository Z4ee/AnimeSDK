#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTSETGLOBALVALUECONFIG_METHOD_6_9445E8248516A660_OFFSET UNITYSDK_OFFSET(0x19AF8940)
#define RPG_GAMECORE_ROGUEACTSETGLOBALVALUECONFIG_METHOD_6_E45C655423A5226D_OFFSET UNITYSDK_OFFSET(0x19AF8720)
#define RPG_GAMECORE_ROGUEACTSETGLOBALVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF8860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActSetGlobalValueConfig_TypeDefinitionIndex = 18677;

	class RogueActSetGlobalValueConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETGLOBALVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_E45C655423A5226D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActSetGlobalValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActSetGlobalValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETGLOBALVALUECONFIG_METHOD_6_E45C655423A5226D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_9445E8248516A660(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActSetGlobalValueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActSetGlobalValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETGLOBALVALUECONFIG_METHOD_6_9445E8248516A660_OFFSET))(a1, a2);
		}
	};
}
