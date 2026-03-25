#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RESHAROUTEDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17583140)
#define RPG_GAMECORE_RESHAROUTEDISPLAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x175839E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReShaRouteDisplayRow_TypeDefinitionIndex = 12632;

	class ReShaRouteDisplayRow : public ::System::Object
	{
	public:
		::System::String* HiddenRouteUnlockFloorSavedValueKey; // 0x10
		::System::String* HiddenRouteClearFloorSavedValueKey; // 0x18
		::System::String* RoutePanelPrefab; // 0x20
		::System::String* AssistantImagePanelPrefab; // 0x28
		::RPG::Client::TextID RouteName; // 0x30
		::System::UInt32 ID; // 0x40
		::System::UInt32 AssistantItemID; // 0x44
		::RPG::Client::TextID HintText; // 0x48
		::RPG::Client::TextID NoClueHint; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESHAROUTEDISPLAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ReShaRouteDisplayRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReShaRouteDisplayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESHAROUTEDISPLAYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
