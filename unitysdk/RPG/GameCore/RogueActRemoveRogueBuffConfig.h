#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREMOVEROGUEBUFFCONFIG_METHOD_6_1541FEBC619A033E_OFFSET UNITYSDK_OFFSET(0x19AF5D90)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEBUFFCONFIG_METHOD_6_63C85B3225DAE62B_OFFSET UNITYSDK_OFFSET(0x19AF5FB0)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF5ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRemoveRogueBuffConfig_TypeDefinitionIndex = 18560;

	class RogueActRemoveRogueBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_1541FEBC619A033E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveRogueBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveRogueBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEBUFFCONFIG_METHOD_6_1541FEBC619A033E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_63C85B3225DAE62B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveRogueBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveRogueBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEBUFFCONFIG_METHOD_6_63C85B3225DAE62B_OFFSET))(a1, a2);
		}
	};
}
