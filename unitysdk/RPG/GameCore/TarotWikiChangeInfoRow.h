#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TAROTWIKICHANGEINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5C0C70)
#define RPG_GAMECORE_TAROTWIKICHANGEINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C0EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotWikiChangeInfoRow_TypeDefinitionIndex = 15074;

	class TarotWikiChangeInfoRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID NewTitle; // 0x10
		::System::UInt32 ChangeID; // 0x20
		::System::UInt32 UnlockID; // 0x24
		::RPG::Client::TextID NewDetails; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTWIKICHANGEINFOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TarotWikiChangeInfoRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotWikiChangeInfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTWIKICHANGEINFOROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
