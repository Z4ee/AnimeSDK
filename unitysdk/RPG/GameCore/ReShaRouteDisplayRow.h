#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RESHAROUTEDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D388670)
#define RPG_GAMECORE_RESHAROUTEDISPLAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D388F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReShaRouteDisplayRow_TypeDefinitionIndex = 13720;

	class ReShaRouteDisplayRow : public ::System::Object
	{
	public:
		::System::String* AssistantImagePanelPrefab; // 0x10
		::System::String* RoutePanelPrefab; // 0x18
		::System::String* HiddenRouteUnlockFloorSavedValueKey; // 0x20
		::System::String* HiddenRouteClearFloorSavedValueKey; // 0x28
		::RPG::Client::TextID NoClueHint; // 0x30
		::RPG::Client::TextID RouteName; // 0x40
		::RPG::Client::TextID HintText; // 0x50
		::System::UInt32 ID; // 0x60
		::System::UInt32 AssistantItemID; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESHAROUTEDISPLAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReShaRouteDisplayRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReShaRouteDisplayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESHAROUTEDISPLAYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
