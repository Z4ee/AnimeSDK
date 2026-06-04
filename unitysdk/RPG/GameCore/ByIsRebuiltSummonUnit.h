#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISREBUILTSUMMONUNIT_METHOD_4_314617F59C384C17_OFFSET UNITYSDK_OFFSET(0x1956B520)
#define RPG_GAMECORE_BYISREBUILTSUMMONUNIT_METHOD_4_DA2E7D5D39AEF2D9_OFFSET UNITYSDK_OFFSET(0x1956B450)
#define RPG_GAMECORE_BYISREBUILTSUMMONUNIT_METHOD_4_EE7133843B6743F5_OFFSET UNITYSDK_OFFSET(0x1956B720)
#define RPG_GAMECORE_BYISREBUILTSUMMONUNIT_METHOD_4_F13E56DA12EC77EC_OFFSET UNITYSDK_OFFSET(0x1956B6A0)
#define RPG_GAMECORE_BYISREBUILTSUMMONUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1956B4D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsRebuiltSummonUnit_TypeDefinitionIndex = 19035;

	class ByIsRebuiltSummonUnit : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SummonUnit; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISREBUILTSUMMONUNIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DA2E7D5D39AEF2D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsRebuiltSummonUnit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsRebuiltSummonUnit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISREBUILTSUMMONUNIT_METHOD_4_DA2E7D5D39AEF2D9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_314617F59C384C17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsRebuiltSummonUnit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsRebuiltSummonUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISREBUILTSUMMONUNIT_METHOD_4_314617F59C384C17_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F13E56DA12EC77EC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRebuiltSummonUnit*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRebuiltSummonUnit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISREBUILTSUMMONUNIT_METHOD_4_F13E56DA12EC77EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EE7133843B6743F5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRebuiltSummonUnit* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRebuiltSummonUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISREBUILTSUMMONUNIT_METHOD_4_EE7133843B6743F5_OFFSET))(a1, a2);
		}
	};
}
