#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TEXTJOINCONDITIONALITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1789A0D0)
#define RPG_GAMECORE_TEXTJOINCONDITIONALITEMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1789A290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TextJoinConditionalItemRow_TypeDefinitionIndex = 14011;

	class TextJoinConditionalItemRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID TextJoinText; // 0x10
		::System::UInt32 UnlockID; // 0x20
		::System::UInt32 TextJoinItemID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTJOINCONDITIONALITEMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TextJoinConditionalItemRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TextJoinConditionalItemRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTJOINCONDITIONALITEMROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
