#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FuncUnlockPromptType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FUNCUNLOCKHINTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17224260)
#define RPG_GAMECORE_FUNCUNLOCKHINTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17224570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FuncUnlockHintRow_TypeDefinitionIndex = 12162;

	class FuncUnlockHintRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 UnlockID; // 0x18
		::RPG::GameCore::FuncUnlockPromptType Type; // 0x1C
		::RPG::Client::TextID Title; // 0x20
		::RPG::Client::TextID Desc; // 0x30
		::RPG::Client::TextID SubTitle; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCUNLOCKHINTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::FuncUnlockHintRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FuncUnlockHintRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCUNLOCKHINTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
