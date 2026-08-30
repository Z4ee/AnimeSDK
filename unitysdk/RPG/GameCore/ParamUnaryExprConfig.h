#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"
#include "unitysdk/RPG/GameCore/ParamUnaryExprType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PARAMUNARYEXPRCONFIG_METHOD_4_B4E54B9AA1F58EFD_OFFSET UNITYSDK_OFFSET(0x1D30B570)
#define RPG_GAMECORE_PARAMUNARYEXPRCONFIG_METHOD_4_EA63E0761B9E42EB_OFFSET UNITYSDK_OFFSET(0x1D30B510)
#define RPG_GAMECORE_PARAMUNARYEXPRCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D30B560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParamUnaryExprConfig_TypeDefinitionIndex = 16889;

	class ParamUnaryExprConfig : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::RPG::GameCore::ParamUnaryExprType ExprType; // 0x10
		::RPG::GameCore::MiParameterConfigBase* Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMUNARYEXPRCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EA63E0761B9E42EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamUnaryExprConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamUnaryExprConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMUNARYEXPRCONFIG_METHOD_4_EA63E0761B9E42EB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B4E54B9AA1F58EFD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamUnaryExprConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamUnaryExprConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMUNARYEXPRCONFIG_METHOD_4_B4E54B9AA1F58EFD_OFFSET))(a1, a2);
		}
	};
}
