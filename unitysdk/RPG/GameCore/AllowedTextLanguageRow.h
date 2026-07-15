#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ALLOWEDTEXTLANGUAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A053FC0)
#define RPG_GAMECORE_ALLOWEDTEXTLANGUAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A054B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AllowedTextLanguageRow_TypeDefinitionIndex = 12167;

	class AllowedTextLanguageRow : public ::System::Object
	{
	public:
		::System::String* Ellipsis; // 0x10
		::System::String* FontName; // 0x18
		::System::String* TextLanguageKey; // 0x20
		::System::String* CondensedFontName; // 0x28
		::System::String* NoLeading; // 0x30
		::System::String* PSFontName; // 0x38
		::System::String* CondensedFont; // 0x40
		::System::String* LanguageCultureCode; // 0x48
		::System::String* PSFont; // 0x50
		::System::String* Font; // 0x58
		::System::String* LogoImgPath; // 0x60
		::System::String* SDKkey; // 0x68
		::System::Single RubyStrRatio; // 0x70
		::System::Single TextureScale; // 0x74
		::System::Boolean RubyHoldAlignSpace; // 0x78
		::System::Boolean Justify; // 0x79
		::System::Boolean ReplaceSpaceWithNBSPInRuby; // 0x7A
		::System::Boolean NoWrap; // 0x7B
		::System::UInt32 LanguageType; // 0x7C
		::System::UInt32 FontGrowSize; // 0x80
		::RPG::Client::TextID ShowString; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDTEXTLANGUAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AllowedTextLanguageRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AllowedTextLanguageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDTEXTLANGUAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
