#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TEXTSPRITECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E1D2F30)
#define RPG_GAMECORE_TEXTSPRITECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D3040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TextSpriteConfigRow_TypeDefinitionIndex = 15118;

	class TextSpriteConfigRow : public ::System::Object
	{
	public:
		::System::String* SpriteName; // 0x10
		::System::String* SpritePath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTSPRITECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TextSpriteConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TextSpriteConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTSPRITECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
