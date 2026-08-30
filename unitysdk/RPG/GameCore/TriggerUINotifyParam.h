#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntityList; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERUINOTIFYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xE757930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerUINotifyParam_TypeDefinitionIndex = 56663;

	class TriggerUINotifyParam : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* FixPointParam; // 0x10
		::RPG::GameCore::GameEntityList* Targets; // 0x18
		::Il2CppArray<::System::String*>* StringParams; // 0x20
		::RPG::Client::TextID TextID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERUINOTIFYPARAM__CTOR_OFFSET))(this);
		}
	};
}
