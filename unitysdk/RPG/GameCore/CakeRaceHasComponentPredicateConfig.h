#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBasePredicateConfig.h"
#include "unitysdk/RPG/GameCore/CakeRaceComponentType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEHASCOMPONENTPREDICATECONFIG_METHOD_3_CB3B8593AD51DDDE_OFFSET UNITYSDK_OFFSET(0x1B2D2350)
#define RPG_GAMECORE_CAKERACEHASCOMPONENTPREDICATECONFIG_METHOD_3_F620C7817D0CC28E_OFFSET UNITYSDK_OFFSET(0x1B2CDC20)
#define RPG_GAMECORE_CAKERACEHASCOMPONENTPREDICATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2CDC10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceHasComponentPredicateConfig_TypeDefinitionIndex = 17644;

	class CakeRaceHasComponentPredicateConfig : public ::RPG::GameCore::CakeRaceBasePredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CakeRaceComponentType>* ComponentTypes; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEHASCOMPONENTPREDICATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CB3B8593AD51DDDE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceHasComponentPredicateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceHasComponentPredicateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEHASCOMPONENTPREDICATECONFIG_METHOD_3_CB3B8593AD51DDDE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F620C7817D0CC28E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceHasComponentPredicateConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceHasComponentPredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEHASCOMPONENTPREDICATECONFIG_METHOD_3_F620C7817D0CC28E_OFFSET))(a1, a2);
		}
	};
}
