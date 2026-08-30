#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMINCUREQUIPCONFIG_METHOD_6_9B21FFFBB93048AE_OFFSET UNITYSDK_OFFSET(0x1D15D2E0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMINCUREQUIPCONFIG_METHOD_6_B52357F9AAC41A6A_OFFSET UNITYSDK_OFFSET(0x1D15D330)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMINCUREQUIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D15D320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetEquipNumInCurEquipConfig_TypeDefinitionIndex = 19322;

	class GridFightParamGetEquipNumInCurEquipConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMINCUREQUIPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_9B21FFFBB93048AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetEquipNumInCurEquipConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetEquipNumInCurEquipConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMINCUREQUIPCONFIG_METHOD_6_9B21FFFBB93048AE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_B52357F9AAC41A6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetEquipNumInCurEquipConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetEquipNumInCurEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMINCUREQUIPCONFIG_METHOD_6_B52357F9AAC41A6A_OFFSET))(a1, a2);
		}
	};
}
