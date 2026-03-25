#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GROUPFILTEREXPRESSION_METHOD_2_249542CE6EBA02E9_OFFSET UNITYSDK_OFFSET(0x1728BF60)
#define RPG_GAMECORE_GROUPFILTEREXPRESSION_METHOD_2_71FB6D7059D1051B_OFFSET UNITYSDK_OFFSET(0x1728C0B0)
#define RPG_GAMECORE_GROUPFILTEREXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1728BF50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupFilterExpression_TypeDefinitionIndex = 15978;

	class GroupFilterExpression : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFILTEREXPRESSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_249542CE6EBA02E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupFilterExpression*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupFilterExpression*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFILTEREXPRESSION_METHOD_2_249542CE6EBA02E9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_71FB6D7059D1051B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupFilterExpression* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupFilterExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFILTEREXPRESSION_METHOD_2_71FB6D7059D1051B_OFFSET))(a1, a2);
		}
	};
}
