#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREPLACEROGUEBUFFCONFIG_METHOD_6_778C6EA9A7149246_OFFSET UNITYSDK_OFFSET(0x19AF77D0)
#define RPG_GAMECORE_ROGUEACTREPLACEROGUEBUFFCONFIG_METHOD_6_9D6A52ADA6B4CAD3_OFFSET UNITYSDK_OFFSET(0x19AF79F0)
#define RPG_GAMECORE_ROGUEACTREPLACEROGUEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF7910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActReplaceRogueBuffConfig_TypeDefinitionIndex = 18562;

	class RogueActReplaceRogueBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_778C6EA9A7149246(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceRogueBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceRogueBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEBUFFCONFIG_METHOD_6_778C6EA9A7149246_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_9D6A52ADA6B4CAD3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceRogueBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceRogueBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEBUFFCONFIG_METHOD_6_9D6A52ADA6B4CAD3_OFFSET))(a1, a2);
		}
	};
}
