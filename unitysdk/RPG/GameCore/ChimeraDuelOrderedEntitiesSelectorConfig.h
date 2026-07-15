#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelEntityComparerBase; }

#define RPG_GAMECORE_CHIMERADUELORDEREDENTITIESSELECTORCONFIG_METHOD_3_49E113AD9039C9AF_OFFSET UNITYSDK_OFFSET(0x1C244560)
#define RPG_GAMECORE_CHIMERADUELORDEREDENTITIESSELECTORCONFIG_METHOD_3_698CCF79791F7A27_OFFSET UNITYSDK_OFFSET(0x1C2445C0)
#define RPG_GAMECORE_CHIMERADUELORDEREDENTITIESSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2445B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelOrderedEntitiesSelectorConfig_TypeDefinitionIndex = 15318;

	class ChimeraDuelOrderedEntitiesSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* Source; // 0x10
		::System::Int32 MaxCount; // 0x18
		::RPG::GameCore::ChimeraDuelEntityComparerBase* Comparer; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELORDEREDENTITIESSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_49E113AD9039C9AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelOrderedEntitiesSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelOrderedEntitiesSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELORDEREDENTITIESSELECTORCONFIG_METHOD_3_49E113AD9039C9AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_698CCF79791F7A27(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelOrderedEntitiesSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelOrderedEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELORDEREDENTITIESSELECTORCONFIG_METHOD_3_698CCF79791F7A27_OFFSET))(a1, a2);
		}
	};
}
