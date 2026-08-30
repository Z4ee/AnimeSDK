#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCURRENTROGUESHOPHASSTAGE_METHOD_4_25B1A6241A3EF879_OFFSET UNITYSDK_OFFSET(0x1BBD0D70)
#define RPG_GAMECORE_BYCURRENTROGUESHOPHASSTAGE_METHOD_4_793CF6DCBBF5A4C3_OFFSET UNITYSDK_OFFSET(0x1BBD0EB0)
#define RPG_GAMECORE_BYCURRENTROGUESHOPHASSTAGE_METHOD_4_AEC85FEEFF2ADE36_OFFSET UNITYSDK_OFFSET(0x1BBD0EE0)
#define RPG_GAMECORE_BYCURRENTROGUESHOPHASSTAGE_METHOD_4_D3EFB26EA3F1F2F2_OFFSET UNITYSDK_OFFSET(0x1BBD0D30)
#define RPG_GAMECORE_BYCURRENTROGUESHOPHASSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD0D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentRogueShopHasStage_TypeDefinitionIndex = 20808;

	class ByCurrentRogueShopHasStage : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUESHOPHASSTAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D3EFB26EA3F1F2F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentRogueShopHasStage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentRogueShopHasStage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUESHOPHASSTAGE_METHOD_4_D3EFB26EA3F1F2F2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_25B1A6241A3EF879(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentRogueShopHasStage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentRogueShopHasStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUESHOPHASSTAGE_METHOD_4_25B1A6241A3EF879_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_793CF6DCBBF5A4C3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentRogueShopHasStage*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentRogueShopHasStage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUESHOPHASSTAGE_METHOD_4_793CF6DCBBF5A4C3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AEC85FEEFF2ADE36(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentRogueShopHasStage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentRogueShopHasStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUESHOPHASSTAGE_METHOD_4_AEC85FEEFF2ADE36_OFFSET))(a1, a2);
		}
	};
}
