#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTADDROGUEMODIFIERCONFIG_METHOD_6_4E85B7C5FD9FA166_OFFSET UNITYSDK_OFFSET(0x18CBD0F0)
#define RPG_GAMECORE_ROGUEACTADDROGUEMODIFIERCONFIG_METHOD_6_E2AB1374FCDA87C3_OFFSET UNITYSDK_OFFSET(0x18CBCED0)
#define RPG_GAMECORE_ROGUEACTADDROGUEMODIFIERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CBD010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActAddRogueModifierConfig_TypeDefinitionIndex = 18645;

	class RogueActAddRogueModifierConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDROGUEMODIFIERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_E2AB1374FCDA87C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActAddRogueModifierConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActAddRogueModifierConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDROGUEMODIFIERCONFIG_METHOD_6_E2AB1374FCDA87C3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_4E85B7C5FD9FA166(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActAddRogueModifierConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActAddRogueModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDROGUEMODIFIERCONFIG_METHOD_6_4E85B7C5FD9FA166_OFFSET))(a1, a2);
		}
	};
}
