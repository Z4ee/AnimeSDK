#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropBakedMoveConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMPUSHBOXBAKEDMOVECONFIG_METHOD_3_0C522DA4FCCA514E_OFFSET UNITYSDK_OFFSET(0x1D6A86E0)
#define RPG_GAMECORE_FIVEDIMPUSHBOXBAKEDMOVECONFIG_METHOD_3_A759DF46EBAE1A1F_OFFSET UNITYSDK_OFFSET(0x1D6A5EF0)
#define RPG_GAMECORE_FIVEDIMPUSHBOXBAKEDMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A5EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPushBoxBakedMoveConfig_TypeDefinitionIndex = 16677;

	class FiveDimPushBoxBakedMoveConfig : public ::RPG::GameCore::FiveDimPropBakedMoveConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPUSHBOXBAKEDMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0C522DA4FCCA514E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPushBoxBakedMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPushBoxBakedMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPUSHBOXBAKEDMOVECONFIG_METHOD_3_0C522DA4FCCA514E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A759DF46EBAE1A1F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPushBoxBakedMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPushBoxBakedMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPUSHBOXBAKEDMOVECONFIG_METHOD_3_A759DF46EBAE1A1F_OFFSET))(a1, a2);
		}
	};
}
