#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACEEQUIPCONFIG_METHOD_3_703B1AA7D158C7C7_OFFSET UNITYSDK_OFFSET(0x197F3370)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACEEQUIPCONFIG_METHOD_3_D48477AA86899C5E_OFFSET UNITYSDK_OFFSET(0x197EE950)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACEEQUIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197EE900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierReplaceEquipConfig_TypeDefinitionIndex = 18417;

	class GridFightModifierReplaceEquipConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACEEQUIPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_703B1AA7D158C7C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierReplaceEquipConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierReplaceEquipConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACEEQUIPCONFIG_METHOD_3_703B1AA7D158C7C7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D48477AA86899C5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierReplaceEquipConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierReplaceEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACEEQUIPCONFIG_METHOD_3_D48477AA86899C5E_OFFSET))(a1, a2);
		}
	};
}
