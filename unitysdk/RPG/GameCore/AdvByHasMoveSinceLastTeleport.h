#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYHASMOVESINCELASTTELEPORT_METHOD_4_00CE255883B64C5A_OFFSET UNITYSDK_OFFSET(0x1941B220)
#define RPG_GAMECORE_ADVBYHASMOVESINCELASTTELEPORT_METHOD_4_10746A86154753FB_OFFSET UNITYSDK_OFFSET(0x1941B1A0)
#define RPG_GAMECORE_ADVBYHASMOVESINCELASTTELEPORT_METHOD_4_471BDE745F62F8B6_OFFSET UNITYSDK_OFFSET(0x1941B020)
#define RPG_GAMECORE_ADVBYHASMOVESINCELASTTELEPORT_METHOD_4_6E12FEA48378C488_OFFSET UNITYSDK_OFFSET(0x1941AF50)
#define RPG_GAMECORE_ADVBYHASMOVESINCELASTTELEPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1941AFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByHasMoveSinceLastTeleport_TypeDefinitionIndex = 19448;

	class AdvByHasMoveSinceLastTeleport : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYHASMOVESINCELASTTELEPORT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6E12FEA48378C488(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYHASMOVESINCELASTTELEPORT_METHOD_4_6E12FEA48378C488_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_471BDE745F62F8B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYHASMOVESINCELASTTELEPORT_METHOD_4_471BDE745F62F8B6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_10746A86154753FB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYHASMOVESINCELASTTELEPORT_METHOD_4_10746A86154753FB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_00CE255883B64C5A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYHASMOVESINCELASTTELEPORT_METHOD_4_00CE255883B64C5A_OFFSET))(a1, a2);
		}
	};
}
