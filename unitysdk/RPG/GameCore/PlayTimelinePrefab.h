#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYTIMELINEPREFAB_METHOD_3_13D938A48A1A9B06_OFFSET UNITYSDK_OFFSET(0x19A29FF0)
#define RPG_GAMECORE_PLAYTIMELINEPREFAB_METHOD_3_BA2130244739D3AB_OFFSET UNITYSDK_OFFSET(0x19A29F70)
#define RPG_GAMECORE_PLAYTIMELINEPREFAB__CTOR_OFFSET UNITYSDK_OFFSET(0x19A29FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayTimelinePrefab_TypeDefinitionIndex = 20704;

	class PlayTimelinePrefab : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* PrefabPath; // 0x18
		::RPG::GameCore::DynamicString* AreaName; // 0x20
		::RPG::GameCore::DynamicString* AnchorName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTIMELINEPREFAB__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BA2130244739D3AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayTimelinePrefab*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayTimelinePrefab*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTIMELINEPREFAB_METHOD_3_BA2130244739D3AB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_13D938A48A1A9B06(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayTimelinePrefab* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayTimelinePrefab*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTIMELINEPREFAB_METHOD_3_13D938A48A1A9B06_OFFSET))(a1, a2);
		}
	};
}
