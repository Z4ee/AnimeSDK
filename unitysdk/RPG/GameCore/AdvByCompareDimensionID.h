#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYCOMPAREDIMENSIONID_METHOD_4_0FCA9A7912A509F5_OFFSET UNITYSDK_OFFSET(0x1CDBBF90)
#define RPG_GAMECORE_ADVBYCOMPAREDIMENSIONID_METHOD_4_6F68A5DB65382A98_OFFSET UNITYSDK_OFFSET(0x1CDBC1C0)
#define RPG_GAMECORE_ADVBYCOMPAREDIMENSIONID_METHOD_4_8C035312B409C1F4_OFFSET UNITYSDK_OFFSET(0x1CDBBFE0)
#define RPG_GAMECORE_ADVBYCOMPAREDIMENSIONID_METHOD_4_CE875B3A57B71DBF_OFFSET UNITYSDK_OFFSET(0x1CDBC200)
#define RPG_GAMECORE_ADVBYCOMPAREDIMENSIONID__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDBBFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByCompareDimensionID_TypeDefinitionIndex = 20334;

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
