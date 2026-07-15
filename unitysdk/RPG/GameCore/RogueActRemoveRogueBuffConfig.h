#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREMOVEROGUEBUFFCONFIG_METHOD_6_198B971665C74287_OFFSET UNITYSDK_OFFSET(0x1C49D8A0)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEBUFFCONFIG_METHOD_6_63C85B3225DAE62B_OFFSET UNITYSDK_OFFSET(0x1C49D8F0)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C49D8E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRemoveRogueBuffConfig_TypeDefinitionIndex = 18836;

	class RogueActRemoveRogueBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_198B971665C74287(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveRogueBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveRogueBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEBUFFCONFIG_METHOD_6_198B971665C74287_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_63C85B3225DAE62B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveRogueBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveRogueBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEBUFFCONFIG_METHOD_6_63C85B3225DAE62B_OFFSET))(a1, a2);
		}
	};
}
