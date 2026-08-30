#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYEQUIPADDITIONALPROPERTYCONFIG_METHOD_3_A3DF1A5DD80966DB_OFFSET UNITYSDK_OFFSET(0x1EE6F4F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYEQUIPADDITIONALPROPERTYCONFIG_METHOD_3_C2F5F39D42EEF277_OFFSET UNITYSDK_OFFSET(0x1EE6F4A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYEQUIPADDITIONALPROPERTYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6F4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSpecifyEquipAdditionalPropertyConfig_TypeDefinitionIndex = 19153;

	class GridFightModifierSpecifyEquipAdditionalPropertyConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYEQUIPADDITIONALPROPERTYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C2F5F39D42EEF277(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSpecifyEquipAdditionalPropertyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSpecifyEquipAdditionalPropertyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYEQUIPADDITIONALPROPERTYCONFIG_METHOD_3_C2F5F39D42EEF277_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A3DF1A5DD80966DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSpecifyEquipAdditionalPropertyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSpecifyEquipAdditionalPropertyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYEQUIPADDITIONALPROPERTYCONFIG_METHOD_3_A3DF1A5DD80966DB_OFFSET))(a1, a2);
		}
	};
}
