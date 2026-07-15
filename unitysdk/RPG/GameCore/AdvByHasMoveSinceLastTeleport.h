#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYHASMOVESINCELASTTELEPORT_METHOD_4_325DB3E34CA73EE7_OFFSET UNITYSDK_OFFSET(0x1BE135F0)
#define RPG_GAMECORE_ADVBYHASMOVESINCELASTTELEPORT_METHOD_4_471BDE745F62F8B6_OFFSET UNITYSDK_OFFSET(0x1BE13630)
#define RPG_GAMECORE_ADVBYHASMOVESINCELASTTELEPORT_METHOD_4_BDA336B31C5E5D62_OFFSET UNITYSDK_OFFSET(0x1BE137B0)
#define RPG_GAMECORE_ADVBYHASMOVESINCELASTTELEPORT_METHOD_4_DEFA82F086D2F26C_OFFSET UNITYSDK_OFFSET(0x1BE137E0)
#define RPG_GAMECORE_ADVBYHASMOVESINCELASTTELEPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE13620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByHasMoveSinceLastTeleport_TypeDefinitionIndex = 19806;

	class AdvByHasMoveSinceLastTeleport : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYHASMOVESINCELASTTELEPORT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_325DB3E34CA73EE7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYHASMOVESINCELASTTELEPORT_METHOD_4_325DB3E34CA73EE7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_471BDE745F62F8B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYHASMOVESINCELASTTELEPORT_METHOD_4_471BDE745F62F8B6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BDA336B31C5E5D62(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYHASMOVESINCELASTTELEPORT_METHOD_4_BDA336B31C5E5D62_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DEFA82F086D2F26C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYHASMOVESINCELASTTELEPORT_METHOD_4_DEFA82F086D2F26C_OFFSET))(a1, a2);
		}
	};
}
