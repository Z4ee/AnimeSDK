#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TAROTBOOKCARDPACKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5BD550)
#define RPG_GAMECORE_TAROTBOOKCARDPACKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5BD6D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookCardPackRow_TypeDefinitionIndex = 15056;

	class TarotBookCardPackRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::Client::TextID Hint; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKCARDPACKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TarotBookCardPackRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotBookCardPackRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKCARDPACKROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
