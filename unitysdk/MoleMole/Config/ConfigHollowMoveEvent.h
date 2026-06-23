#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWMOVEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xE96CA20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowMoveEvent_TypeDefinitionIndex = 67865;

	class ConfigHollowMoveEvent : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::String* MoveEventUpBehaviorKey; // 0x58
		::System::String* MoveEventDownBehaviorKey; // 0x60
		::System::String* MoveEventLeftBehaviorKey; // 0x68
		::System::String* MoveEventRightBehaviorKey; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWMOVEEVENT__CTOR_OFFSET))(this);
		}
	};
}
