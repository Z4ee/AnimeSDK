#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropBakedMoveConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMPUSHBOXBAKEDMOVECONFIG_METHOD_3_3D834FEFF335FA90_OFFSET UNITYSDK_OFFSET(0x1D8757F0)
#define RPG_GAMECORE_FIVEDIMPUSHBOXBAKEDMOVECONFIG_METHOD_3_590BB2C4FDEFF821_OFFSET UNITYSDK_OFFSET(0x1D873380)
#define RPG_GAMECORE_FIVEDIMPUSHBOXBAKEDMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D873370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPushBoxBakedMoveConfig_TypeDefinitionIndex = 16501;

	class FiveDimPushBoxBakedMoveConfig : public ::RPG::GameCore::FiveDimPropBakedMoveConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPUSHBOXBAKEDMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3D834FEFF335FA90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPushBoxBakedMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPushBoxBakedMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPUSHBOXBAKEDMOVECONFIG_METHOD_3_3D834FEFF335FA90_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_590BB2C4FDEFF821(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPushBoxBakedMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPushBoxBakedMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPUSHBOXBAKEDMOVECONFIG_METHOD_3_590BB2C4FDEFF821_OFFSET))(a1, a2);
		}
	};
}
