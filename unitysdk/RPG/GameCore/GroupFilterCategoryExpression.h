#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GroupFilterExpression.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GROUPFILTERCATEGORYEXPRESSION_METHOD_3_35B57FCF113276F8_OFFSET UNITYSDK_OFFSET(0x198137E0)
#define RPG_GAMECORE_GROUPFILTERCATEGORYEXPRESSION_METHOD_3_B6A8EF60CE6C99BC_OFFSET UNITYSDK_OFFSET(0x19813790)
#define RPG_GAMECORE_GROUPFILTERCATEGORYEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x198137D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupFilterCategoryExpression_TypeDefinitionIndex = 16537;

	class GroupFilterCategoryExpression : public ::RPG::GameCore::GroupFilterExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFILTERCATEGORYEXPRESSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B6A8EF60CE6C99BC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupFilterCategoryExpression*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupFilterCategoryExpression*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFILTERCATEGORYEXPRESSION_METHOD_3_B6A8EF60CE6C99BC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_35B57FCF113276F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupFilterCategoryExpression* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupFilterCategoryExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFILTERCATEGORYEXPRESSION_METHOD_3_35B57FCF113276F8_OFFSET))(a1, a2);
		}
	};
}
