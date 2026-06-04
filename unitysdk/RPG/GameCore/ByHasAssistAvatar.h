#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASASSISTAVATAR_METHOD_4_13736C8700727D99_OFFSET UNITYSDK_OFFSET(0x1954CD50)
#define RPG_GAMECORE_BYHASASSISTAVATAR_METHOD_4_7450135CE2471DA6_OFFSET UNITYSDK_OFFSET(0x1954CC10)
#define RPG_GAMECORE_BYHASASSISTAVATAR_METHOD_4_D5D6821474F075EC_OFFSET UNITYSDK_OFFSET(0x1954CB40)
#define RPG_GAMECORE_BYHASASSISTAVATAR_METHOD_4_DF8A3948AB0EFF7D_OFFSET UNITYSDK_OFFSET(0x1954CDD0)
#define RPG_GAMECORE_BYHASASSISTAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1954CBC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasAssistAvatar_TypeDefinitionIndex = 19660;

	class ByHasAssistAvatar : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASASSISTAVATAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D5D6821474F075EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasAssistAvatar*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasAssistAvatar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASASSISTAVATAR_METHOD_4_D5D6821474F075EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7450135CE2471DA6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasAssistAvatar* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasAssistAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASASSISTAVATAR_METHOD_4_7450135CE2471DA6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_13736C8700727D99(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasAssistAvatar*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasAssistAvatar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASASSISTAVATAR_METHOD_4_13736C8700727D99_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DF8A3948AB0EFF7D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasAssistAvatar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasAssistAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASASSISTAVATAR_METHOD_4_DF8A3948AB0EFF7D_OFFSET))(a1, a2);
		}
	};
}
