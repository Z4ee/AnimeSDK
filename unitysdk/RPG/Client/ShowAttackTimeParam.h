#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_SHOWATTACKTIMEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA47C8E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ShowAttackTimeParam_TypeDefinitionIndex = 60054;

	class ShowAttackTimeParam : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Entity; // 0x10
		::System::String* IconPath; // 0x18
		::System::Int32 BaseAttackTime; // 0x20
		::System::Boolean IsShow; // 0x24
		::System::Boolean ShowInActionMode; // 0x25
		::System::Int32 EnhancedAttackTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOWATTACKTIMEPARAM__CTOR_OFFSET))(this);
		}
	};
}
