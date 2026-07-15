#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASASSISTAVATAR_METHOD_4_45621FBF6E03A551_OFFSET UNITYSDK_OFFSET(0x1A8C5B60)
#define RPG_GAMECORE_BYHASASSISTAVATAR_METHOD_4_7450135CE2471DA6_OFFSET UNITYSDK_OFFSET(0x1A8C59F0)
#define RPG_GAMECORE_BYHASASSISTAVATAR_METHOD_4_843F2B8CD9A06F30_OFFSET UNITYSDK_OFFSET(0x1A8C5B30)
#define RPG_GAMECORE_BYHASASSISTAVATAR_METHOD_4_B7D43C76263E5BA5_OFFSET UNITYSDK_OFFSET(0x1A8C59B0)
#define RPG_GAMECORE_BYHASASSISTAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8C59E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasAssistAvatar_TypeDefinitionIndex = 20019;

	class ByHasAssistAvatar : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASASSISTAVATAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B7D43C76263E5BA5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasAssistAvatar*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasAssistAvatar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASASSISTAVATAR_METHOD_4_B7D43C76263E5BA5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7450135CE2471DA6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasAssistAvatar* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasAssistAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASASSISTAVATAR_METHOD_4_7450135CE2471DA6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_843F2B8CD9A06F30(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasAssistAvatar*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasAssistAvatar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASASSISTAVATAR_METHOD_4_843F2B8CD9A06F30_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_45621FBF6E03A551(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasAssistAvatar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasAssistAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASASSISTAVATAR_METHOD_4_45621FBF6E03A551_OFFSET))(a1, a2);
		}
	};
}
