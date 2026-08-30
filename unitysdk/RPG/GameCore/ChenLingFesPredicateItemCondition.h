#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesItemPredicateState.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_CHENLINGFESPREDICATEITEMCONDITION_METHOD_2_7889284E1542B0D1_OFFSET UNITYSDK_OFFSET(0x1E0168C0)
#define RPG_GAMECORE_CHENLINGFESPREDICATEITEMCONDITION_METHOD_2_B21B4715732DE9BA_OFFSET UNITYSDK_OFFSET(0x1E016A40)
#define RPG_GAMECORE_CHENLINGFESPREDICATEITEMCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E016A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesPredicateItemCondition_TypeDefinitionIndex = 21261;

	class ChenLingFesPredicateItemCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChenLingFesItemPredicateState PredicateState; // 0x10
		::System::UInt32 ItemID; // 0x14
		::System::UInt32 TagID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESPREDICATEITEMCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7889284E1542B0D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesPredicateItemCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesPredicateItemCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESPREDICATEITEMCONDITION_METHOD_2_7889284E1542B0D1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_B21B4715732DE9BA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ChenLingFesPredicateItemCondition*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ChenLingFesPredicateItemCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESPREDICATEITEMCONDITION_METHOD_2_B21B4715732DE9BA_OFFSET))(a1, a2);
		}
	};
}
