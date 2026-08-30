#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACEEQUIPPARAMCONFIG_METHOD_3_14D87F8597D88575_OFFSET UNITYSDK_OFFSET(0x1EE6E9C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACEEQUIPPARAMCONFIG_METHOD_3_82EDDB0C3E684B79_OFFSET UNITYSDK_OFFSET(0x1EE6EA10)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACEEQUIPPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6EA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierReplaceEquipParamConfig_TypeDefinitionIndex = 19154;

	class GridFightModifierReplaceEquipParamConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACEEQUIPPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_14D87F8597D88575(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierReplaceEquipParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierReplaceEquipParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACEEQUIPPARAMCONFIG_METHOD_3_14D87F8597D88575_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_82EDDB0C3E684B79(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierReplaceEquipParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierReplaceEquipParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACEEQUIPPARAMCONFIG_METHOD_3_82EDDB0C3E684B79_OFFSET))(a1, a2);
		}
	};
}
