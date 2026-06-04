#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYCOMPAREMP_METHOD_4_4776DC29E16E7910_OFFSET UNITYSDK_OFFSET(0x19441790)
#define RPG_GAMECORE_ADVENTUREBYCOMPAREMP_METHOD_4_6EA6B6C15F4E0719_OFFSET UNITYSDK_OFFSET(0x194415C0)
#define RPG_GAMECORE_ADVENTUREBYCOMPAREMP_METHOD_4_AA6324D93AAA9EE5_OFFSET UNITYSDK_OFFSET(0x194414F0)
#define RPG_GAMECORE_ADVENTUREBYCOMPAREMP_METHOD_4_F1E45B7E10368B41_OFFSET UNITYSDK_OFFSET(0x19441810)
#define RPG_GAMECORE_ADVENTUREBYCOMPAREMP__CTOR_OFFSET UNITYSDK_OFFSET(0x19441570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByCompareMP_TypeDefinitionIndex = 22958;

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

		static ::System::Void Method_4_4776DC29E16E7910(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCompareMP*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCompareMP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPAREMP_METHOD_4_4776DC29E16E7910_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F1E45B7E10368B41(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCompareMP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCompareMP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPAREMP_METHOD_4_F1E45B7E10368B41_OFFSET))(a1, a2);
		}
	};
}
