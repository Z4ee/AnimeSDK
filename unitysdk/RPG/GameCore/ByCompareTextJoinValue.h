#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARETEXTJOINVALUE_METHOD_4_024B2DA5CBC8DDB5_OFFSET UNITYSDK_OFFSET(0x1953C2B0)
#define RPG_GAMECORE_BYCOMPARETEXTJOINVALUE_METHOD_4_95DC7C725B433A17_OFFSET UNITYSDK_OFFSET(0x1953BFB0)
#define RPG_GAMECORE_BYCOMPARETEXTJOINVALUE_METHOD_4_9EE93E5A994F1431_OFFSET UNITYSDK_OFFSET(0x1953C080)
#define RPG_GAMECORE_BYCOMPARETEXTJOINVALUE_METHOD_4_A77D1918695DB7D1_OFFSET UNITYSDK_OFFSET(0x1953C230)
#define RPG_GAMECORE_BYCOMPARETEXTJOINVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1953C030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareTextJoinValue_TypeDefinitionIndex = 19736;

	class ByCompareTextJoinValue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 TextJoinID; // 0x20
		::System::UInt32 Value; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEXTJOINVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_95DC7C725B433A17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTextJoinValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTextJoinValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEXTJOINVALUE_METHOD_4_95DC7C725B433A17_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9EE93E5A994F1431(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTextJoinValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTextJoinValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEXTJOINVALUE_METHOD_4_9EE93E5A994F1431_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A77D1918695DB7D1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTextJoinValue*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTextJoinValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEXTJOINVALUE_METHOD_4_A77D1918695DB7D1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_024B2DA5CBC8DDB5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTextJoinValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTextJoinValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEXTJOINVALUE_METHOD_4_024B2DA5CBC8DDB5_OFFSET))(a1, a2);
		}
	};
}
