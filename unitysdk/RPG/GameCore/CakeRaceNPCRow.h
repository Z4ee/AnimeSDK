#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CAKERACENPCROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x187733B0)
#define RPG_GAMECORE_CAKERACENPCROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18773670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceNPCRow_TypeDefinitionIndex = 10528;

	class CakeRaceNPCRow : public ::System::Object
	{
	public:
		::System::String* NPCIcon; // 0x10
		::Il2CppArray<::System::UInt32>* EmojiIDList; // 0x18
		::Il2CppArray<::System::UInt32>* MessageIDList; // 0x20
		::System::String* NPCAIJsonPath; // 0x28
		::RPG::Client::TextID NPCName; // 0x30
		::System::UInt32 NPCID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACENPCROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::CakeRaceNPCRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceNPCRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACENPCROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
