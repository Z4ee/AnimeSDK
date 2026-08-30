#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GAMEENTRYSTAGE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D13CAC0)
#define RPG_GAMECORE_GAMEENTRYSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D13CCD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameEntryStage_TypeDefinitionIndex = 16286;

	class GameEntryStage : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 StageID; // 0x10
		::System::String* BackGroundPath; // 0x18
		::System::String* StageTypePath; // 0x20
		::System::String* StageNumber; // 0x28
		::Il2CppArray<::System::UInt32>* CharacterIDList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTRYSTAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GameEntryStage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GameEntryStage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTRYSTAGE_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
