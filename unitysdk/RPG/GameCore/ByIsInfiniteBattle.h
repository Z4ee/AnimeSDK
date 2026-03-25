#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISINFINITEBATTLE_METHOD_4_1DD51CA7496C7926_OFFSET UNITYSDK_OFFSET(0x17030470)
#define RPG_GAMECORE_BYISINFINITEBATTLE_METHOD_4_B544E3689D95B9AC_OFFSET UNITYSDK_OFFSET(0x17030540)
#define RPG_GAMECORE_BYISINFINITEBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x170304F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsInfiniteBattle_TypeDefinitionIndex = 21270;

	class ByIsInfiniteBattle : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINFINITEBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1DD51CA7496C7926(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInfiniteBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInfiniteBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINFINITEBATTLE_METHOD_4_1DD51CA7496C7926_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B544E3689D95B9AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInfiniteBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInfiniteBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINFINITEBATTLE_METHOD_4_B544E3689D95B9AC_OFFSET))(a1, a2);
		}
	};
}
