#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMCONFIG_METHOD_6_25B3560A8146BFB7_OFFSET UNITYSDK_OFFSET(0x1D06D5B0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMCONFIG_METHOD_6_A027751BE29FAD1B_OFFSET UNITYSDK_OFFSET(0x1D06D600)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06D5F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetEquipNumConfig_TypeDefinitionIndex = 18768;

	class GridFightParamGetEquipNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_25B3560A8146BFB7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetEquipNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetEquipNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMCONFIG_METHOD_6_25B3560A8146BFB7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_A027751BE29FAD1B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetEquipNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetEquipNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMCONFIG_METHOD_6_A027751BE29FAD1B_OFFSET))(a1, a2);
		}
	};
}
