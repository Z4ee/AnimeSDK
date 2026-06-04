#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMCONFIG_METHOD_6_A027751BE29FAD1B_OFFSET UNITYSDK_OFFSET(0x197F7F40)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMCONFIG_METHOD_6_C2257A8EBA1A0D35_OFFSET UNITYSDK_OFFSET(0x197F7C90)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197F7E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetEquipNumConfig_TypeDefinitionIndex = 18506;

	class GridFightParamGetEquipNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_C2257A8EBA1A0D35(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetEquipNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetEquipNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMCONFIG_METHOD_6_C2257A8EBA1A0D35_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_A027751BE29FAD1B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetEquipNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetEquipNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMCONFIG_METHOD_6_A027751BE29FAD1B_OFFSET))(a1, a2);
		}
	};
}
