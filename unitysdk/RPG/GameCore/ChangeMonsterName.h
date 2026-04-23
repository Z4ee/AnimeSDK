#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CHANGEMONSTERNAME_METHOD_3_8C5473857B8F2605_OFFSET UNITYSDK_OFFSET(0x187C8A90)
#define RPG_GAMECORE_CHANGEMONSTERNAME_METHOD_3_B907466E7B556416_OFFSET UNITYSDK_OFFSET(0x187C8A10)
#define RPG_GAMECORE_CHANGEMONSTERNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x187C8A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeMonsterName_TypeDefinitionIndex = 22661;

	class ChangeMonsterName : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* NameFromTarget; // 0x20
		::RPG::Client::TextID OverrideName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMONSTERNAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B907466E7B556416(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeMonsterName*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeMonsterName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMONSTERNAME_METHOD_3_B907466E7B556416_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8C5473857B8F2605(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeMonsterName* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeMonsterName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMONSTERNAME_METHOD_3_8C5473857B8F2605_OFFSET))(a1, a2);
		}
	};
}
