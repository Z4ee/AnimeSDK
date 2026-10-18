#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropBakedMoveConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEBAKEDMOVECONFIG_METHOD_3_19DEB526C16BF600_OFFSET UNITYSDK_OFFSET(0x1D6A6140)
#define RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEBAKEDMOVECONFIG_METHOD_3_C358EF960F4CA7A8_OFFSET UNITYSDK_OFFSET(0x1D6AE5C0)
#define RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEBAKEDMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A6130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSimpleProjectileBakedMoveConfig_TypeDefinitionIndex = 16686;

	class FiveDimSimpleProjectileBakedMoveConfig : public ::RPG::GameCore::FiveDimPropBakedMoveConfig
	{
	public:
		::RPG::MVector3 CreationOffset; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEBAKEDMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C358EF960F4CA7A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSimpleProjectileBakedMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSimpleProjectileBakedMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEBAKEDMOVECONFIG_METHOD_3_C358EF960F4CA7A8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_19DEB526C16BF600(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSimpleProjectileBakedMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSimpleProjectileBakedMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEBAKEDMOVECONFIG_METHOD_3_19DEB526C16BF600_OFFSET))(a1, a2);
		}
	};
}
