#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELHIGHESTATKALLYSELECTORCONFIG_METHOD_3_7544F02419A60E4F_OFFSET UNITYSDK_OFFSET(0x1CFC7BF0)
#define RPG_GAMECORE_CHIMERADUELHIGHESTATKALLYSELECTORCONFIG_METHOD_3_ABD0514754CED5DE_OFFSET UNITYSDK_OFFSET(0x1CFC7C90)
#define RPG_GAMECORE_CHIMERADUELHIGHESTATKALLYSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC7C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelHighestAtkAllySelectorConfig_TypeDefinitionIndex = 15765;

	class ChimeraDuelHighestAtkAllySelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELHIGHESTATKALLYSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7544F02419A60E4F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelHighestAtkAllySelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelHighestAtkAllySelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELHIGHESTATKALLYSELECTORCONFIG_METHOD_3_7544F02419A60E4F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ABD0514754CED5DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelHighestAtkAllySelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelHighestAtkAllySelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELHIGHESTATKALLYSELECTORCONFIG_METHOD_3_ABD0514754CED5DE_OFFSET))(a1, a2);
		}
	};
}
