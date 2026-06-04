#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FSVFILTEREXPRESSION_METHOD_2_0B2B1786A99AC05C_OFFSET UNITYSDK_OFFSET(0x19706A80)
#define RPG_GAMECORE_FSVFILTEREXPRESSION_METHOD_2_374112A97D09225F_OFFSET UNITYSDK_OFFSET(0x19706BD0)
#define RPG_GAMECORE_FSVFILTEREXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x19706BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FSVFilterExpression_TypeDefinitionIndex = 16543;

	class FSVFilterExpression : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FSVFILTEREXPRESSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0B2B1786A99AC05C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FSVFilterExpression*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FSVFilterExpression*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FSVFILTEREXPRESSION_METHOD_2_0B2B1786A99AC05C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_374112A97D09225F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FSVFilterExpression* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FSVFilterExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FSVFILTEREXPRESSION_METHOD_2_374112A97D09225F_OFFSET))(a1, a2);
		}
	};
}
