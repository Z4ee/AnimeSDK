#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETGLOBALSAVEDVALUECONFIG_METHOD_6_0168730F2A5A99D8_OFFSET UNITYSDK_OFFSET(0x1EE717C0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETGLOBALSAVEDVALUECONFIG_METHOD_6_F53C151A83F24A9C_OFFSET UNITYSDK_OFFSET(0x1EE71770)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETGLOBALSAVEDVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE717B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetGlobalSavedValueConfig_TypeDefinitionIndex = 19318;

	class GridFightParamGetGlobalSavedValueConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETGLOBALSAVEDVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_F53C151A83F24A9C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetGlobalSavedValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetGlobalSavedValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETGLOBALSAVEDVALUECONFIG_METHOD_6_F53C151A83F24A9C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_0168730F2A5A99D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetGlobalSavedValueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetGlobalSavedValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETGLOBALSAVEDVALUECONFIG_METHOD_6_0168730F2A5A99D8_OFFSET))(a1, a2);
		}
	};
}
