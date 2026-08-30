#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FuncUnlockPromptType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FUNCUNLOCKHINTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DCBF9F0)
#define RPG_GAMECORE_FUNCUNLOCKHINTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCBFD00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FuncUnlockHintRow_TypeDefinitionIndex = 13213;

	class FuncUnlockHintRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::TextID SubTitle; // 0x18
		::RPG::Client::TextID Title; // 0x28
		::RPG::Client::TextID Desc; // 0x38
		::System::UInt32 UnlockID; // 0x48
		::RPG::GameCore::FuncUnlockPromptType Type; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCUNLOCKHINTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FuncUnlockHintRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FuncUnlockHintRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCUNLOCKHINTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
