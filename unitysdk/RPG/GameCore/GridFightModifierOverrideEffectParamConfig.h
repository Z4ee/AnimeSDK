#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDEEFFECTPARAMCONFIG_METHOD_3_49F81602E5483B9E_OFFSET UNITYSDK_OFFSET(0x1EE6E650)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDEEFFECTPARAMCONFIG_METHOD_3_C0AA406EDBFCE782_OFFSET UNITYSDK_OFFSET(0x1EE6E600)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDEEFFECTPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6E640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierOverrideEffectParamConfig_TypeDefinitionIndex = 19228;

	class GridFightModifierOverrideEffectParamConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDEEFFECTPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C0AA406EDBFCE782(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierOverrideEffectParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierOverrideEffectParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDEEFFECTPARAMCONFIG_METHOD_3_C0AA406EDBFCE782_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_49F81602E5483B9E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierOverrideEffectParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierOverrideEffectParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDEEFFECTPARAMCONFIG_METHOD_3_49F81602E5483B9E_OFFSET))(a1, a2);
		}
	};
}
