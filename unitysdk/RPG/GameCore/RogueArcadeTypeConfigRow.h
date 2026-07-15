#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEARCADETYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C4A5FD0)
#define RPG_GAMECORE_ROGUEARCADETYPECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A6850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueArcadeTypeConfigRow_TypeDefinitionIndex = 14091;

	class RogueArcadeTypeConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* PicPathList; // 0x10
		::System::UInt32 ArcadeID; // 0x18
		::RPG::Client::TextID Desc; // 0x20
		::RPG::Client::TextID ExitDesc; // 0x30
		::RPG::Client::TextID BriefName; // 0x40
		::RPG::Client::TextID DetailedName; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEARCADETYPECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueArcadeTypeConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueArcadeTypeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEARCADETYPECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
