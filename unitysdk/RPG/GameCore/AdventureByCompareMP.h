#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVENTUREBYCOMPAREMP_METHOD_4_6EA6B6C15F4E0719_OFFSET UNITYSDK_OFFSET(0x1866E3F0)
#define RPG_GAMECORE_ADVENTUREBYCOMPAREMP_METHOD_4_AA6324D93AAA9EE5_OFFSET UNITYSDK_OFFSET(0x1866E320)
#define RPG_GAMECORE_ADVENTUREBYCOMPAREMP__CTOR_OFFSET UNITYSDK_OFFSET(0x1866E3A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByCompareMP_TypeDefinitionIndex = 23292;

	class AdventureByCompareMP : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::System::Single CompareValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPAREMP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AA6324D93AAA9EE5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByCompareMP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByCompareMP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPAREMP_METHOD_4_AA6324D93AAA9EE5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6EA6B6C15F4E0719(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByCompareMP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByCompareMP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPAREMP_METHOD_4_6EA6B6C15F4E0719_OFFSET))(a1, a2);
		}
	};
}
