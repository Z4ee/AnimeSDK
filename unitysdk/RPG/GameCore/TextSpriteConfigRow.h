#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TEXTSPRITECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1789A630)
#define RPG_GAMECORE_TEXTSPRITECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1789A760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TextSpriteConfigRow_TypeDefinitionIndex = 14013;

	class TextSpriteConfigRow : public ::System::Object
	{
	public:
		::System::String* SpriteName; // 0x10
		::System::String* SpritePath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTSPRITECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TextSpriteConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TextSpriteConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTSPRITECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
