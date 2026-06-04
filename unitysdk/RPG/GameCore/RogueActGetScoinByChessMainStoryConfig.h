#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETSCOINBYCHESSMAINSTORYCONFIG_METHOD_6_0DC0514603D38FC3_OFFSET UNITYSDK_OFFSET(0x19AE88A0)
#define RPG_GAMECORE_ROGUEACTGETSCOINBYCHESSMAINSTORYCONFIG_METHOD_6_1AD180D494C5E9B6_OFFSET UNITYSDK_OFFSET(0x19AE8680)
#define RPG_GAMECORE_ROGUEACTGETSCOINBYCHESSMAINSTORYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE87C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetScoinByChessMainStoryConfig_TypeDefinitionIndex = 18618;

	class RogueActGetScoinByChessMainStoryConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETSCOINBYCHESSMAINSTORYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_1AD180D494C5E9B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetScoinByChessMainStoryConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetScoinByChessMainStoryConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETSCOINBYCHESSMAINSTORYCONFIG_METHOD_6_1AD180D494C5E9B6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_0DC0514603D38FC3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetScoinByChessMainStoryConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetScoinByChessMainStoryConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETSCOINBYCHESSMAINSTORYCONFIG_METHOD_6_0DC0514603D38FC3_OFFSET))(a1, a2);
		}
	};
}
