#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloorConstValueFilterExpression.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FLOORCONSTVALUEFILTERALLEXPRESSION_METHOD_3_C1710868AB6F29EE_OFFSET UNITYSDK_OFFSET(0x1DCAC9D0)
#define RPG_GAMECORE_FLOORCONSTVALUEFILTERALLEXPRESSION_METHOD_3_C5BD305458CC49AA_OFFSET UNITYSDK_OFFSET(0x1DCACA20)
#define RPG_GAMECORE_FLOORCONSTVALUEFILTERALLEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCACA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorConstValueFilterAllExpression_TypeDefinitionIndex = 17211;

	class FloorConstValueFilterAllExpression : public ::RPG::GameCore::FloorConstValueFilterExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCONSTVALUEFILTERALLEXPRESSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C1710868AB6F29EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FloorConstValueFilterAllExpression*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FloorConstValueFilterAllExpression*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCONSTVALUEFILTERALLEXPRESSION_METHOD_3_C1710868AB6F29EE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C5BD305458CC49AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FloorConstValueFilterAllExpression* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FloorConstValueFilterAllExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCONSTVALUEFILTERALLEXPRESSION_METHOD_3_C5BD305458CC49AA_OFFSET))(a1, a2);
		}
	};
}
