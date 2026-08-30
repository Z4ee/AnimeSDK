#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMTOTALEQUIPCNTCONFIG_METHOD_6_085C62BC458ADDC6_OFFSET UNITYSDK_OFFSET(0x1D15DFF0)
#define RPG_GAMECORE_GRIDFIGHTPARAMTOTALEQUIPCNTCONFIG_METHOD_6_FBA42590AFEB836A_OFFSET UNITYSDK_OFFSET(0x1D15DFA0)
#define RPG_GAMECORE_GRIDFIGHTPARAMTOTALEQUIPCNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D15DFE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamTotalEquipCntConfig_TypeDefinitionIndex = 19286;

	class GridFightParamTotalEquipCntConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMTOTALEQUIPCNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_FBA42590AFEB836A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamTotalEquipCntConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamTotalEquipCntConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMTOTALEQUIPCNTCONFIG_METHOD_6_FBA42590AFEB836A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_085C62BC458ADDC6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamTotalEquipCntConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamTotalEquipCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMTOTALEQUIPCNTCONFIG_METHOD_6_085C62BC458ADDC6_OFFSET))(a1, a2);
		}
	};
}
