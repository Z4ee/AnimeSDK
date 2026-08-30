#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD_METHOD_4_706914C5EC97D9BE_OFFSET UNITYSDK_OFFSET(0x1BBE45C0)
#define RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD_METHOD_4_9A9CE92F639DC63D_OFFSET UNITYSDK_OFFSET(0x1BBE4600)
#define RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD_METHOD_4_CEFAC115426F3CB7_OFFSET UNITYSDK_OFFSET(0x1BBE4740)
#define RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD_METHOD_4_D1182192EC8F758A_OFFSET UNITYSDK_OFFSET(0x1BBE4770)
#define RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBE45F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasUnGottenLevelReward_TypeDefinitionIndex = 20992;

	class ByHasUnGottenLevelReward : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_706914C5EC97D9BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasUnGottenLevelReward*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasUnGottenLevelReward*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD_METHOD_4_706914C5EC97D9BE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9A9CE92F639DC63D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasUnGottenLevelReward* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasUnGottenLevelReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD_METHOD_4_9A9CE92F639DC63D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CEFAC115426F3CB7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasUnGottenLevelReward*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasUnGottenLevelReward*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD_METHOD_4_CEFAC115426F3CB7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D1182192EC8F758A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasUnGottenLevelReward* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasUnGottenLevelReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD_METHOD_4_D1182192EC8F758A_OFFSET))(a1, a2);
		}
	};
}
