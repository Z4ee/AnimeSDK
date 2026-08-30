#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECHARACTERNUMBER_METHOD_4_2C7055D190232589_OFFSET UNITYSDK_OFFSET(0x1C30DFD0)
#define RPG_GAMECORE_BYCOMPARECHARACTERNUMBER_METHOD_4_30E9B6BB2733D2E6_OFFSET UNITYSDK_OFFSET(0x1C30DC60)
#define RPG_GAMECORE_BYCOMPARECHARACTERNUMBER_METHOD_4_AFE40E0D5C77887F_OFFSET UNITYSDK_OFFSET(0x1C30DF90)
#define RPG_GAMECORE_BYCOMPARECHARACTERNUMBER_METHOD_4_E81DA2C2EB557C83_OFFSET UNITYSDK_OFFSET(0x1C30DC10)
#define RPG_GAMECORE_BYCOMPARECHARACTERNUMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C30DC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareCharacterNumber_TypeDefinitionIndex = 22745;

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

		static ::System::Void Method_4_E81DA2C2EB557C83(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCharacterNumber*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCharacterNumber*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERNUMBER_METHOD_4_E81DA2C2EB557C83_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_30E9B6BB2733D2E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCharacterNumber* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCharacterNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERNUMBER_METHOD_4_30E9B6BB2733D2E6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AFE40E0D5C77887F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCharacterNumber*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCharacterNumber*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERNUMBER_METHOD_4_AFE40E0D5C77887F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2C7055D190232589(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCharacterNumber* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCharacterNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERNUMBER_METHOD_4_2C7055D190232589_OFFSET))(a1, a2);
		}
	};
}
