#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDENHANCECONFIG_METHOD_3_86480E0AC395ED31_OFFSET UNITYSDK_OFFSET(0x1C5CFB50)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDENHANCECONFIG_METHOD_3_D2A150140DBA3155_OFFSET UNITYSDK_OFFSET(0x1C5CFBA0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDENHANCECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5CFB90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddEnhanceConfig_TypeDefinitionIndex = 18657;

	class GridFightModifierAddEnhanceConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDENHANCECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_86480E0AC395ED31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddEnhanceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddEnhanceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDENHANCECONFIG_METHOD_3_86480E0AC395ED31_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D2A150140DBA3155(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddEnhanceConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddEnhanceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDENHANCECONFIG_METHOD_3_D2A150140DBA3155_OFFSET))(a1, a2);
		}
	};
}
