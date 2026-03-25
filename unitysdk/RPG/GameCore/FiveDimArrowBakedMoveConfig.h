#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropBakedMoveConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMARROWBAKEDMOVECONFIG_METHOD_3_61C283336651683D_OFFSET UNITYSDK_OFFSET(0x171DD790)
#define RPG_GAMECORE_FIVEDIMARROWBAKEDMOVECONFIG_METHOD_3_A48B93AC69DB0F6C_OFFSET UNITYSDK_OFFSET(0x171DD750)
#define RPG_GAMECORE_FIVEDIMARROWBAKEDMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171DD780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimArrowBakedMoveConfig_TypeDefinitionIndex = 15281;

	class FiveDimArrowBakedMoveConfig : public ::RPG::GameCore::FiveDimPropBakedMoveConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMARROWBAKEDMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A48B93AC69DB0F6C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimArrowBakedMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimArrowBakedMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMARROWBAKEDMOVECONFIG_METHOD_3_A48B93AC69DB0F6C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_61C283336651683D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimArrowBakedMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimArrowBakedMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMARROWBAKEDMOVECONFIG_METHOD_3_61C283336651683D_OFFSET))(a1, a2);
		}
	};
}
