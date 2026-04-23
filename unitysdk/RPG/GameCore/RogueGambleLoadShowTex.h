#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEGAMBLELOADSHOWTEX_METHOD_3_376F93D6D568172B_OFFSET UNITYSDK_OFFSET(0x18D17D40)
#define RPG_GAMECORE_ROGUEGAMBLELOADSHOWTEX_METHOD_3_464438E33D282CB7_OFFSET UNITYSDK_OFFSET(0x18D17C30)
#define RPG_GAMECORE_ROGUEGAMBLELOADSHOWTEX__CTOR_OFFSET UNITYSDK_OFFSET(0x18D17D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueGambleLoadShowTex_TypeDefinitionIndex = 20967;

	class RogueGambleLoadShowTex : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEGAMBLELOADSHOWTEX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_464438E33D282CB7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueGambleLoadShowTex*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueGambleLoadShowTex*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEGAMBLELOADSHOWTEX_METHOD_3_464438E33D282CB7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_376F93D6D568172B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueGambleLoadShowTex* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueGambleLoadShowTex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEGAMBLELOADSHOWTEX_METHOD_3_376F93D6D568172B_OFFSET))(a1, a2);
		}
	};
}
