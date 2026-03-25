#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDREINCARNATOREQUIPCONFIG_METHOD_3_3F1AA1911A6AD725_OFFSET UNITYSDK_OFFSET(0x17260950)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDREINCARNATOREQUIPCONFIG_METHOD_3_9D520FF3E04A0B0C_OFFSET UNITYSDK_OFFSET(0x17260880)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDREINCARNATOREQUIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17260900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddReincarnatorEquipConfig_TypeDefinitionIndex = 17870;

	class GridFightModifierAddReincarnatorEquipConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDREINCARNATOREQUIPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9D520FF3E04A0B0C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddReincarnatorEquipConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddReincarnatorEquipConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDREINCARNATOREQUIPCONFIG_METHOD_3_9D520FF3E04A0B0C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3F1AA1911A6AD725(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddReincarnatorEquipConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddReincarnatorEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDREINCARNATOREQUIPCONFIG_METHOD_3_3F1AA1911A6AD725_OFFSET))(a1, a2);
		}
	};
}
