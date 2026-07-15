#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCURRENTCONTAINABILITYTAG_METHOD_4_3E606EBE6796AAEB_OFFSET UNITYSDK_OFFSET(0x1A8B8750)
#define RPG_GAMECORE_BYCURRENTCONTAINABILITYTAG_METHOD_4_4D56FDA5D7994384_OFFSET UNITYSDK_OFFSET(0x1A8B8720)
#define RPG_GAMECORE_BYCURRENTCONTAINABILITYTAG_METHOD_4_77D040ADE0724516_OFFSET UNITYSDK_OFFSET(0x1A8B8540)
#define RPG_GAMECORE_BYCURRENTCONTAINABILITYTAG_METHOD_4_BBE265858387C0FB_OFFSET UNITYSDK_OFFSET(0x1A8B8580)
#define RPG_GAMECORE_BYCURRENTCONTAINABILITYTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8B8570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentContainAbilityTag_TypeDefinitionIndex = 22665;

	class ByCurrentContainAbilityTag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::JsonEnum* AbilityTag; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTCONTAINABILITYTAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_77D040ADE0724516(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentContainAbilityTag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentContainAbilityTag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTCONTAINABILITYTAG_METHOD_4_77D040ADE0724516_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BBE265858387C0FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentContainAbilityTag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentContainAbilityTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTCONTAINABILITYTAG_METHOD_4_BBE265858387C0FB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4D56FDA5D7994384(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentContainAbilityTag*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentContainAbilityTag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTCONTAINABILITYTAG_METHOD_4_4D56FDA5D7994384_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3E606EBE6796AAEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentContainAbilityTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentContainAbilityTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTCONTAINABILITYTAG_METHOD_4_3E606EBE6796AAEB_OFFSET))(a1, a2);
		}
	};
}
