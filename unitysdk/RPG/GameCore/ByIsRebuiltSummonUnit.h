#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISREBUILTSUMMONUNIT_METHOD_4_0E91D5EC36D90963_OFFSET UNITYSDK_OFFSET(0x1CF45E00)
#define RPG_GAMECORE_BYISREBUILTSUMMONUNIT_METHOD_4_314617F59C384C17_OFFSET UNITYSDK_OFFSET(0x1CF45C50)
#define RPG_GAMECORE_BYISREBUILTSUMMONUNIT_METHOD_4_941F2C043D62910D_OFFSET UNITYSDK_OFFSET(0x1CF45DD0)
#define RPG_GAMECORE_BYISREBUILTSUMMONUNIT_METHOD_4_BD74D2099D653976_OFFSET UNITYSDK_OFFSET(0x1CF45C10)
#define RPG_GAMECORE_BYISREBUILTSUMMONUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF45C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsRebuiltSummonUnit_TypeDefinitionIndex = 19930;

	class ByIsRebuiltSummonUnit : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SummonUnit; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISREBUILTSUMMONUNIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BD74D2099D653976(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsRebuiltSummonUnit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsRebuiltSummonUnit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISREBUILTSUMMONUNIT_METHOD_4_BD74D2099D653976_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_314617F59C384C17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsRebuiltSummonUnit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsRebuiltSummonUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISREBUILTSUMMONUNIT_METHOD_4_314617F59C384C17_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_941F2C043D62910D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRebuiltSummonUnit*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRebuiltSummonUnit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISREBUILTSUMMONUNIT_METHOD_4_941F2C043D62910D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0E91D5EC36D90963(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRebuiltSummonUnit* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRebuiltSummonUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISREBUILTSUMMONUNIT_METHOD_4_0E91D5EC36D90963_OFFSET))(a1, a2);
		}
	};
}
