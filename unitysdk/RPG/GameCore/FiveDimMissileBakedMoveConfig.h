#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropBakedMoveConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimTrampolineConfig; }

#define RPG_GAMECORE_FIVEDIMMISSILEBAKEDMOVECONFIG_METHOD_3_0F55787485EC540A_OFFSET UNITYSDK_OFFSET(0x171FB3B0)
#define RPG_GAMECORE_FIVEDIMMISSILEBAKEDMOVECONFIG_METHOD_3_91DD2970D2483A53_OFFSET UNITYSDK_OFFSET(0x171FB3F0)
#define RPG_GAMECORE_FIVEDIMMISSILEBAKEDMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171FB3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMissileBakedMoveConfig_TypeDefinitionIndex = 15287;

	class FiveDimMissileBakedMoveConfig : public ::RPG::GameCore::FiveDimPropBakedMoveConfig
	{
	public:
		::RPG::GameCore::FiveDimTrampolineConfig* InternalTrampolineConfig; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMISSILEBAKEDMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0F55787485EC540A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMissileBakedMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMissileBakedMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMISSILEBAKEDMOVECONFIG_METHOD_3_0F55787485EC540A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_91DD2970D2483A53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMissileBakedMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMissileBakedMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMISSILEBAKEDMOVECONFIG_METHOD_3_91DD2970D2483A53_OFFSET))(a1, a2);
		}
	};
}
