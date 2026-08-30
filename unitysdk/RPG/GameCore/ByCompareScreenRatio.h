#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESCREENRATIO_METHOD_4_170B98E9538DAF67_OFFSET UNITYSDK_OFFSET(0x1BBB8E90)
#define RPG_GAMECORE_BYCOMPARESCREENRATIO_METHOD_4_9BEF9B85DD88872B_OFFSET UNITYSDK_OFFSET(0x1BBB8CC0)
#define RPG_GAMECORE_BYCOMPARESCREENRATIO_METHOD_4_A6C4DC39FB39B7F0_OFFSET UNITYSDK_OFFSET(0x1BBB8ED0)
#define RPG_GAMECORE_BYCOMPARESCREENRATIO_METHOD_4_C5503579997C48E2_OFFSET UNITYSDK_OFFSET(0x1BBB8C70)
#define RPG_GAMECORE_BYCOMPARESCREENRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBB8CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareScreenRatio_TypeDefinitionIndex = 22016;

	class ByCompareScreenRatio : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::System::Single ReferenceRatio; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCREENRATIO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C5503579997C48E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareScreenRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareScreenRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCREENRATIO_METHOD_4_C5503579997C48E2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9BEF9B85DD88872B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareScreenRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareScreenRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCREENRATIO_METHOD_4_9BEF9B85DD88872B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_170B98E9538DAF67(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareScreenRatio*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareScreenRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCREENRATIO_METHOD_4_170B98E9538DAF67_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A6C4DC39FB39B7F0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareScreenRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareScreenRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCREENRATIO_METHOD_4_A6C4DC39FB39B7F0_OFFSET))(a1, a2);
		}
	};
}
