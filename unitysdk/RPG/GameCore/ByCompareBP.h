#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BPValueType.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREBP_METHOD_4_54D45E9FA7386D4C_OFFSET UNITYSDK_OFFSET(0x1CEB2EF0)
#define RPG_GAMECORE_BYCOMPAREBP_METHOD_4_980706A0FC98F8B1_OFFSET UNITYSDK_OFFSET(0x1CEB2EA0)
#define RPG_GAMECORE_BYCOMPAREBP_METHOD_4_B2DE93E5468AF571_OFFSET UNITYSDK_OFFSET(0x1CEB3170)
#define RPG_GAMECORE_BYCOMPAREBP_METHOD_4_DE15C77EE4CBB66E_OFFSET UNITYSDK_OFFSET(0x1CEB3130)
#define RPG_GAMECORE_BYCOMPAREBP__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEB2EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareBP_TypeDefinitionIndex = 22799;

	class ByCompareBP : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x28
		::RPG::GameCore::BPValueType ValueType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_980706A0FC98F8B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareBP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareBP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBP_METHOD_4_980706A0FC98F8B1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_54D45E9FA7386D4C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareBP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareBP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBP_METHOD_4_54D45E9FA7386D4C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DE15C77EE4CBB66E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareBP*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareBP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBP_METHOD_4_DE15C77EE4CBB66E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B2DE93E5468AF571(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareBP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareBP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBP_METHOD_4_B2DE93E5468AF571_OFFSET))(a1, a2);
		}
	};
}
