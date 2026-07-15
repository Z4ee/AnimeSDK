#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TAROTBOOKCLUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D0CCA40)
#define RPG_GAMECORE_TAROTBOOKCLUEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0CCC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookClueRow_TypeDefinitionIndex = 14621;

	class TarotBookClueRow : public ::System::Object
	{
	public:
		::System::UInt32 Style; // 0x10
		::System::UInt32 ID; // 0x14
		::RPG::Client::TextID Name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKCLUEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TarotBookClueRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotBookClueRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKCLUEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
