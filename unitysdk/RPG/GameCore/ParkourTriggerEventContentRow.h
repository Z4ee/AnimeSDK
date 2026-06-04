#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ParkourTalkType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PARKOURTRIGGEREVENTCONTENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x199E7C10)
#define RPG_GAMECORE_PARKOURTRIGGEREVENTCONTENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x199E7E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParkourTriggerEventContentRow_TypeDefinitionIndex = 11542;

	class ParkourTriggerEventContentRow : public ::System::Object
	{
	public:
		::System::String* SpritePath; // 0x10
		::RPG::Client::TextID TextContent; // 0x18
		::System::UInt32 ID; // 0x28
		::RPG::GameCore::ParkourTalkType TriggerShowType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURTRIGGEREVENTCONTENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParkourTriggerEventContentRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParkourTriggerEventContentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURTRIGGEREVENTCONTENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
