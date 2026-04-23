#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChessRogueMainStoryToastType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCMAINSTORYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D0E320)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D0FF30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCMainStoryRow_TypeDefinitionIndex = 13994;

	class RogueDLCMainStoryRow : public ::System::Object
	{
	public:
		::System::String* MainStoryButtonIcon; // 0x10
		::RPG::GameCore::ChessRogueMainStoryToastType MainStoryToastType; // 0x18
		::System::UInt32 UnlockPoint; // 0x1C
		::System::UInt32 MainStoryID; // 0x20
		::System::UInt32 Layer; // 0x24
		::RPG::Client::TextID MainStoryName; // 0x28
		::System::UInt32 UnlockAeonDimension; // 0x38
		::System::Boolean IsBonusUnlock; // 0x3C
		::RPG::Client::TextID BonusToast; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueDLCMainStoryRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCMainStoryRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
