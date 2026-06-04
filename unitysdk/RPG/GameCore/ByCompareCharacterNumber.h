#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECHARACTERNUMBER_METHOD_4_30E9B6BB2733D2E6_OFFSET UNITYSDK_OFFSET(0x19508700)
#define RPG_GAMECORE_BYCOMPARECHARACTERNUMBER_METHOD_4_349CF95126A7A24E_OFFSET UNITYSDK_OFFSET(0x19508A30)
#define RPG_GAMECORE_BYCOMPARECHARACTERNUMBER_METHOD_4_38CE48CB31224984_OFFSET UNITYSDK_OFFSET(0x19508620)
#define RPG_GAMECORE_BYCOMPARECHARACTERNUMBER_METHOD_4_4E7766D60B57006D_OFFSET UNITYSDK_OFFSET(0x19508AB0)
#define RPG_GAMECORE_BYCOMPARECHARACTERNUMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x195086A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareCharacterNumber_TypeDefinitionIndex = 21750;

	class ByCompareCharacterNumber : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean AliveOnly; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::RPG::GameCore::PredicateConfig* Predicate; // 0x30
		::RPG::GameCore::CompareType CompareType; // 0x38
		::RPG::GameCore::DynamicFloat* CompareNumber; // 0x40
		::System::Boolean IgnorePuppet; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERNUMBER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_38CE48CB31224984(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCharacterNumber*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCharacterNumber*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERNUMBER_METHOD_4_38CE48CB31224984_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_30E9B6BB2733D2E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCharacterNumber* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCharacterNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERNUMBER_METHOD_4_30E9B6BB2733D2E6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_349CF95126A7A24E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCharacterNumber*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCharacterNumber*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERNUMBER_METHOD_4_349CF95126A7A24E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4E7766D60B57006D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCharacterNumber* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCharacterNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERNUMBER_METHOD_4_4E7766D60B57006D_OFFSET))(a1, a2);
		}
	};
}
