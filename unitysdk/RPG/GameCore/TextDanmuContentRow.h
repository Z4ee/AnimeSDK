#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TEXTDANMUCONTENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E1D2230)
#define RPG_GAMECORE_TEXTDANMUCONTENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D23B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TextDanmuContentRow_TypeDefinitionIndex = 15019;

	class TextDanmuContentRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Content; // 0x10
		::System::UInt32 ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTDANMUCONTENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TextDanmuContentRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TextDanmuContentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTDANMUCONTENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
