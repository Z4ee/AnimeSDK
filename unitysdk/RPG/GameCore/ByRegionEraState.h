#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYREGIONERASTATE_METHOD_4_6D8FAEEEE555186E_OFFSET UNITYSDK_OFFSET(0x1703A250)
#define RPG_GAMECORE_BYREGIONERASTATE_METHOD_4_B2035B0A97421840_OFFSET UNITYSDK_OFFSET(0x1703A180)
#define RPG_GAMECORE_BYREGIONERASTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1703A200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByRegionEraState_TypeDefinitionIndex = 20527;

	class ByRegionEraState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::EraStateType EaraState; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYREGIONERASTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B2035B0A97421840(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByRegionEraState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByRegionEraState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYREGIONERASTATE_METHOD_4_B2035B0A97421840_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6D8FAEEEE555186E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByRegionEraState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByRegionEraState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYREGIONERASTATE_METHOD_4_6D8FAEEEE555186E_OFFSET))(a1, a2);
		}
	};
}
