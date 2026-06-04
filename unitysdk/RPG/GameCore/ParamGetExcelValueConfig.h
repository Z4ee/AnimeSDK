#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PARAMGETEXCELVALUECONFIG_METHOD_4_B3D8AEBECF0CC29E_OFFSET UNITYSDK_OFFSET(0x199E5B60)
#define RPG_GAMECORE_PARAMGETEXCELVALUECONFIG_METHOD_4_E31010E82FA3A0EC_OFFSET UNITYSDK_OFFSET(0x199E5A20)
#define RPG_GAMECORE_PARAMGETEXCELVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x199E5AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParamGetExcelValueConfig_TypeDefinitionIndex = 16221;

	class ParamGetExcelValueConfig : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::RPG::GameCore::MiParameterConfigBase* Index; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMGETEXCELVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E31010E82FA3A0EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamGetExcelValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamGetExcelValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMGETEXCELVALUECONFIG_METHOD_4_E31010E82FA3A0EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B3D8AEBECF0CC29E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamGetExcelValueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamGetExcelValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMGETEXCELVALUECONFIG_METHOD_4_B3D8AEBECF0CC29E_OFFSET))(a1, a2);
		}
	};
}
