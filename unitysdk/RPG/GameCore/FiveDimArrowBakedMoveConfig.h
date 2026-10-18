#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropBakedMoveConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMARROWBAKEDMOVECONFIG_METHOD_3_0259703D299D1BEB_OFFSET UNITYSDK_OFFSET(0x1D6AEDC0)
#define RPG_GAMECORE_FIVEDIMARROWBAKEDMOVECONFIG_METHOD_3_C65F361466BE695A_OFFSET UNITYSDK_OFFSET(0x1D6AED80)
#define RPG_GAMECORE_FIVEDIMARROWBAKEDMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AEDB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimArrowBakedMoveConfig_TypeDefinitionIndex = 16676;

	class FiveDimArrowBakedMoveConfig : public ::RPG::GameCore::FiveDimPropBakedMoveConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMARROWBAKEDMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C65F361466BE695A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimArrowBakedMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimArrowBakedMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMARROWBAKEDMOVECONFIG_METHOD_3_C65F361466BE695A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0259703D299D1BEB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimArrowBakedMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimArrowBakedMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMARROWBAKEDMOVECONFIG_METHOD_3_0259703D299D1BEB_OFFSET))(a1, a2);
		}
	};
}
