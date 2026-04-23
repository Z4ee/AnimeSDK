#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CAKECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18765DE0)
#define RPG_GAMECORE_CAKECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18766280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeConfigRow_TypeDefinitionIndex = 12212;

	class CakeConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CatCaughtLines; // 0x10
		::System::String* CakeDarkMatPath; // 0x18
		::System::String* CatMatPath; // 0x20
		::Il2CppArray<::System::UInt32>* CatMissedLines; // 0x28
		::System::String* CatCakeHeadIcon; // 0x30
		::System::String* CatCakeTailPath; // 0x38
		::System::String* CatCakeMiniIcon; // 0x40
		::System::UInt32 ID; // 0x48
		::System::UInt32 CatTailColour; // 0x4C
		::System::UInt32 NPCID; // 0x50
		::RPG::Client::TextID RuanMadeCakeStory; // 0x58
		::RPG::Client::TextID RuanMadeCakeName; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::CakeConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
