#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYCOMPAREDIMENSIONID_METHOD_4_0FCA9A7912A509F5_OFFSET UNITYSDK_OFFSET(0x1BE0FC30)
#define RPG_GAMECORE_ADVBYCOMPAREDIMENSIONID_METHOD_4_6F68A5DB65382A98_OFFSET UNITYSDK_OFFSET(0x1BE0FE60)
#define RPG_GAMECORE_ADVBYCOMPAREDIMENSIONID_METHOD_4_8C035312B409C1F4_OFFSET UNITYSDK_OFFSET(0x1BE0FC80)
#define RPG_GAMECORE_ADVBYCOMPAREDIMENSIONID_METHOD_4_CE875B3A57B71DBF_OFFSET UNITYSDK_OFFSET(0x1BE0FEA0)
#define RPG_GAMECORE_ADVBYCOMPAREDIMENSIONID__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE0FC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByCompareDimensionID_TypeDefinitionIndex = 19788;

	class AdvByCompareDimensionID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::System::Int16 CompareValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREDIMENSIONID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0FCA9A7912A509F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCompareDimensionID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCompareDimensionID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREDIMENSIONID_METHOD_4_0FCA9A7912A509F5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8C035312B409C1F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCompareDimensionID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCompareDimensionID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREDIMENSIONID_METHOD_4_8C035312B409C1F4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6F68A5DB65382A98(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareDimensionID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareDimensionID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREDIMENSIONID_METHOD_4_6F68A5DB65382A98_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CE875B3A57B71DBF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareDimensionID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareDimensionID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREDIMENSIONID_METHOD_4_CE875B3A57B71DBF_OFFSET))(a1, a2);
		}
	};
}
