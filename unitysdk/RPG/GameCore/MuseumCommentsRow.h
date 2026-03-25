#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MUSEUMCOMMENTSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1745FBA0)
#define RPG_GAMECORE_MUSEUMCOMMENTSROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1745FEA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumCommentsRow_TypeDefinitionIndex = 13054;

	class MuseumCommentsRow : public ::System::Object
	{
	public:
		::System::String* CommentIconPath; // 0x10
		::RPG::Client::TextID CommentName; // 0x18
		::RPG::Client::TextID CommentContent; // 0x28
		::System::Boolean IsPositive; // 0x38
		::System::UInt32 AreaID; // 0x3C
		::System::UInt32 CommentID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMCOMMENTSROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MuseumCommentsRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MuseumCommentsRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMCOMMENTSROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
