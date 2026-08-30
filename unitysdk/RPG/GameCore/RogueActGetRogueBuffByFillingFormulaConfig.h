#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYFILLINGFORMULACONFIG_METHOD_6_C3A5D78492352361_OFFSET UNITYSDK_OFFSET(0x1D3B7860)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYFILLINGFORMULACONFIG_METHOD_6_C3ADE2BFFB5EA03D_OFFSET UNITYSDK_OFFSET(0x1D3B7810)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYFILLINGFORMULACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B7850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueBuffByFillingFormulaConfig_TypeDefinitionIndex = 19434;

	class RogueActGetRogueBuffByFillingFormulaConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYFILLINGFORMULACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_C3ADE2BFFB5EA03D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffByFillingFormulaConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffByFillingFormulaConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYFILLINGFORMULACONFIG_METHOD_6_C3ADE2BFFB5EA03D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_C3A5D78492352361(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffByFillingFormulaConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffByFillingFormulaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYFILLINGFORMULACONFIG_METHOD_6_C3A5D78492352361_OFFSET))(a1, a2);
		}
	};
}
