#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TAROTBOOKCARDPACKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x177D4370)
#define RPG_GAMECORE_TAROTBOOKCARDPACKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x177D44F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookCardPackRow_TypeDefinitionIndex = 13950;

	class TarotBookCardPackRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Hint; // 0x10
		::System::UInt32 ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKCARDPACKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TarotBookCardPackRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotBookCardPackRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKCARDPACKROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
