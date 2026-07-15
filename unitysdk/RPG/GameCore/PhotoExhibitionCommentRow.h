#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PHOTOEXHIBITIONCOMMENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4BCA80)
#define RPG_GAMECORE_PHOTOEXHIBITIONCOMMENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4BCCB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoExhibitionCommentRow_TypeDefinitionIndex = 11650;

	class PhotoExhibitionCommentRow : public ::System::Object
	{
	public:
		::System::String* NpcHandIcon; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::System::UInt32 ID; // 0x28
		::RPG::Client::TextID Reply; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOEXHIBITIONCOMMENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoExhibitionCommentRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoExhibitionCommentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOEXHIBITIONCOMMENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
