#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCURRENTROGUESHOPHASSTAGE_METHOD_4_25B1A6241A3EF879_OFFSET UNITYSDK_OFFSET(0x19542E90)
#define RPG_GAMECORE_BYCURRENTROGUESHOPHASSTAGE_METHOD_4_4991F5D28341B772_OFFSET UNITYSDK_OFFSET(0x19543050)
#define RPG_GAMECORE_BYCURRENTROGUESHOPHASSTAGE_METHOD_4_AC72F8BC8AF137F3_OFFSET UNITYSDK_OFFSET(0x19542DC0)
#define RPG_GAMECORE_BYCURRENTROGUESHOPHASSTAGE_METHOD_4_CC11C006FCDC6E5A_OFFSET UNITYSDK_OFFSET(0x19542FD0)
#define RPG_GAMECORE_BYCURRENTROGUESHOPHASSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19542E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentRogueShopHasStage_TypeDefinitionIndex = 19894;

	class ByCurrentRogueShopHasStage : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUESHOPHASSTAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AC72F8BC8AF137F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentRogueShopHasStage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentRogueShopHasStage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUESHOPHASSTAGE_METHOD_4_AC72F8BC8AF137F3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_25B1A6241A3EF879(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentRogueShopHasStage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentRogueShopHasStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUESHOPHASSTAGE_METHOD_4_25B1A6241A3EF879_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CC11C006FCDC6E5A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentRogueShopHasStage*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentRogueShopHasStage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUESHOPHASSTAGE_METHOD_4_CC11C006FCDC6E5A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4991F5D28341B772(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentRogueShopHasStage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentRogueShopHasStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUESHOPHASSTAGE_METHOD_4_4991F5D28341B772_OFFSET))(a1, a2);
		}
	};
}
