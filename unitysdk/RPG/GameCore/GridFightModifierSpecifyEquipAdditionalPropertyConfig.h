#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYEQUIPADDITIONALPROPERTYCONFIG_METHOD_3_A3DF1A5DD80966DB_OFFSET UNITYSDK_OFFSET(0x197F4680)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYEQUIPADDITIONALPROPERTYCONFIG_METHOD_3_E98992F0C1DCC842_OFFSET UNITYSDK_OFFSET(0x197F45B0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYEQUIPADDITIONALPROPERTYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197F4630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSpecifyEquipAdditionalPropertyConfig_TypeDefinitionIndex = 18383;

	class GridFightModifierSpecifyEquipAdditionalPropertyConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYEQUIPADDITIONALPROPERTYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E98992F0C1DCC842(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSpecifyEquipAdditionalPropertyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSpecifyEquipAdditionalPropertyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYEQUIPADDITIONALPROPERTYCONFIG_METHOD_3_E98992F0C1DCC842_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A3DF1A5DD80966DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSpecifyEquipAdditionalPropertyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSpecifyEquipAdditionalPropertyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYEQUIPADDITIONALPROPERTYCONFIG_METHOD_3_A3DF1A5DD80966DB_OFFSET))(a1, a2);
		}
	};
}
