#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IconType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace System { class String; }

#define RPG_CLIENT_HEADICONDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD3B0F50)

namespace RPG::Client
{
	inline static constexpr unsigned int HeadIconDisplayData_TypeDefinitionIndex = 65713;

	class HeadIconDisplayData : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::RPG::GameCore::IconType Type; // 0x18
		::System::UInt32 SortType; // 0x1C
		::System::Boolean IsVisible; // 0x20
		::System::Boolean IsNew; // 0x21
		::System::UInt32 AvatarID; // 0x24
		::System::UInt32 ID; // 0x28
		::System::UInt32 ReleaseTime; // 0x2C

		::System::Void _ctor(::RPG::Client::ItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADICONDISPLAYDATA__CTOR_OFFSET))(this, a1);
		}
	};
}
