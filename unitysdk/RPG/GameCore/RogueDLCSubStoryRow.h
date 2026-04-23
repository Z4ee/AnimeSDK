#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCSUBSTORYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D11460)
#define RPG_GAMECORE_ROGUEDLCSUBSTORYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D116F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCSubStoryRow_TypeDefinitionIndex = 14002;

	class RogueDLCSubStoryRow : public ::System::Object
	{
	public:
		::System::String* ImgPath; // 0x10
		::System::String* OptionPath; // 0x18
		::System::String* LevelGraphPath; // 0x20
		::System::UInt32 Layer; // 0x28
		::System::UInt32 RogueDLCSubStoryID; // 0x2C
		::RPG::Client::TextID SubStoryName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCSUBSTORYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueDLCSubStoryRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCSubStoryRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCSUBSTORYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
