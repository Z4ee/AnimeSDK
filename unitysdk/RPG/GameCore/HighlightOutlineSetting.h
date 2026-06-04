#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HIGHLIGHTOUTLINESETTING_METHOD_2_12123BF3F4A917BA_OFFSET UNITYSDK_OFFSET(0x19832B70)
#define RPG_GAMECORE_HIGHLIGHTOUTLINESETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x19832D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HighlightOutlineSetting_TypeDefinitionIndex = 16278;

	class HighlightOutlineSetting : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single HightlightWidth; // 0x10
		::System::Single HightlightWidth2; // 0x14
		::System::String* HightlightColor; // 0x18
		::System::String* HightlightColor2; // 0x20
		::System::Single Pow; // 0x28
		::System::Single OutlineFadeout; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIGHLIGHTOUTLINESETTING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_12123BF3F4A917BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HighlightOutlineSetting*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HighlightOutlineSetting*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIGHLIGHTOUTLINESETTING_METHOD_2_12123BF3F4A917BA_OFFSET))(a1, a2);
		}
	};
}
