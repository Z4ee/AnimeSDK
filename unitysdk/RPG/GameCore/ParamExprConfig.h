#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"
#include "unitysdk/RPG/GameCore/ParamExprType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PARAMEXPRCONFIG_METHOD_4_A687E3B7B29FC14C_OFFSET UNITYSDK_OFFSET(0x199E51F0)
#define RPG_GAMECORE_PARAMEXPRCONFIG_METHOD_4_E987CEF32A2FD927_OFFSET UNITYSDK_OFFSET(0x199E5330)
#define RPG_GAMECORE_PARAMEXPRCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x199E52B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParamExprConfig_TypeDefinitionIndex = 16215;

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

		static ::System::Void Method_4_A687E3B7B29FC14C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamExprConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamExprConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMEXPRCONFIG_METHOD_4_A687E3B7B29FC14C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E987CEF32A2FD927(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamExprConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamExprConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMEXPRCONFIG_METHOD_4_E987CEF32A2FD927_OFFSET))(a1, a2);
		}
	};
}
