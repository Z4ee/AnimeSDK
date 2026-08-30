#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8B83CE81FFD7409A;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLEALERTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xC8D4E40)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAlertParam_TypeDefinitionIndex = 73194;

	class BattleAlertParam : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Entity; // 0x10
		::System::Collections::Generic::List_1<::Class_1_8B83CE81FFD7409A*>* SkillParams; // 0x18
		::System::Boolean IsShow; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEALERTPARAM__CTOR_OFFSET))(this);
		}
	};
}
