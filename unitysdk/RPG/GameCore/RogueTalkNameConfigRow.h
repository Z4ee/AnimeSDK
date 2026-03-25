#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUETALKNAMECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1765CF30)
#define RPG_GAMECORE_ROGUETALKNAMECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1765D5F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTalkNameConfigRow_TypeDefinitionIndex = 13540;

	class RogueTalkNameConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 TalkNameID; // 0x18
		::System::UInt32 ImageID; // 0x1C
		::RPG::Client::TextID SubName; // 0x20
		::RPG::Client::TextID Name; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTalkNameConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTalkNameConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
