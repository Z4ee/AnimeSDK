#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HeliobusTendencyType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HELIOBUSCOMMENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7312E0)
#define RPG_GAMECORE_HELIOBUSCOMMENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D731AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusCommentRow_TypeDefinitionIndex = 13747;

	class HeliobusCommentRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PlayerCommentIDList; // 0x10
		::RPG::GameCore::HeliobusTendencyType Tendency; // 0x18
		::System::UInt32 HeliobusUserID; // 0x1C
		::RPG::Client::TextID HeliobusCommentTextID; // 0x20
		::System::UInt32 ReplyIncomeReward; // 0x30
		::System::UInt32 HeliobusCommentID; // 0x34
		::RPG::Client::TextID CommentOptionTextID; // 0x38
		::System::Boolean IsPlayerComment; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCOMMENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HeliobusCommentRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeliobusCommentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCOMMENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
