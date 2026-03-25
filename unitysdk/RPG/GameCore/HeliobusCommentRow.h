#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HeliobusTendencyType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HELIOBUSCOMMENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1729F990)
#define RPG_GAMECORE_HELIOBUSCOMMENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x172A0150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusCommentRow_TypeDefinitionIndex = 12581;

	class HeliobusCommentRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PlayerCommentIDList; // 0x10
		::RPG::GameCore::HeliobusTendencyType Tendency; // 0x18
		::RPG::Client::TextID HeliobusCommentTextID; // 0x20
		::RPG::Client::TextID CommentOptionTextID; // 0x30
		::System::UInt32 HeliobusUserID; // 0x40
		::System::UInt32 ReplyIncomeReward; // 0x44
		::System::Boolean IsPlayerComment; // 0x48
		::System::UInt32 HeliobusCommentID; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCOMMENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::HeliobusCommentRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeliobusCommentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCOMMENTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
