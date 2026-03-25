#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Data
{
	inline static constexpr unsigned int DataAction_TypeDefinitionIndex = 60187;

	class DataAction : public ::System::Object
	{
	public:
		// static const ::System::Byte ActionNone = 0x0; // 0x0
		// static const ::System::Byte ActionInit = 0x1; // 0x0
		// static const ::System::Byte ActionAdd = 0x4; // 0x0
		// static const ::System::Byte ActionChange = 0x8; // 0x0
		// static const ::System::Byte ActionRemove = 0x10; // 0x0
		// static const ::System::Byte ActionAll = 0x18; // 0x0
	};
}
