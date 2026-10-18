#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELEVENTTARGETSSELECTORCONFIG_METHOD_3_7977F2CD06ECDD5D_OFFSET UNITYSDK_OFFSET(0x1D573060)
#define RPG_GAMECORE_CHIMERADUELEVENTTARGETSSELECTORCONFIG_METHOD_3_CFDD50E219547178_OFFSET UNITYSDK_OFFSET(0x1D573100)
#define RPG_GAMECORE_CHIMERADUELEVENTTARGETSSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5730F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEventTargetsSelectorConfig_TypeDefinitionIndex = 15909;

	class ChimeraDuelEventTargetsSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEVENTTARGETSSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7977F2CD06ECDD5D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEventTargetsSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEventTargetsSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEVENTTARGETSSELECTORCONFIG_METHOD_3_7977F2CD06ECDD5D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CFDD50E219547178(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEventTargetsSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEventTargetsSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEVENTTARGETSSELECTORCONFIG_METHOD_3_CFDD50E219547178_OFFSET))(a1, a2);
		}
	};
}
