#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTSETBLACKBOARDBYRANDOMCONFIG_METHOD_6_309FEFB74E1EA5A3_OFFSET UNITYSDK_OFFSET(0x19AF8710)
#define RPG_GAMECORE_ROGUEACTSETBLACKBOARDBYRANDOMCONFIG_METHOD_6_C572FA0F488FCE96_OFFSET UNITYSDK_OFFSET(0x19AF84F0)
#define RPG_GAMECORE_ROGUEACTSETBLACKBOARDBYRANDOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF8630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActSetBlackboardByRandomConfig_TypeDefinitionIndex = 18739;

	class RogueActSetBlackboardByRandomConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETBLACKBOARDBYRANDOMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_C572FA0F488FCE96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActSetBlackboardByRandomConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActSetBlackboardByRandomConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETBLACKBOARDBYRANDOMCONFIG_METHOD_6_C572FA0F488FCE96_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_309FEFB74E1EA5A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActSetBlackboardByRandomConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActSetBlackboardByRandomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETBLACKBOARDBYRANDOMCONFIG_METHOD_6_309FEFB74E1EA5A3_OFFSET))(a1, a2);
		}
	};
}
