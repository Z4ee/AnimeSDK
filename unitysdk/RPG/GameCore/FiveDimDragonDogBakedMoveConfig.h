#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropBakedMoveConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimTrampolineConfig; }

#define RPG_GAMECORE_FIVEDIMDRAGONDOGBAKEDMOVECONFIG_METHOD_3_4FDAE82FC665BB60_OFFSET UNITYSDK_OFFSET(0x188FE070)
#define RPG_GAMECORE_FIVEDIMDRAGONDOGBAKEDMOVECONFIG_METHOD_3_C3AEAF82B2825185_OFFSET UNITYSDK_OFFSET(0x188FE030)
#define RPG_GAMECORE_FIVEDIMDRAGONDOGBAKEDMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188FE060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDragonDogBakedMoveConfig_TypeDefinitionIndex = 15802;

	class FiveDimDragonDogBakedMoveConfig : public ::RPG::GameCore::FiveDimPropBakedMoveConfig
	{
	public:
		::RPG::GameCore::FiveDimTrampolineConfig* InternalTrampolineConfig; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDRAGONDOGBAKEDMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C3AEAF82B2825185(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDragonDogBakedMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDragonDogBakedMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDRAGONDOGBAKEDMOVECONFIG_METHOD_3_C3AEAF82B2825185_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4FDAE82FC665BB60(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDragonDogBakedMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDragonDogBakedMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDRAGONDOGBAKEDMOVECONFIG_METHOD_3_4FDAE82FC665BB60_OFFSET))(a1, a2);
		}
	};
}
