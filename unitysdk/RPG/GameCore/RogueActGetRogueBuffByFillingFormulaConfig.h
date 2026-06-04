#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYFILLINGFORMULACONFIG_METHOD_6_2F17E4A95D16762C_OFFSET UNITYSDK_OFFSET(0x19AE6830)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYFILLINGFORMULACONFIG_METHOD_6_C3A5D78492352361_OFFSET UNITYSDK_OFFSET(0x19AE6A50)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYFILLINGFORMULACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE6970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueBuffByFillingFormulaConfig_TypeDefinitionIndex = 18631;

	class RogueActGetRogueBuffByFillingFormulaConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYFILLINGFORMULACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_2F17E4A95D16762C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffByFillingFormulaConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffByFillingFormulaConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYFILLINGFORMULACONFIG_METHOD_6_2F17E4A95D16762C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_C3A5D78492352361(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffByFillingFormulaConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffByFillingFormulaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYFILLINGFORMULACONFIG_METHOD_6_C3A5D78492352361_OFFSET))(a1, a2);
		}
	};
}
