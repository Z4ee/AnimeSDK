#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKEDIALOGUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x195E2F80)
#define RPG_GAMECORE_CAKEDIALOGUEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x195E3140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeDialogueRow_TypeDefinitionIndex = 12301;

	class CakeDialogueRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID RuanMadeCakeDialogue; // 0x10
		::System::UInt32 CatID; // 0x20
		::System::UInt32 ID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKEDIALOGUEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeDialogueRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeDialogueRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKEDIALOGUEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
