#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYDISTANCE_METHOD_4_1BB6A972D093BC92_OFFSET UNITYSDK_OFFSET(0x19546BB0)
#define RPG_GAMECORE_BYDISTANCE_METHOD_4_629B6F2F679662C1_OFFSET UNITYSDK_OFFSET(0x19546C30)
#define RPG_GAMECORE_BYDISTANCE_METHOD_4_BDB64190ABC520A0_OFFSET UNITYSDK_OFFSET(0x19546800)
#define RPG_GAMECORE_BYDISTANCE_METHOD_4_E839AE69916489E1_OFFSET UNITYSDK_OFFSET(0x195468E0)
#define RPG_GAMECORE_BYDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19546880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByDistance_TypeDefinitionIndex = 19628;

	class ByDistance : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* From; // 0x20
		::RPG::GameCore::TargetEvaluator* To; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x38
		::System::Boolean IgnoreRadius; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDISTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BDB64190ABC520A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByDistance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByDistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDISTANCE_METHOD_4_BDB64190ABC520A0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E839AE69916489E1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByDistance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDISTANCE_METHOD_4_E839AE69916489E1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1BB6A972D093BC92(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDistance*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDISTANCE_METHOD_4_1BB6A972D093BC92_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_629B6F2F679662C1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDISTANCE_METHOD_4_629B6F2F679662C1_OFFSET))(a1, a2);
		}
	};
}
