#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelBubbleEventType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraDuelBubbleEvent; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT___C__DISPLAYCLASS1_0__CREATEFACTORY_B__0_OFFSET UNITYSDK_OFFSET(0x16E17FD0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16E17E30)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelBubbleEvent___c__DisplayClass1_0_TypeDefinitionIndex = 74320;

	class ChimeraDuelBubbleEvent___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Func_1<::System::Single>* getDuration; // 0x10
		::System::Int32 uniqueID; // 0x18
		::System::UInt32 skillID; // 0x1C
		::System::UInt32 configID; // 0x20
		::RPG::GameCore::ChimeraDuelBubbleEventType eventType; // 0x24
		::RPG::GameCore::ChimeraDuelTeamType teamType; // 0x28
		::System::Int32 arg; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraDuelBubbleEvent* _CreateFactory_b__0()
		{
			return ((::RPG::Client::Prop::ChimeraDuelBubbleEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT___C__DISPLAYCLASS1_0__CREATEFACTORY_B__0_OFFSET))(this);
		}
	};
}
