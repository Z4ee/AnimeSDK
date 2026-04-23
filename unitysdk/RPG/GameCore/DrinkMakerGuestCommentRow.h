#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DrinkMakerCommentType.h"
#include "unitysdk/RPG/GameCore/DrinkMakerSatifyCommentTriggerType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERGUESTCOMMENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x188870B0)
#define RPG_GAMECORE_DRINKMAKERGUESTCOMMENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x188873E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerGuestCommentRow_TypeDefinitionIndex = 12473;

	class DrinkMakerGuestCommentRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::Int32>* TriggerTypeParamList; // 0x18
		::System::UInt32 Weight; // 0x20
		::RPG::GameCore::DrinkMakerSatifyCommentTriggerType SatisfyTriggerType; // 0x24
		::RPG::Client::TextID CommentContent; // 0x28
		::System::UInt32 CommentID; // 0x38
		::System::UInt32 GuestID; // 0x3C
		::RPG::GameCore::DrinkMakerCommentType Type; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTCOMMENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DrinkMakerGuestCommentRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerGuestCommentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTCOMMENTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
