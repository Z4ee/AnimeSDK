#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GroupFilterExpression.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GROUPFILTERHOYOTAGEXPRESSION_METHOD_3_38663F4D52FEFF05_OFFSET UNITYSDK_OFFSET(0x189E0930)
#define RPG_GAMECORE_GROUPFILTERHOYOTAGEXPRESSION_METHOD_3_D5BC3C34A00A8889_OFFSET UNITYSDK_OFFSET(0x189E0920)
#define RPG_GAMECORE_GROUPFILTERHOYOTAGEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x189E0910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupFilterHoyoTagExpression_TypeDefinitionIndex = 16505;

	class GroupFilterHoyoTagExpression : public ::RPG::GameCore::GroupFilterExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFILTERHOYOTAGEXPRESSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_38663F4D52FEFF05(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupFilterHoyoTagExpression*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupFilterHoyoTagExpression*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFILTERHOYOTAGEXPRESSION_METHOD_3_38663F4D52FEFF05_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D5BC3C34A00A8889(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupFilterHoyoTagExpression* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupFilterHoyoTagExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFILTERHOYOTAGEXPRESSION_METHOD_3_D5BC3C34A00A8889_OFFSET))(a1, a2);
		}
	};
}
