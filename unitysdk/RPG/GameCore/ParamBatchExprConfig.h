#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"
#include "unitysdk/RPG/GameCore/ParamExprType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PARAMBATCHEXPRCONFIG_METHOD_4_957678D67209FC44_OFFSET UNITYSDK_OFFSET(0x1D30A3D0)
#define RPG_GAMECORE_PARAMBATCHEXPRCONFIG_METHOD_4_EAC47D1D5D405EDA_OFFSET UNITYSDK_OFFSET(0x1D30A430)
#define RPG_GAMECORE_PARAMBATCHEXPRCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D30A420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParamBatchExprConfig_TypeDefinitionIndex = 16890;

	class ParamBatchExprConfig : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::RPG::GameCore::ParamExprType ExprType; // 0x10
		::Il2CppArray<::RPG::GameCore::MiParameterConfigBase*>* ValueList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMBATCHEXPRCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_957678D67209FC44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamBatchExprConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamBatchExprConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMBATCHEXPRCONFIG_METHOD_4_957678D67209FC44_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EAC47D1D5D405EDA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamBatchExprConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamBatchExprConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMBATCHEXPRCONFIG_METHOD_4_EAC47D1D5D405EDA_OFFSET))(a1, a2);
		}
	};
}
