#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEBUFFGROUPCONFIG_METHOD_3_1CFD036C0136D889_OFFSET UNITYSDK_OFFSET(0x1D165730)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEBUFFGROUPCONFIG_METHOD_3_7FA70684B42B4F05_OFFSET UNITYSDK_OFFSET(0x1D1656E0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEBUFFGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D165720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRogueBuffGroupConfig_TypeDefinitionIndex = 16984;

	class RogueModifierReplaceContentRogueBuffGroupConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEBUFFGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7FA70684B42B4F05(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueBuffGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueBuffGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEBUFFGROUPCONFIG_METHOD_3_7FA70684B42B4F05_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1CFD036C0136D889(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueBuffGroupConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueBuffGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEBUFFGROUPCONFIG_METHOD_3_1CFD036C0136D889_OFFSET))(a1, a2);
		}
	};
}
