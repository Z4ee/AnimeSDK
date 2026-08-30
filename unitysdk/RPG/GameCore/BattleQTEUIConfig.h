#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEQTEUICONFIG_METHOD_2_54FD53255CA60E38_OFFSET UNITYSDK_OFFSET(0x1B304EE0)
#define RPG_GAMECORE_BATTLEQTEUICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3051B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleQTEUIConfig_TypeDefinitionIndex = 23082;

	class BattleQTEUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UIPath; // 0x10
		::System::String* IconPath; // 0x18
		::RPG::GameCore::DynamicFloat* Delay; // 0x20
		::RPG::GameCore::TargetEvaluator* FollowTargetType; // 0x28
		::System::String* FollowAttachPoint; // 0x30
		::System::String* FollowEffectUniqueName; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEQTEUICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_54FD53255CA60E38(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleQTEUIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleQTEUIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEQTEUICONFIG_METHOD_2_54FD53255CA60E38_OFFSET))(a1, a2);
		}
	};
}
