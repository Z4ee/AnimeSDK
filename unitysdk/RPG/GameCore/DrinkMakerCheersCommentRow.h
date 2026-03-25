#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERCHEERSCOMMENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x171763B0)
#define RPG_GAMECORE_DRINKMAKERCHEERSCOMMENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17176610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerCheersCommentRow_TypeDefinitionIndex = 12054;

	class DrinkMakerCheersCommentRow : public ::System::Object
	{
	public:
		::System::String* HeadIconPath; // 0x10
		::System::UInt32 UnlockQuest; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::Boolean IsProtagonist; // 0x20
		::RPG::Client::TextID Comment; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSCOMMENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DrinkMakerCheersCommentRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerCheersCommentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSCOMMENTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
