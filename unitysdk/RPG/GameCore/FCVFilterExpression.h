#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FCVFILTEREXPRESSION_METHOD_2_0BC3BDAA6F437B8C_OFFSET UNITYSDK_OFFSET(0x1D087780)
#define RPG_GAMECORE_FCVFILTEREXPRESSION_METHOD_2_5C3E85EEFDF5174F_OFFSET UNITYSDK_OFFSET(0x1D0878D0)
#define RPG_GAMECORE_FCVFILTEREXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0878C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FCVFilterExpression_TypeDefinitionIndex = 17204;

	class FCVFilterExpression : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FCVFILTEREXPRESSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0BC3BDAA6F437B8C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FCVFilterExpression*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FCVFilterExpression*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FCVFILTEREXPRESSION_METHOD_2_0BC3BDAA6F437B8C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_5C3E85EEFDF5174F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FCVFilterExpression* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FCVFilterExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FCVFILTEREXPRESSION_METHOD_2_5C3E85EEFDF5174F_OFFSET))(a1, a2);
		}
	};
}
