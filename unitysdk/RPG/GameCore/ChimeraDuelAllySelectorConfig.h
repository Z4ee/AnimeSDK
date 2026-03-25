#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELALLYSELECTORCONFIG_METHOD_3_197C0DE26EC86861_OFFSET UNITYSDK_OFFSET(0x17095670)
#define RPG_GAMECORE_CHIMERADUELALLYSELECTORCONFIG_METHOD_3_BEBDFB2246C219CC_OFFSET UNITYSDK_OFFSET(0x17095710)
#define RPG_GAMECORE_CHIMERADUELALLYSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17095700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelAllySelectorConfig_TypeDefinitionIndex = 14630;

	class ChimeraDuelAllySelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELALLYSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_197C0DE26EC86861(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelAllySelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelAllySelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELALLYSELECTORCONFIG_METHOD_3_197C0DE26EC86861_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BEBDFB2246C219CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelAllySelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelAllySelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELALLYSELECTORCONFIG_METHOD_3_BEBDFB2246C219CC_OFFSET))(a1, a2);
		}
	};
}
