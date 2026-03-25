#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ParkourTalkType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PARKOURTRIGGEREVENTCONTENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1748BB40)
#define RPG_GAMECORE_PARKOURTRIGGEREVENTCONTENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1748BD50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParkourTriggerEventContentRow_TypeDefinitionIndex = 11094;

	class ParkourTriggerEventContentRow : public ::System::Object
	{
	public:
		::System::String* SpritePath; // 0x10
		::System::UInt32 ID; // 0x18
		::RPG::GameCore::ParkourTalkType TriggerShowType; // 0x1C
		::RPG::Client::TextID TextContent; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURTRIGGEREVENTCONTENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ParkourTriggerEventContentRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParkourTriggerEventContentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURTRIGGEREVENTCONTENTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
