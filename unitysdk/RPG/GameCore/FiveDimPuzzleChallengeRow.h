#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMPUZZLECHALLENGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17206210)
#define RPG_GAMECORE_FIVEDIMPUZZLECHALLENGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x172068D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPuzzleChallengeRow_TypeDefinitionIndex = 12902;

	class FiveDimPuzzleChallengeRow : public ::System::Object
	{
	public:
		::System::String* UIActiveGP; // 0x10
		::Il2CppArray<::System::UInt32>* RelatedMissionIDList; // 0x18
		::System::String* PuzzleStateGP; // 0x20
		::Il2CppArray<::System::String*>* ProgressGPList; // 0x28
		::RPG::Client::TextID DescText; // 0x30
		::RPG::Client::TextID FinishDescText; // 0x40
		::System::UInt32 InstanceID; // 0x50
		::System::UInt32 FloorID; // 0x54
		::System::UInt32 GroupID; // 0x58
		::RPG::Client::TextID ActiveDescText; // 0x60
		::RPG::Client::TextID FinishNameText; // 0x70
		::RPG::Client::TextID ActiveNameText; // 0x80
		::System::UInt32 PuzzleID; // 0x90
		::System::Int16 ProgressLimit; // 0x94
		::RPG::Client::TextID NameText; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPUZZLECHALLENGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::FiveDimPuzzleChallengeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPuzzleChallengeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPUZZLECHALLENGEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
