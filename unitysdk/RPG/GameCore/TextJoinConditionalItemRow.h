#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TEXTJOINCONDITIONALITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C14CC70)
#define RPG_GAMECORE_TEXTJOINCONDITIONALITEMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C14CE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TextJoinConditionalItemRow_TypeDefinitionIndex = 14678;

	class TextJoinConditionalItemRow : public ::System::Object
	{
	public:
		::System::UInt32 UnlockID; // 0x10
		::System::UInt32 TextJoinItemID; // 0x14
		::RPG::Client::TextID TextJoinText; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTJOINCONDITIONALITEMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TextJoinConditionalItemRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TextJoinConditionalItemRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTJOINCONDITIONALITEMROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
