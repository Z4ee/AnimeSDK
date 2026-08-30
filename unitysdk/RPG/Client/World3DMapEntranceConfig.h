#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class World3DMapEntranceConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_WORLD3DMAPENTRANCECONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0xE437A50)
#define RPG_CLIENT_WORLD3DMAPENTRANCECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xE437AF0)

namespace RPG::Client
{
	inline static constexpr unsigned int World3DMapEntranceConfig_TypeDefinitionIndex = 68250;

	class World3DMapEntranceConfig : public ::System::Object
	{
	public:
		::System::String* Anchor; // 0x10
		::System::UInt32 Priority; // 0x18
		::System::UInt32 FormID; // 0x1C
		::System::UInt32 ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLD3DMAPENTRANCECONFIG__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::World3DMapEntranceConfig* Create(::RPG::GameCore::World3DMapEntranceConfigRow* a1)
		{
			return ((::RPG::Client::World3DMapEntranceConfig*(*)(::RPG::GameCore::World3DMapEntranceConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WORLD3DMAPENTRANCECONFIG_CREATE_OFFSET))(a1);
		}
	};
}
