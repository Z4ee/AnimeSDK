#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCANPLAYIDLESHOW_METHOD_4_39AF3A92DCEC9946_OFFSET UNITYSDK_OFFSET(0x1D45B280)
#define RPG_GAMECORE_BYCANPLAYIDLESHOW_METHOD_4_3B632155100FCD7E_OFFSET UNITYSDK_OFFSET(0x1D45B4E0)
#define RPG_GAMECORE_BYCANPLAYIDLESHOW_METHOD_4_83C59350E879F8C6_OFFSET UNITYSDK_OFFSET(0x1D45B1C0)
#define RPG_GAMECORE_BYCANPLAYIDLESHOW_METHOD_4_9838FFD06161168F_OFFSET UNITYSDK_OFFSET(0x1D45B460)
#define RPG_GAMECORE_BYCANPLAYIDLESHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D45B240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCanPlayIdleShow_TypeDefinitionIndex = 21087;

	class ByCanPlayIdleShow : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean IgnoreForbidPlayIdleShow; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCANPLAYIDLESHOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_83C59350E879F8C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCanPlayIdleShow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCanPlayIdleShow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCANPLAYIDLESHOW_METHOD_4_83C59350E879F8C6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_39AF3A92DCEC9946(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCanPlayIdleShow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCanPlayIdleShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCANPLAYIDLESHOW_METHOD_4_39AF3A92DCEC9946_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9838FFD06161168F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCanPlayIdleShow*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCanPlayIdleShow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCANPLAYIDLESHOW_METHOD_4_9838FFD06161168F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3B632155100FCD7E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCanPlayIdleShow* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCanPlayIdleShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCANPLAYIDLESHOW_METHOD_4_3B632155100FCD7E_OFFSET))(a1, a2);
		}
	};
}
