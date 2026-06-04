#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PHOTOEXHIBITIONCOMMENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19A02780)
#define RPG_GAMECORE_PHOTOEXHIBITIONCOMMENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19A029B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoExhibitionCommentRow_TypeDefinitionIndex = 11550;

	class PhotoExhibitionCommentRow : public ::System::Object
	{
	public:
		::System::String* NpcHandIcon; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::RPG::Client::TextID Reply; // 0x28
		::System::UInt32 ID; // 0x38

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
