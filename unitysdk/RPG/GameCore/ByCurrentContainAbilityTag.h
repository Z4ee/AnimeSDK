#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCURRENTCONTAINABILITYTAG_METHOD_4_1E230BB147D27A34_OFFSET UNITYSDK_OFFSET(0x19542630)
#define RPG_GAMECORE_BYCURRENTCONTAINABILITYTAG_METHOD_4_380C8106CFED5251_OFFSET UNITYSDK_OFFSET(0x19542340)
#define RPG_GAMECORE_BYCURRENTCONTAINABILITYTAG_METHOD_4_762FD1E815FF7519_OFFSET UNITYSDK_OFFSET(0x195425B0)
#define RPG_GAMECORE_BYCURRENTCONTAINABILITYTAG_METHOD_4_BBE265858387C0FB_OFFSET UNITYSDK_OFFSET(0x19542410)
#define RPG_GAMECORE_BYCURRENTCONTAINABILITYTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x195423C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentContainAbilityTag_TypeDefinitionIndex = 22225;

	class ByCurrentContainAbilityTag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::JsonEnum* AbilityTag; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTCONTAINABILITYTAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_380C8106CFED5251(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentContainAbilityTag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentContainAbilityTag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTCONTAINABILITYTAG_METHOD_4_380C8106CFED5251_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BBE265858387C0FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentContainAbilityTag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentContainAbilityTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTCONTAINABILITYTAG_METHOD_4_BBE265858387C0FB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_762FD1E815FF7519(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentContainAbilityTag*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentContainAbilityTag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTCONTAINABILITYTAG_METHOD_4_762FD1E815FF7519_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1E230BB147D27A34(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentContainAbilityTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentContainAbilityTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTCONTAINABILITYTAG_METHOD_4_1E230BB147D27A34_OFFSET))(a1, a2);
		}
	};
}
