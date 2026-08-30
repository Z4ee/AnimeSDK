#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"
#include "unitysdk/RPG/GameCore/ParamExprType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PARAMEXPRCONFIG_METHOD_4_0BAC5CB0C8351B51_OFFSET UNITYSDK_OFFSET(0x1D4138C0)
#define RPG_GAMECORE_PARAMEXPRCONFIG_METHOD_4_3DAE4A890CE0CAE9_OFFSET UNITYSDK_OFFSET(0x1D413860)
#define RPG_GAMECORE_PARAMEXPRCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4138B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParamExprConfig_TypeDefinitionIndex = 16887;

	class ParamExprConfig : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::RPG::GameCore::ParamExprType ExprType; // 0x10
		::RPG::GameCore::MiParameterConfigBase* Value1; // 0x18
		::RPG::GameCore::MiParameterConfigBase* Value2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMEXPRCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3DAE4A890CE0CAE9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamExprConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamExprConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMEXPRCONFIG_METHOD_4_3DAE4A890CE0CAE9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0BAC5CB0C8351B51(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamExprConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamExprConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMEXPRCONFIG_METHOD_4_0BAC5CB0C8351B51_OFFSET))(a1, a2);
		}
	};
}
