#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERCHEERSCOMMENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D03E240)
#define RPG_GAMECORE_DRINKMAKERCHEERSCOMMENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D03E4A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerCheersCommentRow_TypeDefinitionIndex = 13103;

	class DrinkMakerCheersCommentRow : public ::System::Object
	{
	public:
		::System::String* HeadIconPath; // 0x10
		::System::Boolean IsProtagonist; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::UInt32 UnlockQuest; // 0x20
		::RPG::Client::TextID Comment; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSCOMMENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DrinkMakerCheersCommentRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerCheersCommentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSCOMMENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
